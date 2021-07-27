class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestsum=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(abs(target-closestsum)>abs(target-(nums[i]+nums[j]+nums[k])))
                        closestsum=(nums[i]+nums[j]+nums[k]);
                        
                }
            }
        }
        return closestsum;
    }
};
