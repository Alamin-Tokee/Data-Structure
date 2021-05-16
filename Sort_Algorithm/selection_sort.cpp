#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *a,int n){
	int index,temp;
	for(int i=0;i<n-1;i++){
		index=i;
		for(int j=i+1;j<n;j++){
			if(a[i]<a[index]){
				index=j;
			}
		}
		if(index!=i){
			temp=a[i];
			a[i]=a[index];
			a[index]=temp;
		}
	}
}
int main(){
	int a[]={7,6,5,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	selection_sort(a,n);

	for(int i=0;i<n;i++) cout<< a[i] << '\n';

	return 0;
}