//pattern 
#include <iostream>
using namespace std;

int main(){
    int rows = 5, col = 5,f=0;
    for(int i = 1; i <= rows; i++){
        if(f == 0){
            for(int j = 1; j <= col; j++){
            cout << j;
        }
        f = 1;
        cout<<endl;
        }
        else{
            for(int j = col; j >=1; j--){
                cout << j;
            }
            f = 0;
            cout<<endl;
        }
        
    }
    return 0;
}