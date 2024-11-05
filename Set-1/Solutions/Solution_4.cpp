//WAP to take 7 integer and return reverse order
#include <iostream>
using namespace std;
void reversing(int array[],int array2[],int size){
    int j = 0;
    for(int i =size-1; i>=0; i--){
        array2[j] = array[i];
        j++;
    }
}
int main()
{
    int array[7] = {1,2,3,4,5,6,7}, array2[7],size = 7;
    reversing(array,array2,size);
    for(int i = 0; i < size; i++){
        cout << array2[i] << "  ";
    }
    return 0;
}