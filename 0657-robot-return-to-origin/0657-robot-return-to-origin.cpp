class Solution {
public:
    bool judgeCircle(string moves) {
          map<char,int> mp;
    for(int i=0;i<moves.size();i++){
        mp[moves[i]]++;
    }
    if(mp['U']==mp['D'] && mp['L']==mp['R']){
        return true;
    }
    return false;
    }
};