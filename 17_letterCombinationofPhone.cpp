/*
Letter commbinations of a phone number
Given a digit string, return all possible letter combinations that the number could represent.
A maping of digit to letters is given below......
*/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> res;
        string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        res.push_back("");
        
        if (digits.empty())
        {
            //res[0]="";
            return vector<string>());
        }
            
        for(int i=0; i<digits.size(); i++)
        {
            string chars=charmap[digits[i]-'0'];
            vector<string> temRes;
            for(int j=0; j<chars.size(); j++)
            {
                for(int k=0; k<res.size(); k++)
                {
                    temRes.push_back(res[k]+chars[j]);
                }
            }
            
            res.swap(temRes);
        }
        
        return res;
    }
};