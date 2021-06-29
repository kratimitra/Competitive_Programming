class Solution {
public:
    int check(int dis , vector<int>& a, int n, int m)
    {
        int buckets = 1;
        int lastBucket = a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i] - lastBucket>=dis)
            {
                lastBucket = a[i];
                buckets++;
            }
            
            
        }
        
        if(buckets>=m) return true;
        return false;
  }
  
  int maxDistance(vector<int>& position, int m) {
        sort(position.begin() , position.end());
        
        int n = position.size();
        
        int low = 2, high = position[n-1] - position[0];
        
        while(low<=high)
        {
            int mid = (low+high)>>1; 
             // mid signifies minimum distance between the buckets

            if(check(mid , position , n ,m))
            {
                
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
           
        return high;
        
    }
};
