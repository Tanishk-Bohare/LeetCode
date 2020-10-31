class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>a;
        int n = nums.size();
        int l = pow(2,n);
        sort(begin(nums),end(nums));
        for(int i=0;i<l;i++)
        {
            vector<int> temp;
            for(int j=0;j<n;j++)
            {
                if((i>>j)&1){
                    temp.push_back(nums[j]);
                }
            }
            a.insert(temp);
        }
        for(auto x:a)
        {
            ans.push_back(x);
        }
        return ans;
    }
};