#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1000];

void DFS(int root, map<int, bool>&vis){

  cout<<root<<" ";
  for(auto x: adj[root]){
  	  if(!vis[x]){
  	  	vis[x] = true;
  	  	DFS(x, vis);
  	  }
  }

}
int main(){

 cout<<"Enter The Eadge"<<endl;
 int Edge;
 cin>>Edge;
 for(int i=0; i<Edge; i++){
 	int x,y;
 	cin>>x>>y;
 	adj[x].push_back(y);
 	adj[y].push_back(x);


 }
 cout<<"Enter Root of the Graph"<<endl;
 int root;
 cin>>root;
 map<int, bool>vis;
 vis[root] = true;
 DFS(root ,vis);

}