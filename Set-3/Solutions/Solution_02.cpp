//maximum 
//sliding window
#include<iostream>
using namespace std;
int main(){
int arr[] = {2,8,7,5,6,7,9,7};
int k =3;
int i =0;

while(i<=8-k){
    int max = arr[i];
    for(int j = i;j < k+i ;j++){
        if(max<arr[j]){
            max = arr[j];
        //    cout<<max;
        }}
        cout<< max;
        i++;
    
}


    return 0;
}
