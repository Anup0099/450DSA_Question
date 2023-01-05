#include <bits/stdc++.h>
using namespace std;
// You are playing a solitaire game with three piles of stones of sizes a​​​​​​, b,​​​​​​ and c​​​​​​ respectively. Each turn you choose two different non-empty piles, take one stone from each, and add 1 point to your score. The game stops when there are fewer than two non-empty piles (meaning there are no more available moves).

// Given three integers a​​​​​, b,​​​​​ and c​​​​​, return the maximum score you can get.

 
int maximumScore(int a, int b, int c)
{
    int sum = a + b + c;
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (sum - min - max > max)
        return sum - min - max;
    else
        return (sum - max) / 2;


}
int main() {}