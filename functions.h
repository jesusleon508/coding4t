/*********************
Name: Jesus Leon
Coding 04
Purpose: school project working wirh arrays and passing by reference using g++, git, and github
**********************/


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

using std::cout;
using std::endl;

// use these defines in your fill random function
#define MIN 1
#define MAX 100

// do not modify these prototypes, use them as is in your cpp
int sum_array(int*, const int);
float avg_array(int*, const int);
void add_arrays(int*, int*, int*, const int);
void display_array(int*, const int);
void fill_random(int*, const int);
bool is_positive_integer(char*);

#endif /* FUNCTIONS_H */
