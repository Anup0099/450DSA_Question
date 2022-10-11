class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
     int id = logs[0][0];
    int work = logs[0][1];
    int len = logs.size();
    for (int i = 1; i < len; i++)
    {
        int diff = logs[i][1] - logs[i - 1][1];
        if (logs[i][1] - logs[i - 1][1] > work)
        {
            id = logs[i][0];
            work = diff;
        }
        else if (diff == work)
        {
           if(id>logs[i][0]){
                id=logs[i][0];
           }
           work = diff;
        }
    }
    return id;
    }
};