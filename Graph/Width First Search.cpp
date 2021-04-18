#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];

void BFS(int root){
	queue<int>q;
	q.push(root);
    map<int, bool>vis;
    vis[root] = true;
    while(!q.empty()){

    	int node = q.front();
    	cout<<node<<" ";
    	 q.pop();
    	 for(auto x: adj[node]){
    	 	if(!vis[x]){
    	 		q.push(x);
    	 		vis[x] = true;
    	 	}
    	 }
    }
}
int main(){

  cout<<"Number of Edge in Graph"<<endl;
  int edge;
  cin>>edge;
  for(int i=0; i<edge; i++){
  	int x,y;
  	cin>>x>>y;
  	adj[x].push_back(y);
  	adj[y].push_back(x);

  }
  int root;
  cout<<"Enter Root of Graph"<<endl;
  cin>>root;
  BFS(root);
}