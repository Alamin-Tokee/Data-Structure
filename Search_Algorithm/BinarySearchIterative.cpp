#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int *a,int n,int x){
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=left+(right-left)/2;
		if(a[mid]==x) return mid;
		else if(a[mid] > x) {
			right=mid-1;
		}
		else {
			left=mid+1;
		}
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
	int find=BinarySearch(a,n,x);
	if(find!=-1){
		cout<< "Found the value position at "<<find;
	}else{
		cout<< "Not found the value";
	}
	return 0;
}

//Time Complexity O(logn)
//Space Complexity O(1)
//Best Case Complexity O(1)
//Worst Case Complexity O(logn)
