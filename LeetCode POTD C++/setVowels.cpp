class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        for(char c : s){
            if(string("aeiouAEIOU").find(c) != string::npos){
                vowels.push_back(c);
            }
        }
        sort(vowels.begin(), vowels.end(), greater<char>());
        string ans;
        for(char c : s){
            if(string("aeiouAEIOU").find(c)!=string::npos){
                ans+=vowels.back();
                vowels.pop_back();

            }
            else{
                ans+=c;

            }
        }
        return ans;
    }
};