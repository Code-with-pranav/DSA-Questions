//return an equilibrium index of an array if not return -1
#include <iostream>
#include <vector>
using namespace std;


void input_array(vector <int> &arr,int size) {
	int a;
	for(int i = 0; i<size; i++) {
		cin>>a;
		arr.push_back(a);
	}

}
int equilibrium_index(vector <int> arr, int n) {
	int start =0, end = n -1,sum1 = 0, sum2 = 0;
	for(int i =1; i < n-1; i++) {
		sum1 =0;
		sum2= 0;
        start =0, end = n -1;
		while(start<i) {
			sum1 += arr[start];
			start++;
		}
		while(end>i) {
			sum2 += arr[end];
			end--;
		}
		if(sum1 == sum2) {
		    cout<<endl;
		    return i+1;
		}
	}
	cout<<endl;
	return -1;
}
int main()
{
	vector <int> arr;
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the array elements: "<<endl;
	input_array(arr,n);

	cout << equilibrium_index(arr,n);
	return 0;
}