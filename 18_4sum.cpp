class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        int n=nums.size();
        
        for(int i=0; i<n-3; i++)
        {
            
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            if(nums[i]+nums[n-1]+nums[n-2]+nums[n-3]<target) continue;
            for(int j=i+1; j<n-2; j++)
            {
                vector<int> quad(4);
                int front = j+1;
                int back = n-1;                
                while(front<back)
                {
                    int sum = nums[i]+nums[j]+nums[front]+nums[back];
                    if(sum>target)
                        back--;
                    else if(sum<target)
                        front++;
                    else
                    {
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[front];
                        quad[3]=nums[back];
                        result.push_back(quad);
                       
                        while(front<back && nums[front]==quad[2]) front++;
                        while(front<back && nums[back]==quad[3]) back--;
                    }
                    
                }
                bool flag= false;
                 while(j<n-1 && nums[j]==quad[1])
                 {
                     j++;
                     flag=true;
                 }
                if(flag)
                {
                    j--;
                }
            
            
            }
            
			while(i+1<n-1 && nums[i]==nums[i+1])
				i++;
        }
        
        return result;
    }
};