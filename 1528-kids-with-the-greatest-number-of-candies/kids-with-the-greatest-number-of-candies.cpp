class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = 0;

        for(int candy : candies) {
            maximum = max(maximum, candy);
        }

        vector<bool> result;

        for(int candy : candies) {
            result.push_back(candy + extraCandies >= maximum);
        }

        return result;
    }
};