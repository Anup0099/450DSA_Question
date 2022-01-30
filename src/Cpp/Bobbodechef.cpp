#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int a, b, c;
    //     cin >> a >> b >> c;

    //     if ((a + b) == c || (b + c) == a || (a + c) == b)
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
    // }

    vector<int> V={1,2,3,5,6}; // given

    std::vect
    or<int> indices(V.size());
    std::iota(indices.begin(), indices.end(), 0);
    std::random_shuffle(indices.begin(), indices.end());
   for(auto element:indices){
       cout<<element;
   }
    
}