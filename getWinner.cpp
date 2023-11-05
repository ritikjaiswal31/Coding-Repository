class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0;
        int ele = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i] > ele){
                ele = arr[i];
                ans = 0;

            }
            if(++ans == k)
               break;
        }
        return ele;
    }
};