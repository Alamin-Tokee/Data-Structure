#include <bits/stdc++.h>
using namespace std;
int binarySearch(int *a,int left,int right,int x){
	if(right>=left){
		int mid=left+(right-left)/2;
		if(a[mid]==x) return mid;
		if(a[mid]<x) return binarySearch(a,mid+1,right,x);
		return binarySearch(a,left,mid-1,x);
	}
	return -1;
}
int main(){
	int a[100],n,x
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>x;
	int find=binarySearch(a,0,n-1,x);
	if(find!=-1){
		cout<<"Found the value position at "<<find;
	}else{
		cout<< "Could not found the value";
	}
}

//Time Complexity O(logn)
//Space complexity o(1)
