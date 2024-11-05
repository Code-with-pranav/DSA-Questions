//pattern for parallelogram
#include <iostream>
using namespace std;

int main(){
    int rows = 5, col = 5;
    for(int i = 0; i < rows; i++){
        for(int j = i; j < col - 1; j++){
            cout << " ";
        }
        for(int k = 0; k < col; k++){
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}