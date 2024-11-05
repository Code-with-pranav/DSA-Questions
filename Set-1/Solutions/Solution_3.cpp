//WAP to merge two sorted array to a third array
#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {1,4,6,7,8};
    int arr2[4] = {2,5,8,10};
    int arr3[50],count = 0;
    int size1, size2;
    size1 = sizeof(arr1)/sizeof(arr1[0]);
    size2 = sizeof(arr2)/sizeof(arr2[0]);

    int i = 0, j = 0,a=0;
    while(i<size1 && j < size2){
        if(arr1[i]<arr2[j]){
            arr3[a] = arr1[i];
            i++;
            a++;
        }
        else if(arr1[i] > arr2[j]){
            arr3[a++] = arr2[j++];

        }
        else{
            arr3[a++] = arr1[i++];
            j++;
        }
        }
    while(i<size1){
        arr3[a++] = arr1[i++];
    }  
    while(j<size2){
        arr3[a++] = arr2[j++];
    }  
    cout << endl << "final sorted array : ";
    for(int i = 0; i < a; i++){
        cout<< arr3[i] << "  ";
    }
    return 0;
}