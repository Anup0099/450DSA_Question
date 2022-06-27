#include <bits/stdc++.h>
using namespace std;
bool checkXMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
           if(i==j){
            if(grid[i][j]!=0 ){
                return true;
            }

           }
              else{
                if(grid[i][j]!=0){
                 return false;
                }
              }
        }
    }
    return false;
}
void sortchar(int arr[], char b[], int n)
{
    pair<int, char> pa[n];
    for (int i = 0; i < n; i++)
    {
        pa[i].first = arr[i];
        pa[i].second = b[i];
    }
    sort(pa, pa + n);
    for (int i = 0; i < n; i++)
    {
        cout << pa[i].second << endl;
    }
}
//[(10,'x'),(15,'y'),(35,'z')]
int main()
{
    pair<int, int> p;
    cin >> p.first >> p.second;
    int n = p.first;
    int m = p.second;
    // sort one  array according to the other
    vector<vector<int> >grid={{2,0,0,1},{0,3,1,0},{0,5,2,0},{4,0,0,2}};
    cout<<checkXMatrix(grid)<<endl;
}