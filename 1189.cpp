class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(auto x:text){
            string b = "balloon";
            if(b.find(x)!=string::npos){
                mp[x]++;
            }
            
        }
        int m = INT_MAX;
        for(auto x:mp){
            cout<<x.first<<endl;
        }
        
        if(mp.size()>=5  ){
            mp['o']/=2; mp['l']/=2;
        for(auto x:mp){
            m = min(m,x.second);
        }}
        return m==INT_MAX?0:m;
    }
};