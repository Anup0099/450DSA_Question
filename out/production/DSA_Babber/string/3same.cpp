#include <bits/stdc++.h>
using namespace std;

vector<string> removeAnagrams(vector<string> &words)
{
    vector<string>original =words;
    for (int  i = 0; i < words.size(); ++i)
    {
        sort(words[i].begin(), words[i].end());

    }
    vector<int>index;
    index.push_back(0);
    for (int i = 0; i < words.size();i++)
    {
        if(words[i]==words[i-1]){
            continue;
        }else{
            index.push_back(i);
        }
    }
    vector<string>ans ;
    for (int  i = 0; i < index.size(); i++)
    {
        ans.push_back(original[index[i]]);
    }
    return ans;
}

int main()
{   vector<string>words={"abba","baba","bbaa","cd","cd"};
    vector<string>words2=removeAnagrams(words);
    for(int i=0; i<words2.size();i++){
        cout << words2[i] << endl;
    }

    
    
}