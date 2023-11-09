class Solution {
public:
    int countHomogenous(string s) {
        int left = 0;
        long long ans = 0;
        for(int right=0; right<s.length(); right++){
            if(s[left] == s[right]){
                ans+=right-left+1;
            }
            else{
                ans+=1;
                left=right;
            }
        }
        return(int)(ans%(1000000007));
    }
};