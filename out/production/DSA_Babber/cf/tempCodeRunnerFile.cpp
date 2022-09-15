 int plastIndex = 0, mlastIndex = 0, glassLastIndex = 0, totaltime = 0, count = 0;
    for (int i = 0; i < garbage.size(); i++)
    {

        // take string inside garbage
        for (auto c : garbage[i])
        {
            count++;
            if (c == 'p')
            {
                plastIndex = i;
            }
            else if (c == 'm')
            {
                mlastIndex = i;
            }
            else if (c == 'g')
            {
                glassLastIndex = i;
            }
        }
    }
    for (int i = 0; i < travel.size(); i++)
    {
        travel[i] += travel[i - 1];
    }
    int ans = count;
    if (mlastIndex > 0)
        ans += travel[mlastIndex - 1];
    if (plastIndex > 0)
        ans += travel[plastIndex - 1];
    if (glassLastIndex > 0)
        ans += travel[glassLastIndex - 1];
    return ans;