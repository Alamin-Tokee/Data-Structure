#include <bits/stdc++.h>
//using namespace std;
void heapify(std::vector<int> &ht,int i){
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;

	if(l<ht.size() && ht[l]>ht[largest]){
		largest=l;
	}

	if(r<ht.size() && ht[r]>ht[largest]){
		largest=r;
	}

	if(i!=largest){
		swap(ht[i],ht[largest]);

		heapify(ht,largest);
	}
}
void insert(std::std::vector<int> &ht,int newNum){
	int size=ht.size();
	if(size==0){
		ht.push_back(newNum);
	}else{
		ht.push_back(newNum);
		for(int i=size/2-1;i>=0;i--){
			heapify(ht,i);
		}
	}
}

void deleteNum(std::vector<int> &ht,int num){
	int size=ht.size();
	int i;
	for(i=0;i<size;i++){
		if(ht[i]==num) break;
	}

	swap(ht[i],ht[size-1]);

	ht.pop_back();
	for(int i=size/2-1;i>=0;i--){
		heapify(ht,i);
	}
}

void printArray(std::vector<int> &ht){
	for(int i=0;i<ht.size();i++){
		std::cout<<ht[i] << ' ';
	}
	std::cout<< '\n';
}


int main(){
	std::vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);

    std::cout << "Max-Heap array: ";
    printArray(heapTree);
  
    deleteNum(heapTree, 4);

    std::cout << "After deleting an element: ";

    printArray(heapTree);

    return 0;
}

//Time complexity
//Linked list peek O(1) insert O(n) delete O(1)
//Binary Heap peek O(1) insert O(logn) delete O(1)
//Binary Tree peek O(1) insert O(logn) delete O(1)