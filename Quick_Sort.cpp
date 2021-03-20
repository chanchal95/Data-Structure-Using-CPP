/***********************************
*******AUTHOR SHASHI KANT **********         
****GMAIL Shshiksnt140895@gmail.com*
************************************                                  
***********************************/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll partition(ll *arr, ll strt, ll end )
{
	int i = strt -1;
	int j = strt;
	int pivot = arr[end] ;
	for(;j<end; j++)
	{
		 if(arr[j] <= pivot)
		 {
		 	i++;
		 	swap(arr[i], arr[j]);
		}
    }
    swap(arr[i+1], arr[end]);
    return (i+1);

}
void quick_sort(ll *arr, ll strt, ll end)
{
	 if(strt>= end)
	 	return;
	 ll p =  partition(arr, strt, end);
	 quick_sort(arr, strt, p-1);
	 quick_sort(arr, p+1, end);
}
int main(){
       int t;
       cin>>t;
       while(t--)
       {
       	ll n;
       	cin>>n;
       	ll arr[n];
       	for(int i=0; i<n; i++)
       	{
       		cin>>arr[i];
       	}
       	quick_sort(arr, 0, n-1);
       	for(int i=0; i<n; i++)
       		cout<< arr[i] <<" ";

       }	
	return 0;
}