class Twitter {
    int timeCounter;

    public static class Tweet {                       // FIX: static (doesn't need outer instance)
        int userId;
        int tweetId;
        int timeCounter;

        public Tweet(int userId, int tweetId, int timeCounter) {
            this.userId = userId;
            this.tweetId = tweetId;
            this.timeCounter = timeCounter;
        }
    }

    public static class User {                        // FIX: static
        int userId;
        List<Tweet> tweets;
        List<User> following;

        public User(int userId, List<Tweet> tweets, List<User> following) {
            this.userId = userId;
            this.tweets = tweets;
            this.following = following;
        }
    }

    HashSet<User> users;
    List<Tweet> tweets;                               // FIX: ArrayList so we can walk newest -> oldest

    public Twitter() {
        timeCounter = 0;
        users = new HashSet<>();
        tweets = new ArrayList<>();
    }

    // FIX: single place to find a user, and actually ADD new users to the set
    private User getOrCreate(int userId) {
        for (User x : users) {
            if (x.userId == userId) return x;
        }
        User u = new User(userId, new ArrayList<>(), new ArrayList<>());
        users.add(u);
        return u;
    }

    public void postTweet(int userId, int tweetId) {
        Tweet tweet = new Tweet(userId, tweetId, timeCounter++);
        tweets.add(tweet);
        getOrCreate(userId).tweets.add(tweet);        // FIX: attach tweet to the user too
        // FIX: removed System.out.println
    }

    public List<Integer> getNewsFeed(int userId) {
        User user = getOrCreate(userId);

        // FIX: ids whose tweets should appear = self + followees
        Set<Integer> allowed = new HashSet<>();
        allowed.add(userId);
        for (User f : user.following) {
            allowed.add(f.userId);
        }

        // FIX: walk from newest to oldest, stop at 10
        List<Integer> feed = new ArrayList<>();
        for (int i = tweets.size() - 1; i >= 0 && feed.size() < 10; i--) {
            Tweet t = tweets.get(i);
            if (allowed.contains(t.userId)) {
                feed.add(t.tweetId);
            }
        }
        return feed;
    }

    public void follow(int followerId, int followeeId) {
        if (followerId == followeeId) return;         // FIX: ignore self-follow
        User user = getOrCreate(followerId);
        User followingU = getOrCreate(followeeId);
        if (!user.following.contains(followingU)) {   // FIX: no duplicate follows
            user.following.add(followingU);
        }
    }

    public void unfollow(int followerId, int followeeId) {
        User user = getOrCreate(followerId);
        User followingU = getOrCreate(followeeId);    // same instance as in follow(), so remove() works
        user.following.remove(followingU);
    }
}