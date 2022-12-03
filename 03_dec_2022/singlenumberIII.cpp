class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>count;
        vector<int>nums2;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;}
         for(int i=0;i<n;i++){
            if(count[nums[i]]==1)
                nums2.push_back(nums[i]);}
        return nums2;
    }
};