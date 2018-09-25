#include "function1.h"

void fill_array(int* arr, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
}
void print_array(int* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int min_array(int* arr, int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i]< min )
			min = arr[i];
		return min;
	}
}
int max_array(int* arr, int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
		return max;
	}
}

void sort(int* arr, int n)
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
	}
}

void edit(int * arr, int n, int index)
{
	if (index < n)
		cin >> arr[index];
	else
		return;
}

void fill_array(double* arr, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = (double)(rand() % 100) / (rand() % 20 + 1);
	}
}
void print_array(double* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int min_array(double* arr, int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min < arr[i])
			min = arr[i];
		return min;
	}
}
int max_array(double* arr, int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max > arr[i])
			max = arr[i];
		return max;
	}
}

void sort(double* arr, int n)
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
	}
}

void edit(double * arr, int n, int index)
{
	if (index < n)
		cin >> arr[index];
	else
		return;
}


void fill_array(char* arr, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 255 + 1);
	}
}
void print_array(char* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int min_array(char* arr, int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min < arr[i])
			min = arr[i];
		return min;
	}
}
int max_array(char* arr, int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max > arr[i])
			max = arr[i];
		return max;
	}
}

void sort(char* arr, int n)
{
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > arr[i + 1])
				swap(arr[i], arr[i + 1]);
		}
	}
}

void edit(char * arr, int n, int index)
{
	if (index < n)
		cin >> arr[index];
	else
		return;
}