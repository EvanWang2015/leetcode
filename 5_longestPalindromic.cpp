/*
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
*/

//Expand around center

string longestPalindrome(string s) {
    int len = s.size();
    if (len <= 1) return s;
    int lpos =0, len=0;
	
	for(int i=0; i<n-1; i++)
	{
		int count=0; 
		while(s[i]==s[i+1] && ++i<n) 
			count++;
			
		int end =i;
		int start = i-count;
		
		while(start>=0 && end<n && s[--start]=s[++end]);
		
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