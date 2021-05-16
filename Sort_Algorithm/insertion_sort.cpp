#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *a,int n){
	for(int i=0;i<n;i++){
		int item=a[i];
		int j=i-1;

		while(j>=0 && a[j]<item){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=item;
	}
}

int main(){
	int a[]={7,5,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	insertion_sort(a,n);

	for(int i=0;i<n;i++) cout<< a[i] <<'\n';

	return 0;
}