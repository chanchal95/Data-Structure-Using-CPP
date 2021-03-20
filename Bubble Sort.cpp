/***********************************
*******AUTHOR SHASHI KANT **********         
****GMAIL Shshiksnt140895@gmail.com*
************************************                                  
***********************************/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Bubble_sort(int *arr, int n){

	for(int i=0; i<n; i++){
		for(int j =1; j<n; j++){

			if(arr[j-1]> arr[j]){
				int temp = arr[j-1];
				arr[j-1] = arr[j];
                arr[j] = temp;
			}
		}
	}
}
int main(){
       

       int n;
       cin>>n;
       int arr[n];
       for(int i=0; i<n; i++)
       	cin>>arr[i];
       Bubble_sort(arr, n);
       for(int i=0; i<n; i++)
       	cout<<arr[i]<<" ";
	return 0;
}