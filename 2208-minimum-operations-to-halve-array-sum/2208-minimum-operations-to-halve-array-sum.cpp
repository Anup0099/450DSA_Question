class Solution {
public:
    int halveArray(vector<int>& nums) {
          double sum = accumulate(nums.begin(), nums.end(), 0.00);
        double halfSum = sum / 2;
        
        priority_queue<double> pq;
        
        for(auto& num : nums) pq.push((double)num);
        
        int operations = 0;
        
        while(pq.size() and sum > halfSum) {
            double item = pq.top(); pq.pop();
            
            sum -= item/2.00;
            
            item /= 2.00;
            
            operations++;
            
            if(item>0) pq.push(item);
        }
        return operations;
    }
};