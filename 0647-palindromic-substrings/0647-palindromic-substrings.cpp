class Solution {
public:
   bool isPalindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int countSubstrings(string s) {
    int count=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string s1=s.substr(i,j-i+1);
            if(isPalindrome(s1)){
                count++;
            }
        }
    }
    return count;
}
};