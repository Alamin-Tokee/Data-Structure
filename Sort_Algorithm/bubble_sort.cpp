#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *a,int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=a[j];
			}
		}
	}
}

int main(){
	int a[]={7,5,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);

	for(int i=0;i<n;i++) cout<< a[i] <<'\n';

	return 0;
}