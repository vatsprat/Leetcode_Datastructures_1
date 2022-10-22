class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {   
        while(nums1.size()!=m)
        {
            nums1.pop_back();
        }
        if(m==0) nums1=nums2;
        else
       {
        vector<int> temp;
       auto itr = nums1.begin();
       auto itr1 = nums2.begin();
       int a=m+n;
       while(itr!=nums1.end() && itr1!=nums2.end())
       {
           if(*itr>=*itr1)
           {
               temp.push_back(*itr1);
               itr1++;
           }
           else
           {
               temp.push_back(*itr);
               itr++;
           }
       }
       while(itr1!=nums2.end())
       {
           temp.push_back(*itr1);
               itr1++;
       }
        while(itr!=nums1.end())
       {
           temp.push_back(*itr);
               itr++;
       }
        nums1=temp;
    }
    }
};