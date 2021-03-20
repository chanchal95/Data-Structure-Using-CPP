/***********************************
*******AUTHOR SHASHI KANT **********         
****GMAIL Shshiksnt140895@gmail.com*
************************************                                  
***********************************/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void merge(int *arr, int strt, int end)
{
       int  i = strt;
       int mid = (strt+end)/2;
       int j = mid+1;
       int temp[100];
       int k =strt;
       
       while(i<=mid && j<=end )
       {
              if(arr[i] <= arr[j])
                  temp[k++] = arr[i++];
              else
                  temp[k++] = arr[j++];
       }
       while(i<=mid)
          temp[k++] = arr[i++];

          while(j<=end)
          temp[k++] = arr[j++];

          for(int p1=strt; p1<=end; p1++)
             arr[p1] = temp[p1]; 
}


void merge_sort(int *arr, int strt, int end)
{
       if(strt>=end)
              return;
       int mid  = (strt+ end)/2;
       merge_sort(arr, strt, mid);
       merge_sort(arr, mid+1, end);
       merge( arr, strt, end);
}

int main(){
      
       	int n;
       	cin>>n;
       	int arr[n];
       	for(int i =0; i<n; i++)
       		cin>>arr[i];

       	merge_sort(arr, 0, n-1);

       	for(int i=0; i<n; i++)
          cout<< arr[i] <<" ";


   	
	return 0;
}