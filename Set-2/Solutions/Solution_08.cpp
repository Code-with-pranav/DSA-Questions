//make sliding window to get max sum
#include <iostream>
#include <vector>
using namespace std;

void input_array(vector <int> &arr,int size,int k){
    int a;
    for(int i = 0; i<size; i++){
        cin>>a;
        arr.push_back(a);
    }
    
}
int find_max(vector <int> &arr,int size, int k){
    vector <int> ans;
    for(int i = 0; i< size-k+1; i++){
        int sum = 0;
        for(int j=i;j<i+k;j++){
            sum += arr[j];
        }
        ans.push_back(sum);
    }
    int max = ans[0];
    for(int i =0; i< ans.size();i++){
        if(max < ans[i]){
            max = ans[i];
        }
    }
    return max;
}

int main()
{
    vector <int> arr;
    int k,n;
    cout<<"Enter the sliding window size: ";
    cin>>k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    input_array(arr,n,k);
    if(k > arr.size()) cout<<endl<<"Invalid input.";
    else{
        cout << endl<<find_max(arr,n,k);
    }
    
    return 0;
}