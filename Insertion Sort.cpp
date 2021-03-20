/***********************************
*******AUTHOR SHASHI KANT **********         
****GMAIL Shshiksnt140895@gmail.com*
************************************                                  
***********************************/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


void selection_sort(vector<ll>&vect, ll n)
{
	ll j,key;
	   for(int i = 0;i<n; i++)
	   {
         j = i;
         key = vect[i];
         while(j>0 && key<vect[j-1])
         {
         	vect[j] = vect[j-1];
         	j-=1;
         }
         vect[j] = key; 
       }
        for(auto x : vect)
        	cout << x <<" ";
        cout<<endl;
}
int main(){
       int t;
       cin>>t;
       while(t--)
       {
       	ll n;
       	cin>>n;
       	ll x;
       vector<ll>vect;
       for(int i=0;i <n; i++)
       {
       	cin>>x;
       	vect.push_back(x);
       }
     selection_sort(vect, n);
    


       }	
	return 0;
}