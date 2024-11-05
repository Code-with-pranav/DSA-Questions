//WAP to find unique elements
#include <iostream>
#include <set>
using namespace std;

void FindingUniqueElements(int array[],int size){
    set<int>uniqueElements;
    for(int i = 0; i < size; i++){
        uniqueElements.insert(array[i]);
    }

    cout << "Unique Values: ";
    for(int element:uniqueElements){
        cout << element << " ";
    }
}

int main()
{
    int n;
    int array[10] = {4,5,6,2,4,4,4,0,1,5},size = 10;
    FindingUniqueElements(array,size);
    
    return 0;
}

/*
#include <iostream>
using namespace std;

void findNonRepeatingValues(int arr[], int size) {
    cout << "Non-repeating values in the array are: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 3, 5, 6, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    findNonRepeatingValues(arr, size);

    return 0;
}
*/