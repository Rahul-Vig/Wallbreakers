// Runtime: 4 ms, faster than 96.63% of C++ online submissions for Fizz Buzz.
// Memory Usage: 10.5 MB, less than 46.67% of C++ online submissions for Fizz Buzz.

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzbuzz;
        
        for(int i = 1; i <= n; i++){
        
        if(i % 3 == 0 && i % 5 == 0) fizzbuzz.push_back("FizzBuzz");
        else if(i % 3 == 0) fizzbuzz.push_back("Fizz");
        else if(i % 5 == 0) fizzbuzz.push_back("Buzz");
        else  fizzbuzz.push_back(to_string(i));
            
        }
        
        return fizzbuzz;
    }
};