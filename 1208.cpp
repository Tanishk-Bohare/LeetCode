class Solution {
public:
    int equalSubstring(string s, string t, int mc) {
        int n=s.length(),i=0,j=0,c=0,len=0;
        while(j<n){
            c+=abs(s[j]-t[j]);
            ++j;
            while(c>mc && i<=j){
                c-=abs(s[i]-t[i]);
                ++i;
            }
            len=max(len,j-i);
        }
        return len;
    }
};