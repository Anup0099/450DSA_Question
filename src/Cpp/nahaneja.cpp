#include <bits/stdc++.h> 
using namespace std;
// "Bapuji - Ae Jethiya Nahaane Jaa Nahaane Jaa".
// Bapuji is furious with Jethiya because he did not bathe before eating. Jethiya does not want to bathe right now, but in order to do so, he must first establish his innocence to Bapuji.

// Bapuji gives Jethiya a problem, and if Jethiya solves it, Bapuji will allow him to eat his food before taking a bath. Jethiya asks for your help to solve the problem.

// You are given an array AA of size NN and an integer KK. You can perform the following operation on the given array any number of times (possibly zero):

// Choose two integers LL and RR (1 \leq L \leq R \leq N1≤L≤R≤N)
// Then, for each ii such that L \leq i \leq RL≤i≤R, set A_iA 
// i
// ​
//   to A_{\left\lfloor \frac{L+R}{2} \right\rfloor}A 
// ⌊ 
// 2
// L+R
// ​
//  ⌋
// ​
//  . Here, \left\lfloor \ \right\rfloor⌊ ⌋ denotes the floor function.
// That is, apply the following to the subarray [L, R][L,R]:
// If this subarray has odd length, set all its elements to be equal to the middle element.
// If it has even length, set all its elements to be equal to the left one among the two middle elements.
// For example, if A = [1, 3, 2, 3]A=[1,3,2,3] then:

// If we choose L = 1L=1 and R = 4R=4, the array will change as follows: [\underline{1, \textcolor{blue}{3}, 2, 3}] \to [3, 3, 3, 3][ 
// 1,3,2,3
// ​
//  ]→[3,3,3,3]
// If we choose L = 2L=2 and R = 4R=4, the array will change as follows: [1, \underline{3, \textcolor{blue}{2}, 3}] \to [1, 2, 2, 2][1, 
// 3,2,3
// ​
//  ]→[1,2,2,2]
// Is it possible to make all the array elements equal to KK after performing some number of operations?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains two space-separated integers NN and KK — the number of elements in the array and the value KK respectively.
// The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA 
// 1
// ​
//  ,A 
// 2
// ​
//  ,…,A 
// N
// ​
//   — the elements of the array. 
int main() {

    
} 