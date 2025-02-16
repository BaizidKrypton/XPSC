class Solution {
    public:
    
        void fun(vector<int>& candidates, int target, vector<int>& cur, int idx, vector<vector<int>>& result)
        {
            if(target<0)
            {
                return;
            }
            if(target==0)
            {
                result.push_back(cur);
                return;
            }
    
            for(int i=idx; i<candidates.size(); i++)
            {
                if(i>idx && candidates[i]==candidates[i-1])
                {
                    continue;
                }
    
                cur.push_back(candidates[i]);
                fun(candidates, target-candidates[i], cur, i+1, result);
                cur.pop_back();
            }
        }
    
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
        {
            vector<vector<int>> result;
            vector<int> cur;
    
            sort(candidates.begin(),candidates.end());
            fun(candidates,target,cur,0,result);
    
            return result;    
        }
    };