int find_min(vector<int>& prices,int n){
    int mini=INT_MAX;
    int min_idx=0;
    for(int i=0;i<n;i++){
        if(mini>prices[i]){
            mini=prices[i];
            min_idx=i;
        }
        
    }
    return min_idx; 
}
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxPro=0;
        for(int i=0;i<prices.size();i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
    }
};