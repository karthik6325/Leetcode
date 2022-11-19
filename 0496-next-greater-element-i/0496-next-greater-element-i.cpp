class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0;
        vector<int> v;
        while(i<nums1.size())
        {
          int search=nums1[i];
          int j=0;
          int flag=0;
          while(j<nums2.size())
          {
            if(nums2[j]==search)
            {
              flag=1;
            }
            if((flag==1)&&(nums2[j]>search))
            {
              v.push_back(nums2[j]);
              goto jatt;
            }
            ++j;
          }
          v.push_back(-1);
          jatt:
          ++i;
        }
        return v;
    }
};