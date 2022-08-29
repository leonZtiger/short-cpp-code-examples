#include<iostream>

struct item {

	item *next;
	int val;

};

int main() {

	const int size = 50;
	item* linkedList[size];
	 
	// init the linked list
	for (int i = size - 1; i > -1; i--) {

		item* nI = new item;
		nI->val = i*(i+1);

		if (i != (size - 1))
			nI->next = linkedList[i + 1];
		else
	    nI->next = NULL;
		
		linkedList[i] = nI;
		
	}
	// 0 1 2 3 4 5 6
	// 6->5->4->3->2->1->0
	// 
	// 
	// reversing the list
	for (int i = size-1; i > 0; i--) {
	
		if(linkedList[i-1]->next)
		linkedList[i]->next =  linkedList[i-1];

	}

	//printing the list
	for (int i = 0; i < size; i++) {
		
		if(linkedList[i]->next)
		std::cout << "val  " << linkedList[i]->val << "  next adress  "<< linkedList[i]->next->val << "\n";

	}
}