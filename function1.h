#include<ctime>
#include<cstdlib>
#include<iostream>
#define MY_INTEGER
#define MY_DOUBLE
#define MY_CHAR

using namespace std;
#ifndef _MY_FUNCTION_
#define _MY_FUNCTION_

#ifdef MY_INTEGER
void fill_array(int* arr, int n);
void print_array(int* arr, int n);
int min_array(int* arr, int n);
int max_array(int* arr, int n);
void sort(int* arr, int n);
void edit(int * arr, int n, int index);
#define PrintInt print_array 
#define fillInt fill_array 
#endif // MY_INTEGER


#ifdef MY_DOUBLE
void fill_array(double* arr, int n);
void print_array(double* arr, int n);
int min_array(double* arr, int n);
int max_array(double* arr, int n);
void sort(double* arr, int n);
void edit(double * arr, int n, int index);
#define PrintDouble print_array 
#define fillDouble fill_array 
#endif // MY_DOUBLE

#ifdef MY_CHAR
void fill_array(char* arr, int n);
void print_array(char* arr, int n);
int min_array(char* arr, int n);
int max_array(char* arr, int n);
void sort(char* arr, int n);
void edit(char * arr, int n, int index);
#define PrintChar print_array 
#define fillChar fill_array 
#endif // MY_CHAR

#endif