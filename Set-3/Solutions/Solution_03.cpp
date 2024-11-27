//valid parenthesis
#include <iostream>
#include <stack>
using namespace std;
bool is_valid(string s){
    stack<char> st;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.empty()){return false;cout<<"i";}
            st.pop();
        }
        else if(s[i]=='*'){
            
        }
    }
    if(!st.empty()){
        return false;
    }
    else{
        return true;
    }
}
int main()
{ string s = ")";
if(is_valid(s)){
    cout<<"yes";
    
}
else{
    cout<<"no";
}
    

    return 0;
}
