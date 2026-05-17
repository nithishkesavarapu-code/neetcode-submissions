class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
            if(freq[num]>=2) return true;
        }
        return false;
    }
};