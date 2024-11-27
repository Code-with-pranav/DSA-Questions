//valid parenthesis (),{},[]
#include <iostream>
#include <stack>
using namespace std;
bool is_valid(string s){
stack <char> st;
for(int i=0;i<s.length();i++){
   if(s[i] == '(' || s[i]=='[' ||s[i]=='{'){
       st.push(s[i]);
   }
   
   if(s[i]==')'||s[i]==']'||s[i]=='}'){if(st.empty()){return false;}}

   if(st.top()=='(' && s[i]==')'){st.pop();}
   else if (st.top()=='[' && s[i]==']'){st.pop();}
   else if(st.top()=='{' && s[i]=='}'){st.pop();}
    
}
   if(!st.empty()){
       return false;
   }
   else{
       return true;
   }
}
int main(){ 
    string s = "{[}";
if(is_valid(s)){
    cout<<"yes";
    
}
else{
    cout<<"no";
}
    

    return 0;
}
