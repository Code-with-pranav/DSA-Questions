#include <iostream>
#include <vector>
using namespace std;

int SubarraySumWithLargestSum(int array[], int size){
    int sum = 0;
    int max = INT32_MIN;
    for(int i = 0; i < size; i++){
        sum = 0;
        for(int j = i; j < size; j++){
            sum += array[j];
            if(max < sum) max = sum;
        }
    }
    return max;
}

int main(){
    int array[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;

    cout << SubarraySumWithLargestSum(array,size);
    return 0;
}