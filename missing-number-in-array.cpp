
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int totalsum = ((n*(n+1))/2);
        int sum = 0;
        for (int i = 0; i < array.size(); i++)
        {
            sum+=array[i];
        }
        int missnum = totalsum - sum;
        return missnum;
    }
};