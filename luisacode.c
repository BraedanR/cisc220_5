//Braedan Robinson 10188414
//Luisa Aimoli 10169687

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

union Data get(int index) {

int count=0; //initialize index
struct node* current = data.len;
int length = LinkedListLength(current);

if (index <= 0 || index > length) {
	printf("No node at this index!\n");
	exit(-1); //error
} else {
	while (current != NULL) { //loop through link list
		if (count == index)
			return (current->data);//or data.current //minimum number of iterations
		count++;
		current = current->next; //next item
}
}

//dont forget to free the struct on maiin

int length() {

return data.len; 
//update len insert;
//update len remove
}
