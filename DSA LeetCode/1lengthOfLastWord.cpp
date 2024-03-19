class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();  //size of string
        int i=0;  //iterating from the start of the string
        while(i<n){
            if(s[i]!=' '){
              count++;
              i++;
            }
            else{
            //current character is a space
            while(i<n && s[i]==' ') i++;
            if(i == n){     //end of the string
                return count;
            }
            else{
                count=0;  //making count variable 0 because there are still characters            }
            }   
        }

        }

        return count;
        
    }
};