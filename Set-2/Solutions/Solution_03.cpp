//find kth largest element from array without sorting
#include <iostream>
using namespace std;

int kthLargestElement(int array[], int size, int max, int k){
    if(k == 0) return max;
    int maxi = INT32_MIN;
    for(int i = 0; i < size; i++){
        if(array[i] >= max) continue;
        if(maxi < array[i]) maxi = array[i];
    }
    return kthLargestElement(array, size, maxi, k-1);
}

int main(){
    int array[] = {3,2,1,5,6,4};
    int size = 6;
    int k = 3;
    int max = INT32_MAX;
    cout << kthLargestElement(array, size, max, k);
}