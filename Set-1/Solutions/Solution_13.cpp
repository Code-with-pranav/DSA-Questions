//pattern for diamond
#include <iostream>
using namespace std;

int main(){
    int rows = 9;
    if(rows % 2 != 0){
        int col;
    col = rows;
    int temp = 2;

    for(int i = 0; i < rows; i++){
        if(i <= col/2){
            for(int j = i; j < col/2; j++){
            cout << " ";
            }
            for(int k = 0; k < 2*i + 1; k++){
                cout << "*";
            }
        cout<<endl;
        }
        else{
            for(int j = i; j > col/2 ; j--){
                cout << " ";
            }
            for(int k = temp; k < col; k++){
                cout << "*";
            }
            temp += 2;
            cout << endl;
        }
        
    }
    }
    else{
        cout << "False";
    }
    

    return 0;
}