// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int count = 0 ;
        int i =0;
        for(int i=0;i<n;i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                if(A[i]+A[l]+A[r]==X){
                    count++;
                    break;
                }
                else if(A[i]+A[l]+A[r]>X){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return count;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends