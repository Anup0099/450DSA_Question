//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int low = 0, high = n - 1, ans = -1;
    pair<int, int> p;
    sort(arr, arr + n);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            p.first = arr[mid];
            p.second = arr[mid];
            return p;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    if (ans == -1)
    {
        p.first = -1;
        p.second = arr[0];
        return p;
    }
    else if (ans == n - 1)
    {
        p.first = arr[n - 1];
        p.second = -1;
        return p;
    }
    else
    {
        p.first = arr[ans];
        p.second = arr[ans + 1];
        return p;
    
    }
    
}