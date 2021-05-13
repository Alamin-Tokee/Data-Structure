//Divide and conquer Algorithm
//Best Case Time complexity O(nlogn)
//Average Case Time Complexity O(nlogn)
//Worst Case Time Complexty O(nlogn)
//Space complexity O(n)

#include <bits/stdc++.h>
using namespace std;

void merge(int *A,int left,int mid,int right){
	int nL=mid-left+1;
	int nR=right-mid;
	int le[nL],ri[nR];
	for(int i=0;i<nL;i++) le[i]=A[left+i];

	for(int i=0;i<nR;i++) ri[i]=A[mid+1+i];

	int m=0,n=0;
	for(int k=0; m<nL && n<nR ; k++){
		if(le[m]<ri[n]){
			A[k]=le[m];
			m++;
		}
		else{
			A[k]=ri[n];
			n++;
		}
	}
	while(m < nL){
		A[k]=le[m];
		m++;
		k++;
	}
	while(n < nR){
		A[k]=ri[n];
		n++;
		k++;
	}
}

void mergeSort(int *A,int left,int right){
	if(left>=right) return;

	int mid=left+(right-left)/2;
	mergeSort(A,left,mid);
	mergeSort(A,mid+1,right);

	merge(A,left,mid,right);
}

int main(){
	int A[]={7,6,5,4,3,2,0};
	mergeSort(A,0,7);
	for(int i = 0; i < 8; i++) cout<< A[i] << ' ';

	return 0;
}