#include <bits/stdc++.h>
using namespace std;

int main(){
    // int m, n;cin>>n>>m;
    // int ans = min(n,m);
    // if(ans %2==0){
    //     cout<<"MALVIKA"<<endl;
    // }else{
    //     cout<<"AKSHAT"  <<endl;
    // }
      
	int n, m;
	cin >> n >> m;
	if (n > m) {
		swap(n, m);
	}
	if (n % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}
	return 0;

}