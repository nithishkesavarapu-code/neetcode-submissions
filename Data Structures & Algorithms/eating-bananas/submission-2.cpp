class Solution {
public:
    bool check(vector<int>& piles,int h,int mid){
        long long count=0;
        for(int p:piles){
            count+=(p+mid-1)/mid;

            if(count>h) return false;
        }

        return true;;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int res=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(piles,h,mid)){
                res=min(res,mid);
                high=mid-1;
            }
            else low=mid+1;
        }

        return res;
    }
};
