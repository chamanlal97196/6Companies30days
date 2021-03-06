/* 
Given a pattern containing only I's and D's. I for increasing and D for decreasing.
Devise an algorithm to print the minimum number following that pattern.
Digits from 1-9 and digits can't repeat.

 

Example 1:

Input:
D
Output:
21
Explanation:
D is meant for decreasing,
So we choose the minimum number
among 21,31,54,87,etc.
 

Example 2:

Input:
IIDDD
Output:
126543
Explanation:
Above example is self- explanatory,
1 < 2 < 6 > 5 > 4 > 3
  I - I - D - D - D
*/

string printMinNumberForPattern(string str){
        // code here 
        string result;
        stack<int>st;
        int num=1;
        for(int i=0; i<str.length();i++){
            char ch=str.at(i);
            if(ch=='D'){
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(st.size()>0){
                    result+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(st.size()>0){
            result+=to_string(st.top());
            st.pop();
        }
        return result;
        
        
    }
