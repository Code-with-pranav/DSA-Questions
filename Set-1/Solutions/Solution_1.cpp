//WAP to count total no. of negative no. in an array
#include <iostream>
using namespace std;

void input_array(int array[],int *size){
    cout << "Enter the size of array: ";
    cin >> *size;
    cout << "Enter array elements: ";
    
    for(int i = 0; i < *size; i++){
        cin >> array[i];
    }
}
int negative_count(int array[],int *size){
    int count = 0;
    for(int i = 0; i < *size; i++){
        if(array[i] < 0){
            count++;}
    }
    return count;
}

int main()
{
    int array[50],size;
    input_array(array,&size);
    
    cout << "Total no. of negative no. in the above array is " << negative_count(array,&size);
    return 0;
}