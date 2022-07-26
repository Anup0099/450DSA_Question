#include <bits/stdc++.h>
using namespace std;

// Design a food rating system that can do the following:

//     Modify the rating of a food item listed in the system.
//     Return the highest-rated food item for a type of cuisine in the system.


class FoodRatings{
     

    public:
    unordered_map<string,set<pair<int,string>,comp>>cuisinFood;
    unordered_map<string,int>rate;
    unordered_map<string,string>foodCuisin;
      FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
           
        for(int i=0;i<foods.size();i++){
            cuisinFood[cuisines[i]].insert({ratings[i],foods[i]});
            foodCuisin.insert({ratings[i],foods[i]});
            rate.insert({foods[i],ratings[i]});
        }
        
    }
    
    void changeRating(string food, int newRating) {

    }
    
    string highestRated(string cuisine) {
        
    }   
};
int main(){
    


}