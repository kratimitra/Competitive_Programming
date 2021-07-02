class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int start = 0, end = n - k;
        int ans = 0;
        while (start <= end) {
            int mid = (start + end)/2;
            if (mid+k == n || x - arr[mid] <= arr[mid+k] - x)
            {
                ans = mid; 
                end = mid - 1; 
            } 
            else
            {
                start = mid + 1; 
            }
        }
        return vector<int>(arr.begin() + ans, arr.begin() + ans + k);
        
        
    }
};
