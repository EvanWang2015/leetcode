

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        sort(nums.begin(), nums.end());
        
        int n=nums.size();
         
        
        for(int i=0; i<n; i++)
        {
            int front = i+1;
            int back = n-1;
            int sum=0;
            while(front<back)
            {
                sum=nums[front]+nums[back]+nums[i];
                if(sum==0)
                {
                    vector<int> triplet(3);
                    triplet[0]=nums[i];
                    triplet[1]=nums[front];
                    triplet[2]=nums[back];
                    result.push_back(triplet);
                }
                else if(sum>0)
                {
                    front++;
                }
                else
                    back--;
            }
        }
        
        return result;
    }
};