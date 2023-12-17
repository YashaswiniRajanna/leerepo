class FoodRatings {
public:
    unordered_map<string,set<pair<int,string>>>cuisine_to_ratingandfood;
    unordered_map<string,int>food_to_rating;
    unordered_map<string,string>food_to_cuisine;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) 
    {
        for(int i=0;i<foods.size();++i)
        {
            cuisine_to_ratingandfood[cuisines[i]].insert({-ratings[i],foods[i]});
            food_to_rating[foods[i]]=ratings[i];
            food_to_cuisine[foods[i]]=cuisines[i];
        }
        
    }
    
    void changeRating(string food, int newRating) 
    {
        //get the old cuisine corresponding to old to assign it to new inserted map
        auto &cuisine=food_to_cuisine[food];
        int old_rating=food_to_rating[food];
        //erase that pair in the map
        cuisine_to_ratingandfood[cuisine].erase({-old_rating,food});
        cuisine_to_ratingandfood[cuisine].insert({-newRating,food});
        food_to_rating[food]=newRating;
        
    }
    
    string highestRated(string cuisine) 
    {
        return  (*cuisine_to_ratingandfood[cuisine].begin()).second;
        
    }
};
//     FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
//     }
    
//     void changeRating(string food, int newRating) {
        
//     }
    
//     string highestRated(string cuisine) {
        
//     }
// };

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */