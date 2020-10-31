class Solution {
public:
    int longestSubarray(vector<int>& nu, int lm) {
        int n=nu.size(),l=0,r=0,len=1;
        multiset<int>s;
        multiset<int>::iterator it;
        s.insert(nu[r++]);
        while(r<n){
            s.insert(nu[r++]);
            if(abs(*(s.rbegin())-*(s.begin()))<=lm)len=max(len,r-l);
            else {
                s.erase(s.find(nu[l++]));
                while(l<r && (abs(*(s.rbegin())-*(s.begin()))>lm) )s.erase(s.find(nu[l++]));
            }
        }
        return len;
    }
};