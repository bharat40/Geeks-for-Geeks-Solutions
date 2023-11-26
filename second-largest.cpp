//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=arr[0], secondmax=arr[-1];
	    for(int i=0;i<n;i++){
	        if(arr[i]>max)
	        {
	            max=arr[i];
	        }
	    }
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]!=max)
	        {
	            if(secondmax==arr[i])
	            {
	                secondmax=arr[i];
	            }
	            else if(arr[i]>secondmax)
	            {
	                secondmax=arr[i];
	            }
	        }
	    }
	    if(secondmax==arr[-1])
	    {
	        return -1;
	    }
	    else
	    {
	        return secondmax;
	    }
	}
};