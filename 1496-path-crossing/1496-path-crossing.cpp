class Solution {
public:
    bool isPathCrossing(string path) {
        
    int n = path.length();
    unordered_set<string> set;
    int x = 0, y = 0;
    string temp= to_string(x) + " " + to_string(y);
    set.insert(temp);
    for (int i = 0; i < path.length(); i++)
    {
        if (path[i] == 'N')
        {
            y++;
        }
        else if (path[i] == 'S')
        {
            y--;
        }
        else if (path[i] == 'E')
        {
            x++;
        }
        else
        {
            x--;
        }
        temp= to_string(x) + " " + to_string(y);
        if(set.find(temp)!=set.end())
        {
            return true;
        }
        set.insert(temp);

    }
    for(auto it: set)
    {
        cout<<it<<endl;
    }
    return false;
    }
};