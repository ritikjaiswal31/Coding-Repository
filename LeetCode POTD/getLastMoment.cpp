class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0; //initialize a variable for maximum time
        for(int pos : left){    //Iterate through positions of ants moving to left
            ans = max(ans, pos);
        }
        for(int pos : right){    //Iterate through positions of ants moving to right
            ans = max(ans, n-pos); //Update maximum time if the current right moving ants position is greater then previously recorded max. time

        }
        return ans;
    }
};