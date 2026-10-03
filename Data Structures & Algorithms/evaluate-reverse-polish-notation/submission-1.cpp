class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int x1,x2,r;
        for(string i :tokens){
            if(i == "+"||i== "-"||i == "*" || i == "/"){
                x1 = st.top();st.pop();
                x2 = st.top();st.pop();
               if(i == "+"){
                r= x2+x1;
               }else if(i == "-"){
                r= x2-x1;
               }else if(i == "*"){
                r= x2*x1;
               }else{
                r= x2/x1;
               }
               st.push(r); 
            }else{
                st.push(stoi(i));
            }

        }
        return st.top();
    }
};
