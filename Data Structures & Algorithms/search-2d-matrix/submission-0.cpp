class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(matrix[mid][0]<=target && matrix[mid][m-1]>=target){
                int l2=0,h2=m-1;
                while(l2<=h2){
                    int mid2=l2+(h2-l2)/2;
                    if(matrix[mid][mid2]==target) return true;
                    else if(matrix[mid][mid2]>target) h2=mid2-1;
                    else l2=mid2+1;
                }
                return false;
            }
            else if(matrix[mid][0]>target) h=mid-1;
            else l=mid+1;
        }

        return false;
    }
};
