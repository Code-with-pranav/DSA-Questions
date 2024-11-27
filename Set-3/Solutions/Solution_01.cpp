//square free number
// 20--> 1,2,4,5,10,20
//1 is not a square free number, 4 is perfect - removed, 2 and 5 are square free, 10->1,2,5,10 non perfect square 
#include <iostream>
using namespace std;
bool is_square_free(int n){
    for(int i = 2;i*i<n;i++){
    if(n%(i*i)==0){return false;}
    
    }
    return true;
}
int prime_factorization(int n){
    int count = 0;
    
    for(int i=1;i<=n;i++){
        if(n%i == 0 && is_square_free(i)){
            count++;
        }
    }
    return count;
}

int main(){
 int n = 72;
 cout<<prime_factorization(n);
   return 0; 
 }
