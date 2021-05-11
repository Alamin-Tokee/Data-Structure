#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int *a, int n, int v,int i){
	if(i==n) return -1;
	if(a[i]==v) return i;
	return LinearSearch(a,n,v,i+1);
}

int main(){
	int a[100],n,q,v,x
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>q;
	for(int i=0;i<q;i++){
		cin>>v;
		int x=LinearSearch(a,n,v,0);
		if(x!=-1){
			cout<<"Found the value position at "<< x ;
		}else{
			cout<<"Not found";
		}
	}
	return 0;
}


//Time Complexity O(n)
//Space Complexity O(1)