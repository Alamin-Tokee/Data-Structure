//Devide and Conquer Alogorithm
//Time Complexity O(nlogn)
//Worst Case Time Complexity O(n^2)
//Average Case Complexity O(nlogn)
//Worst Case Space Complexty O(n)
//Best Case Complexity O(logn)
#include<bits/stdc++.h>
using namespace std;
int partitionFunction(int *A,int start,int end){
	int pivotValue=A[end];
	int partitionIndex=start;
	for(int i=start;i<end;i++){
		if(A[i]<pivotValue){
			swap(A[i],A[partitionIndex]);
			partitionIndex++;
		}
		swap(A[partitionIndex],A[end]);
	}
	return partitionIndex;
}
void quickSort(int *A,int start,int end){
	if(start < end){
		int partitionIndex=partitionFunction(A, start, end);
		quickSort(A, start, partitionIndex-1);
		quickSort(A, partitionIndex+1, end);
	}
}

int main(){
	int A[]={7,6,5,4,3,2,0};
	quickSort(A,0,7);
	for(int i = 0; i < 8; i++) cout<< A[i] << ' ';

	return 0;
}