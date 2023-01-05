#include<iostream>
#include<map>
using namespace std;

void solveCase() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Maintaining a Freq map for every element in arr
    map<int, int> frequency;
    for(int i=0; i<n; i++) {
        if(!frequency.count(arr[i])){
            frequency[arr[i]] = 1;
        }
        else {
            frequency[arr[i]]++;
        }
    }

    // For a valid Solution to exist frequency[x] must be multiple of x
    // if not we print -1 & return
    for(auto i : frequency){
        if(i.second%i.first != 0){
            cout << "-1" << endl;
            return;
        }
    }

    // Make a curr map for storing count of every x placed and intialize every value to 0
    map<int, int> curr;
    for(auto i : frequency){
        curr[i.first] = 0;
    }

    // Make a map mp to store which x is mapped to which element to place & intialize it to -1
    map<int, int> mp;
    for(auto i : frequency){
        mp[i.first] = -1;
    }

    // Now We start placing elements from 1 coz we have to make A lexicographically smallest
    int nxt = 1;
    for(int i=0; i<n; i++){

        // if arr[i] is not mapped to any element previously
        if(mp[arr[i]] == -1){
            mp[arr[i]] = nxt++;
        }
        else if(curr[arr[i]] == arr[i]){ // if curr[arr[i]] reached max frequency of it i.e. arr[i]
            mp[arr[i]] = nxt++;
            curr[arr[i]] = 0;
        }

        // output the mapped value after processing
        cout << mp[arr[i]] << " ";

        // As 1 mapped value placed increment its count
        curr[arr[i]]++;
    }
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--){
        solveCase();
    }

    return 0;
}