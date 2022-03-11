class Solution {
public:
  
         int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if (jug1Capacity + jug2Capacity < targetCapacity)
            return false;
        return targetCapacity % gcd (jug1Capacity, jug2Capacity) == 0;
    }
  // bool canMeasureWater(int jug1, int jug2, int n) {
//         // int a=jug1+jug2;
//         // int b=abs(jug1-jug2);
//         int a=jug1,b=jug2;
        
//          for (int i = 0; i * a <= n; i++) {
 
//         // check if it is satisfying the equation
//         if ((n -(i * a)) % b == 0) {
//             cout << "x = " << i << ", y = "
//                  << (n - (i * a)) / b;
//              return true;
//         }
//     }
//         return false;
    // }
};