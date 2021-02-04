#include <stdio.h>

int main(){
	int list_arr[5]= {10,20,30,40,50};
	int *lista_ptr;
	list_arr=lista_ptr; //ambas apuntan al mismo lugar

	printf("%d\n", list_arr[0]);

	printf("%d\n", lista_ptr[0]);

	printf("%d\n", *list_arr);

	printf("%d\n", *lista_ptr);
	return 0;
}