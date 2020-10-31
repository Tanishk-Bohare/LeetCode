class Solution {
public:
    int maxTurbulenceSize(vector<int>& a) {
        int n=a.size(),c=1,mx=1;
        if(n==1)return 1;
        if(a[0]!=a[1] || a[n-1]!=a[n-2])mx=2;
        if(n==2)return mx;
        int f0=0,f1;
        for(int i=1;i<n;++i){
            if(a[i]>a[i-1])f1=1;
            else if(a[i]<a[i-1])f1=-1;
            else f1=0;
            if(f1*f0==-1)++c;
            else if(a[i]==a[i-1])c=1; 
            else c=2;
            mx=max(c,mx);
            f0=f1;
        }
        return mx;
    }
};