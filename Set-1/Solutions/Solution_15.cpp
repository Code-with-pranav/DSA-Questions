//pattern
#include <iostream>
using namespace std;

int main(){
    int rows = 5, col = 5;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= col; j++){
            if(i == 1 || i == rows || j == 1 || j == col){
                cout << "1";
            }
            else{
                cout << "0";
            }
        }
        cout<<endl;
    }
    return 0;
}