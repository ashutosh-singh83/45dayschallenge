class Solution {
public:
    int reverse(int x) {
        long long ltd=0;
        while(x){
            ltd=ltd*10+x%10;
            x/=10;
        }
        if(ltd<(-pow(2,31))||ltd>pow(2,31)-1){
            return 0;
        }
        return ltd;
    }
};