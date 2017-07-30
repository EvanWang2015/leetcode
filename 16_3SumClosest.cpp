/*
Closest sum

Given an array S of n integers, find three integers in S such that the sum is closest to a given numbers, target. 
Return the sum of three integers. You may assume that each input would have exactly one solution.

*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     
        sort(nums.begin(), nums.end());
        
        int n=nums.size();
        int dif=INT_MAX; 
        int res;
        bool left, right;
        for(int i=0; i<n; i++)
        {
            int front = i+1;
			int back = n-1;
			while(front<back)
			{
				int sum = nums[i]+nums[front]+nums[back];
                if(dif>abs(sum-target))
                {
                    dif=abs(sum-target);
                    res=sum;
                    if(dif==0)
                        break;
                }                    
                
				if(sum>target)
					back--;
					
				else
				{
					front++;
				}
			}
            
            if(dif==0)
                break;
        }
        return res;
    }
        
};