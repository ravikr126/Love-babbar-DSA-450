Union of two arrays 

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int doUnion(int *, int , int *, int);

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	   
	    cout << doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}// } Driver Code Ends


//User function template in C++

// a and b : given array with n and m size respectively
#include <bits/stdc++.h>
int doUnion(int a1[], int n, int a2[], int m)  {
   set<int>s;
   for(int i=0;i<n;i++)
   s.insert(a1[i]);
   for(int i=0;i<m;i++)
   s.insert(a2[i]);
   
   return s.size();
   
}