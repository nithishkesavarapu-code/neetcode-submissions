class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0,r=n-1;
        int storage=0;

        while(l<r){

            storage=max(storage,min(heights[l],heights[r])*(r-l));

            if(heights[r]>heights[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return storage;
    }
};
