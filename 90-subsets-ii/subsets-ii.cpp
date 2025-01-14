class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        set <vector<int>> subset;
        sort(nums.begin(),nums.end());
        for(int i =0;i<(1<<n);i++){
            vector<int> list;
            for(int j = 0; j<n;++j){
                if(i & (1<<j)){
                    list.push_back(nums[j]);
                }
            }
            subset.insert(list); // to store unique subsets
        }
         for(auto it:subset)
        {
            result.push_back(it);//convert set to vector
        }
        return result;
    }
};