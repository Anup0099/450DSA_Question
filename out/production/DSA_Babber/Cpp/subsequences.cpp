#include <bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &vec, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : vec)
        {
            cout << it;
        }
        if (vec.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
    }
    printF(ind + 1, vec, arr, n);
    vec.push_back(arr[ind]);
    printF(ind + 1, vec, arr, n);
    vec.pop_back();
}
// Did you know you can download more RAM? There is a shop with n different pieces of software that increase your RAM. The i-th RAM increasing software takes ai GB of memory to run (temporarily, once the program is done running, you get the RAM back), and gives you an additional bi GB of RAM (permanently). Each software can only be used once. Your PC currently has k GB of RAM.

// Note that you can't use a RAM-increasing software if it takes more GB of RAM to use than what you currently have.

// Since RAM is the most important thing in the world, you wonder, what is the maximum possible amount of RAM achievable?
int main()
{
    int t;
    cin>>t;
    while(t--){
    //    int x,y,z;
    // //    cin>>x>>y>>z;
    //    if(x>=y){
    //        cout<<"PIZZA"<<endl;
    //    }else if(x<y && x<z){
    //        cout<<"NOTHING"<<endl;

    //     }else{
    //         cout<<"BURGER"<<endl;
    //     }
        
        int n,a;
        cin>>n>>a;
        int diff = n-a;
        int ans = min(diff,a);
        cout<<ans<<endl;
        
        


    }

}