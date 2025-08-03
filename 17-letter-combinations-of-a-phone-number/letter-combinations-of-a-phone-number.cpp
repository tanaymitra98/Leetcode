class Solution {
private:
    void solve(vector<string> &result, string output, int index, string digits, string mapping[] ){
        //base case when the index goes out of bound we return
            if(index>=digits.length()){
                result.push_back(output);
                return;
            }

            //we get the integer value ot of the stirng of numbers
            int number = digits[index] - '0';

            //we then map it to the mapping array and get the alphabets
            string value  = mapping[number];

            // Try each letter in the current digit's mapping
            for(int i =0 ; i<value.length(); i++){
                output.push_back(value[i]);//puttiong the values in the blank string
                solve(result,output,index+1,digits,mapping); //recursive call
                output.pop_back();//back track 
            }
        }
public:
    vector<string> letterCombinations(string digits) {
        
       vector<string> result;//vector to store  all the posible combinations
       string output = "";//blank string to store each combination
       int index =0;

       if(digits.empty()){//edge case if digits is empty return empty result
        return result;
       }

        //note : use curly  braces not he squre brackets remember 
       string mapping[10] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        //pass the values in the new functin by reference
       solve(result,output,index,digits,mapping);
       return result;
    
    }
};