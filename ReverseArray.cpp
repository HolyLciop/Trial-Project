#include <iostream>
using namespace std;

void reverseArray(int* arr, int size);
int countGreaterThan(int* arr, int size, int value);

int main(void)
{
	int size;
	cin >> size;
	//define the size of the array
	
	int Array[size];
	for(int i=0; i<size; i++)
	{
		cin >> Array[i];
	}
	//fill in every number of the array

	int value;
	cin >> value;
	//get the standard value
	
	for(int j=0; j<size; j++)
	{
		cout << Array[j] << " " ;
	}
	cout << endl;
	//print the original array
	
	reverseArray(Array, size);
	//reverse the Array
	
	for(int k=0; k<size; k++)
	{
		cout << Array[k] << " " ;
	}
	cout << endl;
	//print the reversed array
	
	int sum=countGreaterThan(Array, size, value);
	cout << sum << endl;
	//print the sum of numbers wanted
	
	return 0;
}

void reverseArray(int* Array, int size)
{
	int Array1[size];
	for(int i=0; i<size; i++)
	{
		Array1[i]=Array[i];
	}
	
	for(int j=0; j<size; j++)
	{
		Array[j]=Array1[size-j-1];
	}
}

int countGreaterThan(int* Array, int size, int value)
{
	int sum=0;
	for(int i=0; i<size; i++)
	{
		if(Array[i] > value)
		{
			sum++;
		}
	}
	return sum;
}