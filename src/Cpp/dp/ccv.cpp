#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string a = "2021";
        string b = "_";

        while (s.find("_") != string::npos )
        {

            s.replace(s.find("_"), 1, " ");
        }
        while (s.find("2021") != string::npos)
        {

            s.replace(s.find("2021"), 4, "2022");
            // s.replace(s.find("_"), 1, " ");
        }

        cout << s << endl;
    }
}

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string str;
// 	    getline(cin,str);
// 	    int n = str.length();
// 	    for(int i = 0;i < n; i++){
// 	        if(str[i]=='_')
// 	          str[i]=' ';
// 	    }
// 	    string s = "";
// 	    str+=" ";
// 	    for(int i=0;i<=n;i++){
// 	        if(str[i]==' '){
// 	            if(s=="2021")
// 	            str[i-1] = '2';
// 	            s = "";
// 	        }
// 	        else{
// 	            s+=str[i];
// 	        }
// 	    }
// 	    cout<<str<<endl;
// 	}
// 	return 0;
// }