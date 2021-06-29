/*
A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). 
We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

*/
bool check(int W ,vector<int>& a, int days)
    {
        int n = a.size();
        int maxW = 0;
        int D=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]+maxW>W)
            {
                maxW=a[i];
                D++;
                if(maxW > W) return false; 
                
            }
            else{
                maxW+=a[i];
            }
        }
        
        if(D<=days) return true;
        else return false;
    }

int shipWithinDays(vector<int>& weights, int days) {
        int low=1,high=0;
        int n = weights.size();
        
        for(int i=0;i<n;i++) high+=weights[i];
        
        int ans = 0;
        while(low<=high)
        {
            int mid = (low+high) >> 1;
            
            if(check(mid , weights , days)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
                
            }
        }
        
        return ans;
        
    }
