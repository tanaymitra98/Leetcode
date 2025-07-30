class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>> people;

        for(int i =0; i<n ; i++){
            people.push_back({heights[i] , names[i]});
        }
        //arrange in decreasing order
        sort(people.rbegin(),people.rend());

        vector<string> result;
        for(auto p :  people){
            result.push_back(p.second);
        }
        return result;
    }
};