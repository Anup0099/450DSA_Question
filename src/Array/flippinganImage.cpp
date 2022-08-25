#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    int n = image.size();
    for (int i = 0; i < n; i++)
    {

        int l = 0, r = n - 1;
        while (l < r)
        {
            swap(image[i][l], image[i][r]);
            l++;
            r--;
        }
    }
    //reverse each value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (image[i][j] == 0)
                image[i][j] = 1;
            else
                image[i][j] = 0;
        }
    }
    return image;
}
int main() {}