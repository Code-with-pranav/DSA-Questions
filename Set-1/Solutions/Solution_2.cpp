//WAP takes 5 integer as input from the user and print max of all the intergers
#include <iostream>
using namespace std;
int main()
{
    int a1,a2,a3,a4,a5;
    cout << "Enter 5 intergers : ";
    cin >> a1>> a2>> a3 >> a4 >> a5;
    int array[5] = {a1,a2,a3,a4,a5};
    int max = array[0];
    for(int i = 1; i < 5; i++ ){
        if(array[i] > max)
            max = array[i];
    }
    cout << "Maximum No. is "<< max;

    return 0;
}