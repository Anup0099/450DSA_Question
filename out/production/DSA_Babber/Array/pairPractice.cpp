#include <bits/stdc++.h>
using namespace std;
void add_pair(vector<pair<string, pair<int, int>>> &A, string str, int x, int y)
{
    A.push_back(make_pair(str, make_pair(x, y)));
}
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     return A.size();
     
}
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     for(auto i:A)
     {
         cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
     }
}
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     sort(
            A.begin(), 
            A.end(), 
            [](pair<string,pair<int,int>> &p1, pair<string,pair<int,int>> &p2)
            {
                return p1.second < p2.second;
            }
        );
}


int main()
{
}