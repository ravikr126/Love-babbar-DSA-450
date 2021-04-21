class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
     unordered_map<int,int>m;
     for(int i=0;i<n;i++)
     m[arr[i]]++;
     int tp=0;
     for(int i=0;i<n;i++)
    { tp+=m[k-arr[i]];
      if (k - arr[i] == arr[i])
            tp--;
    }
    return tp / 2;
    }
};