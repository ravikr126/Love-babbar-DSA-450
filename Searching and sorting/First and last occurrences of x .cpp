#include <bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n, int x);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n], i;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> ans;
        ans = find(arr, n, x);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<int> find(int arr[], int n, int x)
{
    // code here
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            first = i;
            last = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            if (arr[i] == arr[i + 1])
                last = i + 1;
    }
    vector<int> v;
    v.push_back(first);
    v.push_back(last);
    return v;
}

//2nd method is to use binary search for finding index and then proceed