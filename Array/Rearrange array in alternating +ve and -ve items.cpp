#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long int
#define rep1(i,m) for(int i=0;i<m;++i)
#define rep2(i,m) for(int i=0;i<m;++i)
#define dep(i,n) for(int i=n-1;i>=0;--i)
#define all(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi  vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define w(x) int x; cin>>x; while(x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


int main()
{
  int n;
  cin>>n;
  int arr[n];
  rep1(i,n)
  cin>>arr[i];

  int i=0,j=n-1;
  while(i<=j)
  {
       if(arr[i]<0 && arr[j]>0 )
      {
          swap(arr[i],arr[j]);
          i++;
          j--;
      }

      else if(arr[i]>0 && arr[j]<0)
      {
          i++;
          j--;
      }
      
      
      else if(arr[i]>0)
      i++;
      

     else if( arr[j]<0)
     j--;
  }



// if i==0 means we have all negative element in array
// if i==n means we have all positive element in array

if(i==0 || i==n)
{

rep1(i,n)
    {
        cout<<arr[i]<<" ";
    }
}
else {
   int k=0;
   while(k<n && i<n)
    {
        swap(arr[k],arr[i]);
        k=k+2;
        i=i+1;
    }


    rep1(i,n)
    {
        cout<<arr[i]<<" ";
    }

}

    

}