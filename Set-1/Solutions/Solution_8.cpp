//WAP to print no. of frequency of each no. in an array
#include <iostream>
#include <set>
using namespace std;

void FrequencyCount(int element, int array[], set <int> uniqueElements, int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(element == array[i]) count++;
    }
    cout << element <<" : "<< count << endl;
}

void FindingUniqueElements(int array[],int size){
    set<int>uniqueElements;
    for(int i = 0; i < size; i++){
        uniqueElements.insert(array[i]);
    }

    for(int element:uniqueElements){
        FrequencyCount(element,array,uniqueElements,size);
    }
}

int main()
{
    int n;
    int array[10] = {4,5,6,2,4,4,4,0,1,5},size = 10;
    FindingUniqueElements(array,size);
    
    return 0;
}