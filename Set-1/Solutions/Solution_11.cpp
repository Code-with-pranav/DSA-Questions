//pattern for right angle triangle
#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i = 1; i <= rows; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}