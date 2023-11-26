class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long sum=0;
        long long maxi=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            maxi = max(maxi, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};