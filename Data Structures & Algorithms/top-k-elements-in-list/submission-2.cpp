class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        int n=nums.size();

        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;

        for(auto [num,count]:freq){
            minheap.push({count,num});

            if(minheap.size()>k){
                minheap.pop();
            }
        }

        while(!minheap.empty()){
            res.push_back(minheap.top().second);
            minheap.pop();
        }

        return res;

    }
};
