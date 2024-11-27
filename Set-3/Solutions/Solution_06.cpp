//minimum multi of given k 
//sliding 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{ int arr[] = {11,8,5,7,5,100}; int multi=1;
int size = sizeof(arr)/sizeof(arr[0]); int k=4;
    sort(arr , arr+size);
    for(int i=0;i<k;i++){
       multi = multi*arr[i];
       cout<<arr[i]<<" ";
    }
    cout<<endl<<"minimum sum is: "<<multi;
    return 0;
}
