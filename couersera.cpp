#include <stack>
#include <string>
#include <iostream>

using namespace std;

void isBalanced(string s) {
    stack<char> st;  
    int pos=0;
    for (int i=0;i<s.size();i++) {
        switch (s[i]) {
            case '{':
            case '(':
            case '[':
                st.push(s[i]);
                if(st.empty())pos++;
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    cout<<i+1;
                    return;
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                   cout<<i+1;
                   return;
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    cout<<i+1;
                    return;
                }
                st.pop();
                
                break;
        }
    }
    
     if(st.empty())cout<<"SUCCESS";
     else
     cout<<pos;
    
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
    isBalanced(s); 
    }
    return 0;
}
