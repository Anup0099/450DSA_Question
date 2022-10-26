//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int m) {
	     vector<int> p;

    vector<int> n;

    for (int i = 0; i < m; i++)

    {

        if (arr[i] < 0)
            n.push_back(arr[i]);

        else
            p.push_back(arr[i]);
    }

    int i = 0, j = 0, k = 0;

    while (i < m)

    {

        if (j < p.size())

        {

            arr[i] = p[j];

            i++;
            j++;
        }

        if (k < n.size())

        {

            arr[i] = n[k];

            i++;
            k++;
        }
    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends