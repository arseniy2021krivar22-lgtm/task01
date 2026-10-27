#include "util.h"
#include "logic.h"
#define DEFUALT_SIZE 100


int main(){
	int array[DEFUALT_SIZE]{1,2,3,4,5,6,7,8,9,10};

	int size = 10;
	//do {
	//	system("cls");
	//	print("input size of array: ");
	//	cin >> size;
	//} while (size < 1 || size > DEFUALT_SIZE);



	//init(array, size, -50, 50);

	print("\n ARRAY elements : ");
	print(convert(array, size));
	int value = 7;

	cout << "\n"<<binare_search(array, size, value) << endl;

	/*int max = get_max_elememt(array, size);
	int min = get_min_elememt(array, size);

	print("\nRESLUT: max = " + to_string(max));
	print("\nRESLUT: min = " + to_string(min));

	double geo = get_geometrical_avg(array, size);
	double arth = get_arithmetical_avg(array, size);

	print(", arithmetical  avg = " + to_string(arth));
	print(",  geometrical avg = " + to_string(geo));*/



	



	return 0;
}