/*
Two Sum

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You many assume that each input would have exactly one solution. and you may not use the same element twice.

With two-pass hash table, the time complexity is O(n).
*/

class solution{
public:
	vector<int> twoSum(vector<int> &num, int target)
	{
		unordered_map<int,int> hash;
		for(int i=0; i<num.size(); i++)
		{
			hash.insert(pair<int,int>(num[i], i));
		}
		unordered_map<int,int> ::iterator it;
		for(int i=0; i<num.size(); i++)
		{
			int numTofind = target - num[i];
			it=hash.find(numTofind);
			if(it!=hash.end() && it->second !=i)
			{
				vector<int> result;
				result = {i, it->second};
				return result;
			}
		}
		return {-1,-1};
	}
};

