//WAP to print the first occurance of a input no.
#include <iostream>
using namespace std;
int first_Occurance(int array[],int size,int n){
    for(int i = 0; i < size; i++){
        if(array[i] == n){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int array[5] = {4,5,6,2,4},size = 5;
    cout << "Enter a number: ";
    cin >> n;
    cout << first_Occurance(array,size,n);
    
    return 0;
}