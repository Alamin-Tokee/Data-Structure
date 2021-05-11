#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x) return i;
	}
	return -1;
}
int main(){
	int n,arr[10];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int find=LinearSearch(arr,n,x);
	if(find!=-1)
		cout<<"Found the value position at "<< find ;
	else
		cout<<"Value is not found";

	return 0;
}

//Time Complexity O(n)
//Worst Case Complexity O(n)
//Average Case Complexity O(n)
//Space complexity O(1)

//Average Performance O(n/2)