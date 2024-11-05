//pattern
#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i = 1; i <= rows; i++){
        int value = i;
        for(int j = 1; j <= rows; j++){
            cout << value;
            if(value < rows) value++;
        }
        cout<<endl;
    }
    return 0;
}