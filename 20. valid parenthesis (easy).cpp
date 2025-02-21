/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true
*/

class Solution {
    public:

        bool isValid(string s) {
         stack<char> st;
         for(int i=0;i<s.size();i++)
         {
            if(st.empty() || s[i]=='{' || s[i]=='(' || s[i]=='[')
            {
                st.push(s[i]);
                continue;
            }
            if(st.top()=='{' && s[i]=='}' ||
               st.top()=='(' && s[i]==')' || 
               st.top()=='[' && s[i]==']')
                {
                    st.pop();
                    continue;
                }
            else
                return false;
         }
         return st.size()==0?true:false;
        }
};
