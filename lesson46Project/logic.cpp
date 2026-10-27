#include "logic.h"

//int get_max_elememt(int* array, int size) {
//	int max = array[0];
//	for (int i = 1; i < size; i++) {
//		if (max < array[i]) {
//			max = array[i];
//		}
//	}
//	return max;
//}
int get_max_elememt(int* array, int size) {
	int max = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	return max;
}

int get_min_elememt(int* array, int size) {
	int min  = INT_MAX; 
	for (int i = 0; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
		}
	}

	return min;
}
double get_geometrical_avg(int* array, int size) {
	return 0.0;
}
double get_arithmetical_avg(int* array, int size) {
	return 0.0;

}