Cyclically rotate an array by one 

//Initial Template for C++

#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    //store last element to temp
   int temp=arr[n-1];
   //copy 2nd last element to last and soon
   for(int i=n-2;i>=0;--i)
   arr[i+1]=arr[i];
   //put last element to first
   arr[0]=temp;

   
}