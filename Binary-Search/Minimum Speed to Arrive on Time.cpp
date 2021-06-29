class Solution {
public:
    double sum;
    double check(int mid , vector<int> dist, double hour)
    {
        int i;
        sum=0;
        for( i=0;i<dist.size()-1;i++)
            {
                sum+= ceil(dist[i]/(mid+0.00));
            }
            
            sum+= (dist[i]/(mid+0.00));
        
        return sum;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int n=dist.size();
        
        
        int low=1,high=1000000000,ans=INT_MAX;
        
        while(low<=high)
        {
            int mid=(low+high)>>1,k=0;
            
            if(check(mid,dist,hour)<=hour)
            {
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        
        if(ans==INT_MAX)
            ans=-1;
        return ans;
       
        
    }
};
