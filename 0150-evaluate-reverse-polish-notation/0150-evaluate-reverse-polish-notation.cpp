class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;

        for (string ch : tokens) {

            if (ch != "*" && ch != "+" && ch != "-" && ch != "/") {
                st.push(ch);
            }
            else if (ch == "+") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b + a));
            }
            else if (ch == "-") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b - a));
            }
            else if (ch == "*") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b * a));
            }
            else if (ch == "/") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                st.push(to_string(b / a));
            }
        }

        return stoi(st.top());
    }
};