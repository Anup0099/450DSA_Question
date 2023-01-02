class Solution {
public:
    bool isUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

    bool detectCapitalUse(string word) {
         int count = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
            count++;
    }
    if (count == 0 || count == word.size())
        return true;
    if (count == 1 && isupper(word[0]))
        return true;
    return false;
    }
};