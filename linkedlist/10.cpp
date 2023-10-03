class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int rangeSum=n*(n+1)/2;
        return sum-rangeSum;
    }
};