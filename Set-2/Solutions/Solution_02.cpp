//find the count inversions of the given array
#include <iostream>
using namespace std;

int findCountInversions(int array[], int size){
    int count = 0;
    for(int i = 0; i < size - 1; i++){
        for(int j = i; j < size; j++){
            if(array[i] > array[j]) count += 1;
        }
    }
    return count;
}

int main(){
    int array[] = {7,2,6,3};
    int size = sizeof(array)/sizeof(array[0]);
    cout << findCountInversions(array, size);
    return 0;
}