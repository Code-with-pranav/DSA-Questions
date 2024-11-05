//WAP check palindrome
#include <iostream>
using namespace std;
int isPalindrome(int array[],int size){
    int j = 0;
    for(int i = size-1; i>=size/2; i--){
        if(array[j++] != array[i])
            return -1;
    }
    return 1;
}
int main()
{
    int array[5] = {4,5,6,5,4},size = 5;
    cout << isPalindrome(array,size);
    
    return 0;
}