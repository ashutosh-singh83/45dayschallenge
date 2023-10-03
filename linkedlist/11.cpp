class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){//n-1 passes
           bool flag=false;
           for(int j=0;j<n-1-i;j++){//n-1-i comparisons
            if(nums[j]>nums[j+1]){
                flag=true;
                swap(nums[j],nums[j+1]);
            }

        }
        if(flag==false) break;
    }
    return;
    }
};