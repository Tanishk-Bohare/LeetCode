class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.length(),n2=s2.length();
        int map[26]={0},i=0,j=0,c=n1;
        for(;i<n1;++i)++map[s1[i]-'a'];
        i=0;
        while(j < n2){
            if(map[s2.at(j++) - 'a']-- > 0)
                c--;
            if(c == 0) return true;
            if(j - i == n1 && map[s2.at(i++) - 'a']++ >= 0)
                c++;
        }
        return false;
    }
};