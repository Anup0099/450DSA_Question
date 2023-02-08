#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
    char curr_char ='';
    int index = 0;
    int i = 0;

    while (i < n)
    {
        curr_char = chars[i];
        int count = 0;
        // find count of duplicates a
        while (i < n && chars[i] == curr_char)
        {
            i++;
            count++;
        }
        // now do the assign work
        chars[index] = curr_char;
        index++;
        if (count > 1)
        {
            string count_str = to_string(count);
            for (char &ch : count_str)
            {
                chars[index] = ch;
                index++;
            }
        }
    }
    return index;
}
int main() {}