#include "util.h"
#include "logic.h"
#define DEFUALT_SIZE 100


int main(){
	int array[DEFUALT_SIZE];

	int size;
	do {
		system("cls");
		print("input size of array: ");
		cin >> size;
	} while (size < 1 || size > DEFUALT_SIZE);



	init(array, size, -50, 50);
	print("\n ARRAY elements: ");
	print(convert(array, size));

	int max = get_max_elememt(array, size);
	int min = get_min_elememt(array, size);

	print("\nRESLUT: max = " + to_string(max));
	print("\nRESLUT: min = " + to_string(min));



	return 0;
}