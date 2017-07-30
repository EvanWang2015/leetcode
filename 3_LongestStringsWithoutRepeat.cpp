/*
Longest Substring without repeating characters
*/

class Solution{
public:
string longestPalindrome(string s) {
    int n = s.size();
    if (n <= 1) return s;
    int lpos =0, len=0;
	
	for(int i=0; i<n-1; i++)
	{
		int count=0; 
        
        if(len>(n-i)*2)
            return s.substr(lpos,len);
        
		while(s[i]==s[i+1] && ++i<n) 
			count++;
			
		int end =i;
		int start = i-count;
		
		while(start>=0 && end<n && s[--start]==s[++end]);
		
		start++;
		end--;
		if(len<end-start+1)
		{
			len = end-start+1;
			lpos = start;
		}
			
	}
    return s.substr(lpos, len);
}
};