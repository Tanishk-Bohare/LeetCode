bool isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
    return false;
}
class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,n=s.length(),c=0,mx=0;
        for(;i<n;i++){
            if(i<k){
                if(isVowel(s[i]))c++;
            }
            else{
                if(isVowel(s[i]))c++;
                if(isVowel(s[i-k]))c--;
            }
            mx=max(mx,c);
        }
        return mx;
    }
};