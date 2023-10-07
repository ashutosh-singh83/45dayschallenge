class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n=strs.size();

        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[n-1];
        int i=0;
        while(i<s1.size()&&s1[i]==s2[i]){
            i++;
        }
        return s1.substr(0,i);
    }
};