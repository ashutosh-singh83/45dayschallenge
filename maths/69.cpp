class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            int rem=(columnNumber-1)%26;
            s+=char('A'+rem);
            columnNumber=(columnNumber-1)/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};