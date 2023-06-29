class Solution {
public:
struct myCmp{
        bool operator()(string &s1,string &s2){
            if(s1.length()>s2.length())
                return true;
            else if(s1.length()<s2.length())
                return false;
            else{
                for(int i=0;i<s1.length();i++){
                    if(s1[i]-'0'>s2[i]-'0')
                        return true;
                    else if(s1[i]-'0'<s2[i]-'0')
                        return false;
                }
                return false;
            }
            
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        //idea is to create an min heap
        priority_queue<string,vector<string>,myCmp>q;
        
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
            if(q.size()>k)q.pop();           
            
        }
        
        return q.top();
        
    }
};