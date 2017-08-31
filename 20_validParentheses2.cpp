class Solution {
public:
    bool isValid(string s) {
        
        int size = s.length();
        
        vector<char> Parentheses; 
        
        
        for(char& c: s)
        {
            switch(c)
            {
                case '(':
                case '{':
                case '[':
                    {
                        Parentheses.push_back(c);
                        break;
                    }
                case ')':
                    {
                        if(Parentheses.empty() || Parentheses.back()!='(')
                            return false;
                        
                        else
                            Parentheses.pop_back();
                        break;
                    }
                case '}':
                    {
                        if(Parentheses.empty() || Parentheses.back()!='{')
                            return false;
                        Parentheses.pop_back();
                        break;
                    }
                case ']':
                    {
                        if(Parentheses.empty()|| Parentheses.back()!='[')
                            return false;
                        Parentheses.pop_back();
                        break;
                    }
                default:
                    return false;
            }
        }
        
      return Parentheses.empty();    
    }
};