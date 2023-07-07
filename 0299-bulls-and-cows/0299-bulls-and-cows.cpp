class Solution {
public:
    string getHint(string secret, string guess) {
         int n= secret.size();
    int m= guess.size();
    int bulls=0,cows=0;
    vector<int>g(10),s(10);
    for(int i=0;i<n;i++){
        if(secret[i]==guess[i])bulls++;
        else{
            g[guess[i]-'0']++;
            s[secret[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        cows +=min(g[i],s[i]);
    }
    return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};