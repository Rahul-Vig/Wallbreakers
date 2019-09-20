// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Self Dividing Numbers.
// Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Self Dividing Numbers.

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> selfDividingNums;
          
           int n = left;
           while(left <= right){
              
               int digit = n % 10;
                if(digit == 0 || left % digit != 0) {
                    ++left; 
                    n = left; 
                    continue;
                }
                
                n /= 10;
                if(n == 0) {
                    selfDividingNums.push_back(left);
                    ++left;
                    n = left;
                }
          
           }
            
        return selfDividingNums;
    }
};