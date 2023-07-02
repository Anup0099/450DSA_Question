class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n= points.size();
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<n;i++){
        int x= points[i][0];
        int y= points[i][1];
        int dist= x*x +y*y;
        pq.push({dist,i});
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<vector<int>>ans;
    for(int i=0;i<k;i++){
        int idx= pq.top().second;
        pq.pop();
        ans.push_back(points[idx]);

    }
    return ans;
    }
};