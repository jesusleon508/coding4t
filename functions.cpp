/*********************
Name: Jesus Leon
Coding 04
Purpose: school project working wirh arrays and passing by reference using g++, git, and github
**********************/


#include "functions.h"

int sum_array(int* arr, const int size) {
	int tot = 0;
	for(int i=0; i< size; i++) {
	tot+= arr[i];
	}
	return tot;
} 

		

//float avg_array(int* arr, const int size) {

//}


//void add_arrays(int* arr1, int* arr2, int* arr3, const int size) {

//}


void display_array(int* arr, const int size) {
	for(int i=0; i< size; i++) {
	       cout << arr[i] << " ";
	}
	cout << endl; 	
}

//void fill_random(int* arr, const int size) {

//}


//bool is_positive_integer(char* str) {

//}
	

