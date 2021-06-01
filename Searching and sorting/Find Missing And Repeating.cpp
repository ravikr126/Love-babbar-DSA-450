#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int a,b;
        int x[2];
        for(int i=0;i<n;i++)
       {
           if(arr[i]==arr[i+1])
           x[0]=arr[i];
       }
       
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
           {
               x[1]=i+1;
               break;
           }
        }
        
        return x;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends