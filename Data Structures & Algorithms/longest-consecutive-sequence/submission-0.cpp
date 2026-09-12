class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;

        for(int num:nums){
            st.insert(num);
        }

        int maxLen=0;

        for(int num:st){
            if(st.find(num-1)==st.end()){
                int current=num;
                int count=1;

                while(st.find(current+1)!=st.end()){
                    current++;
                    count++;
                }

                maxLen=max(count,maxLen);
            }
        }

        return maxLen;
    }
};
