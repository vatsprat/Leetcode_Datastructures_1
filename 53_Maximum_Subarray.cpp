class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            sum1+=nums[i];
            if(sum1<0) sum1=0;
            if(sum1>sum2) sum2=sum1;
        }
        int min = *max_element(nums.begin(),nums.end());
        if(sum2==0)
        {
            return min;
        }
        return sum2;
    }
};