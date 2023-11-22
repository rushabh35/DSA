// diagonal traversal
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>>mp;
        int r = nums.size();
        for(int i=r-1;i>=0;i--){
            int c = nums[i].size();
            for(int j=0;j<c;j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(auto it : mp){
            for(auto &val : it.second){
                ans.push_back(val);
            }
        }
        return ans;
    }

};