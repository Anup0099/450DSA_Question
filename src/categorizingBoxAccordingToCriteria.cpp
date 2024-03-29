#include <bits/stdc++.h>
using namespace std;
//  Given four integers length, width, height, and mass, representing the dimensions and mass of a box, respectively, return a string representing the category of the box.

// The box is "Bulky" if:
// Any of the dimensions of the box is greater or equal to 104.
// Or, the volume of the box is greater or equal to 109.
// If the mass of the box is greater or equal to 100, it is "Heavy".
// If the box is both "Bulky" and "Heavy", then its category is "Both".
// If the box is neither "Bulky" nor "Heavy", then its category is "Neither".
// If the box is "Bulky" but not "Heavy", then its category is "Bulky".
// If the box is "Heavy" but not "Bulky", then its category is "Heavy".
// Note that the volume of the box is the product of its length, width and height.
#define mod 1000000007
string categorizeBox(int length, int width, int height, int mass)
{

    long long volume = length;
    volume *= width;
    volume *= height;
    cout << volume << endl;
    bool bulky = length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000;
    bool heavy = mass >= 100;
    if (bulky && heavy)
    {
        return "Both";
    }
    else if (bulky)
    {
        return "Bulky";
    }
    else if (heavy)
    {
        return "Heavy";
    }
    else
    {
        return "Neither";
    }
}
int main()
{
    int length, width, height, mass;
    cin >> length >> width >> height >> mass;
    cout << categorizeBox(length, width, height, mass);
}