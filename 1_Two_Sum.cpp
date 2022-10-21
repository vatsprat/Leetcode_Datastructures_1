class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   vector<int> ans;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {    
            if(umap.find(target-nums[i])!=umap.end())
            {
                ans.push_back(umap[target-nums[i]]);
                ans.push_back(i);
            }
            umap[nums[i]]=i;
           
        }
     return ans;
       
    }
};