class MyCalendar {
    List<int[]> lst;
    public MyCalendar() {
     lst = new ArrayList<>();
    }


    public boolean book(int startTime, int endTime) {
        
         for (var p : lst)
            if(Math.max(p[0], startTime) < Math.min(endTime, p[1])) return false;
        lst.add(new int[]{startTime, endTime});
        return true;


    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(startTime,endTime);
 */