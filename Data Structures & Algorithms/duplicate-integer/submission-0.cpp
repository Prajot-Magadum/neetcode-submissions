class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return false;
        unordered_set<int> seen;
        for(int num:nums){
            if(seen.find(num) != seen.end()){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};