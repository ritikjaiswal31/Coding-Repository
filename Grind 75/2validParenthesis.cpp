class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  //create an empty stack to store opening brackets
        for(char c : s){ //loop through each character in the string
              if(c == '(' || c == '{' || c == '['){  // if charcter is opening bracket
                st.push(c); //push it into stack
              }
              else{        //if character is closing bracket
                if(st.empty() ||  //if stack is empty
                    (c == ')' && st.top()!= '(') ||  //closing bracket doesn't match the corresponding opening bracket at top of stack
                    (c == '}' && st.top()!= '{') ||
                    (c == ']' && st.top()!= '[')){
                        return false;      //string is not valid so return false
                    }
                    st.pop();   //otherwise pop the opening brcket from stack
              }
        }
        return st.empty();   // if stack is empty, all opening brackets have been matched
    }
};