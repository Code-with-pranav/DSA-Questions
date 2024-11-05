//pattern for half diamond
#include <iostream>
using namespace std;

int main(){
    int col = 5;
    int rows = 2*col - 1;
    for(int i = 1; i <= rows; i++){
        if(i <= col){
            for(int j = 0; j < i; j++){
            cout << "*";
            }
        cout<<endl;
        }
        else{
            for(int j = i; j <= rows; j++){
                cout << "*";
            }
            cout << endl;
        }
        
    }

    return 0;
}