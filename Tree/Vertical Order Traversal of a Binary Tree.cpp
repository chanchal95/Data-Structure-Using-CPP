#include<bits/stdc++.h>
using namespace std;
map<int, vector<int>>mp;

class Tree{
public:
	Tree* left;
	Tree* right;
	int val;
	Tree(int data ){
      val = data;
      left = NULL;
      right = NULL;
	}
};
Tree* billd(){

	//Tree* temp = NULL;
	int x;
	cin>>x;
	 if(x == -1)
	 	return NULL;
	Tree* temp = new Tree(x);
	temp ->left = billd();
	temp->right = billd();
	return temp;


}
void vertical_order(Tree* root, int rval){

	if(root == NULL)
		return ;
	mp[rval].push_back(root->val);
	vertical_order(root->left, rval-1);
	vertical_order(root->right, rval+1);

}
void print(Tree* root){
   
   if(root == NULL)
   	return ;
   cout<<root->val<<"   ";
   print(root->left);
   print(root->right);
}
int main(){

	Tree* root = billd();
	print(root);
	cout<<endl;
	vertical_order(root,0);
	for(auto x: mp)
	{
		vector<int>x1 = x.second;
		for(auto y: x1)
			cout<<y<<" ";
		cout<<endl;
	}


}