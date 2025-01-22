class Solution {
public:
    int toTime(std::vector<int>& from, std::vector<int>& to){
        int x = std::abs(from[0] - to[0]);
        int y = std::abs(from[1] - to[1]);
        return std::max(x, y);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=1; i<points.size(); i++){
            ans+=toTime(points[i-1], points[i]);
        }
        return ans;
    }
};