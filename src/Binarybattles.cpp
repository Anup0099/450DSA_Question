#include <bits/stdc++.h> 
using namespace std; 
// N teams have come to participate in a competitive coding event called “Binary Battles”. It is a single-elimination tournament consisting of several rounds.

// Note: It is known that NN is a power of 22.

// In one round, each team will be paired up with and compete against one of the other teams. If there are XX teams before the start of a round, \frac{X}{2} 
// 2
// X
// ​
//   matches are held simultaneously during the round between \frac{X}{2} 
// 2
// X
// ​
//   pairs of teams. The winning team of each match will move on to the next round, while the losing team of each match will be eliminated. There are no ties involved. The next round will then take place in the same format between the remaining teams. The process will continue until only one team remains, which will be declared the overall winner.

// The organizers want to find the total time the event will take to complete. It is given that each round spans AA minutes, and that there is a break of BB minutes between every two rounds (no break after the last round).

// For example, consider a case when N = 4N=4, A = 10A=10 and B = 5B=5. The first round will consist of two matches and will take 1010 minutes to complete. Two teams move on to round 2 and the other two get eliminated. Then there is a break of 55 minutes. The two remaining teams compete in round 2, which lasts 1010 more minutes. The team that wins is declared the overall winner. Thus the total time taken is 10 + 5 + 10 = 2510+5+10=25 minutes.

// Can you help the organizers determine how long the event will take to finish?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases. Then the test cases follow.
// The first and only line of each test case contains three space-separated integers NN, AA and BB respectively — the number of teams, the duration of each round and the length of the breaks between rounds.
// Output Format
// For each test case, output on a new line the time taken in minutes for the whole event to finish.
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int rounds = log2(n);
        int total_time = (rounds*a) + ((rounds-1)*b);
        cout<<total_time<<endl;
    }
    return 0;
} 