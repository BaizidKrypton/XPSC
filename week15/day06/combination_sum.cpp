class Solution {
    public:
        set<vector<int>> s;
        void fun(vector<int>& v,int idx,int tar,vector<vector<int>>& ans,vector<int>& com)
        {
            if(idx==v.size() || tar<0)
            {
                return;
            }
            if(tar==0)
            {
                if(s.find(com)==s.end())
                {
                    ans.push_back(com);
                    s.insert(com);
                }
                
                return;
            }
    
            com.push_back(v[idx]);
            fun(v,idx+1,tar-v[idx],ans,com);
            fun(v,idx,tar-v[idx],ans,com);
            com.pop_back();
            fun(v,idx+1,tar,ans,com);
        }
    
        vector<vector<int>> combinationSum(vector<int>& v, int target) 
        {
            vector<vector<int>> ans;
            vector<int> com;
    
            fun(v,0,target,ans,com);
    
            return ans;
        }
    };
