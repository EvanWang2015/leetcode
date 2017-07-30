/*
Longest Common Prefix

Write a function to find the longest prefix string amongst an array of strings

We are applying binary search approach, even though it's very unnecessary.
*/

string longestCommonPrefix(vector<string>& strs)
{
	int minLen = INT_MAX;
	int n= strs.size();
	for(int i=0; i<n; i++)
		minLen= minLen>strs[i].size()? strs[i].size():minLen;
	
	if(n==0)
		return "";
	
	string prefix="";
	int low=0, high = minLen;
	
	while(low<=high)
	{
		int mid = low+(high-low)/2;
		bool flag = true;
		for(int i=0; i<=n-1; i++)
		{
			for(int j=low; j<=mid; j++)
			{
				if(strs[i][j]!=strs[0][j])
				{
					flag = false;
					break;
				}
			}
		}
		
		if(flag==true)
		{
			prefix+=strs[0].substr(0,mid-low+1);
			low = mid+1;
		}
		else
			high = mid-1;
		
	}
	
	return prefix;

}