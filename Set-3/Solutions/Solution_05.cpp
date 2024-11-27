//cyclic palindrome
#include <iostream>
using namespace std;
string cyclic_palindrome(string s,int count);
int isPalindrome(int count,string s){
    int st = 0;int e = s.length();int flag = 0;
    while(st<e){
        if(s[st] == s[e]){
            st++;e--;
        }
        else {flag = 1;}
    }
    if(flag==0) return count;
    else cyclic_palindrome(s,count);
}
string cyclic_palindrome(string s,int count){
    
        char lastchar = s[s.size()-1];
        string newstring = lastchar + s;
        newstring.pop_back();
        count++;
    
}
int main(){
string s = "abba";int count = 0;
cout<<isPalindrome(count,s);



    return 0;
}   




// #include <iostream>
// using namespace std;
// int cyclic_palindrome(string s,int count);
//  bool isPalindrome(int count,string s){
//     int st = 0;int e = s.length()-1;int flag = 0;
    
//     while(st<e){
//         if(s[st] == s[e]){
//             st++;e--;
            
//         }
//         else {
//         st++;e--;
       
//           cyclic_palindrome(s,count);
//           break;
//         }
//     }
//     return true;

// }
// int cyclic_palindrome(string s,int count){
//     int i = 0;
//        while(count<s.size()){
//        char lastchar = s[s.size()-1];
//         string newstring = lastchar + s;
//         newstring.pop_back();
//         cout<<newstring<<endl;
//          count++;
//         if(isPalindrome(count,newstring)){
            
//             return count;
        
//        }}
    
//     return -1;
// }
// int main(){
// string s = "abcd";int count = 1;
// cout<<cyclic_palindrome(s,count);



//     return 0;
// }
