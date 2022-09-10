class Solution {
public:
    
    // my logic! jabtak even hai half krte raho odd aane par uska largest prime factor se divide
    //not my code below!
    int minSteps(int n) {
        
     int primes[11] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
    if (n <= 5) return n == 1 ? 0 : n;
    for (auto i : primes)
        if (n % i == 0) return i + minSteps(n / i);
    return n; 
        
        
    }
};