class Solution {
public:
    int maxElement(vector<int>& piles){
        int n = piles.size();
        int maxE = INT_MIN;
        for(int i= 0;i<n;i++){
            maxE = max(maxE,piles[i]);
        }
        return maxE;
    }
    int calculateHour(vector<int>& piles , int hourly){
        int totalH = 0;
        for(int i =0;i<piles.size();i++){
            totalH += ceil((double)piles[i] / (double)hourly);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high = maxElement(piles);
        while(low <= high){
            int mid = (low + high)/2;
            int  totalH = calculateHour(piles,mid);
            if(totalH <= h){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};
