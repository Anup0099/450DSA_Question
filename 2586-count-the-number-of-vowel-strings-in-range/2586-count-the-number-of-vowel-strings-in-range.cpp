class Solution {
public:
    bool isVowel(char s)
{
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        return true;
    }
    return false;
    
}
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
    for (int i = left; i <= right; i++)
    {
        if (isVowel(words[i][0]) && isVowel(words[i][words[i].length() - 1]))
        {
            cout << words[i] << endl;
            count++;
        }
    }
    return count;
    }
};