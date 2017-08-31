class Solution {
public:
    bool isValid(string s) {
        
        enum Suit {parLeft= (char) '(', 
                   parRight= (char) ')', 
                   curLeft=(char) '[', 
                   curRight =(char) ']',
                   barLeft=(char) '{', 
                   barRight=(char) '}'
                  };
        
        int size = s.length();
        
        if(size%2)
            return false;
        
        vector<char> Parentheses; 
        int num=0;
        
        char cur, last;
        bool flag=true;
        
        for(int i=0; i<size; i++)
        {
            cur = s.at(i);
            
            if(cur==parLeft || cur==curLeft || cur==barLeft)
            {
                Parentheses.push_back(s.at(i));
                num++;
            }
            
            if(cur==parRight || cur==curRight || cur==barRight)
            {
                if(Parentheses.size()==0)
                    return false;
                else
                {
                    char prev = Parentheses.back();
                    Parentheses.pop_back();
                    num--;
                    switch(cur)
                    {
                        case parRight:
                            {
                                if (prev!=parLeft)
                                    flag=false;
                                break;
                            }
                        case curRight:
                            {
                                if(prev!=curLeft)
                                    flag = false;
                                break;
                            }
                        case barRight:
                            {
                                if(prev!=barLeft)
                                    flag = false;
                                break;
                            }
                        default:
                            return false;
                    }
                }                
            }
            
            if(flag==false)
                    return false;
        }
         
         if(num!=0)       
             return false;
        
         return true;   
           
    }
};