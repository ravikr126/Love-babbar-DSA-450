//Union of two arrays

//Initial template for C++

#include <bits/stdc++.h>
	using namespace std;

int doUnion(int *, int, int *, int);

int main()
{

	int t;
	cin >> t;

	while (t--)
	{

		int n, m;
		cin >> n >> m;
		int a[n], b[m];

		for (int i = 0; i < n; i++)
			cin >> a[i];

		for (int i = 0; i < m; i++)
			cin >> b[i];

		cout << doUnion(a, n, b, m) << endl;
	}

	return 0;
} // } Driver Code Ends

//User function template in C++

// a and b : given array with n and m size respectively
#include <bits/stdc++.h>
int doUnion(int a1[], int n, int a2[], int m)
{
	//method 1
	set<int> s;
	for (int i = 0; i < n; i++)
		s.insert(a1[i]);
	for (int i = 0; i < m; i++)
		s.insert(a2[i]);

	return s.size();

	//method 2
	map<int, int> mp;

	// Inserting array elements in mp
	for (int i = 0; i < n; i++)
		mp.insert({a[i], i});

	for (int i = 0; i < m; i++)
		mp.insert({b[i], i});
	cout << "The union set of both arrays is :" << endl;
	for (auto itr = mp.begin(); itr != mp.end(); itr++)
		cout << itr->first
			 << " "; // mp will contain only distinct
					 // elements from array a and b
}