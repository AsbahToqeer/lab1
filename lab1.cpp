#include<iostream>
#define SIZE 2
using namespace std;
void matrix_mul(int arr1[SIZE][SIZE],int arr2[SIZE][SIZE]){        //function for iterative matrix multiplication
    int arr3[SIZE][SIZE];
	int k,i,j;
	for (i = 0; i<SIZE; i++)
	{
		for (j = 0; j<SIZE; j++)
		{
			int sum = 0;
			for (k = 0; k<SIZE; k++)
			{
				sum = sum + arr1[i][k] * arr2[k][j];
			}
			arr3[i][j] = sum;
		}
	}
	cout << "\nMultiplication of two Matrices through iterative method is : \n";
	for (i = 0; i<SIZE; i++)
	{
		for (j = 0; j<SIZE; j++)
		{
			cout << arr3[i][j] << "\t";
		}
		cout << "\n";
	}
	

}


void strassen_mul(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){							//function for strassen's algorithm
	
		
		int res[SIZE][SIZE], i, j, k;
		int s1, s2, s3, s4, s5, s6, s7;
		
		
		s1 = (arr1[0][0] + arr1[1][1]) * (arr2[0][0] + arr2[1][1]);
		s2 = (arr1[1][0] + arr1[1][1]) * arr2[0][0];
		s3 = arr1[0][0] * (arr2[0][1] - arr2[1][1]);
		p4 = arr1[1][1] * (arr2[1][0] - arr2[0][0]);
		s5 = (arr1[0][0] + arr1[0][1]) * arr2[1][1];
		s6 = (arr1[1][0] - arr1[0][0]) * (arr2[0][0] + arr2[0][1]);
		s7 = (arr1[0][1] - arr1[1][1]) * (arr2[1][0] + arr2[1][1]);
		
		
		//Storing elements in res matrices
		res[0][0] = s1 + s4 - s5 + s7;
		res[0][1] = s3 + s5;
		res[1][0] = s2 + s4;
		res[1][1] = s1 - s2 + s3 + s6;
		cout << "\nThe res of Strassen's algorithm is:\n";
		cout << res[0][0] << "\t";
		cout << res[0][1] << endl;
		cout << res[1][0] << "\t";
		cout << res[1][1] << endl;
		

}


void main(){
	int i, j, x, y, c;
	int arr1[SIZE][SIZE];
	int arr2[SIZE][SIZE];
	
	for (i = 0; i < SIZE; i++)							//populating array1 with random numbers
	{
		for (j = 0; j < SIZE; j++)
		{
			arr1[i][j] = rand();
			cout << endl;
		}
	}

	for (x = 0; x < SIZE; x++)						//populating array2 with random numbers
	{
		for (y = 0; y < SIZE; y++)
		{
			arr2[x][y] = rand();
			cout << endl;
		}
	}


	for (i = 0; i <SIZE; i++)					//This will output the array1.
	{
		for (j = 0; j <SIZE; j++)
			cout << arr1[i][j] << "\t";
		cout << endl;
	}

	cout << endl << endl;
	for (x = 0; x <SIZE; x++)					//This will output the array2.
	{
		for (y = 0; y <SIZE; y++)
			cout << arr2[x][y] << "\t";
		cout << endl;
	}
	matrix_mul(arr1,arr2);
	strassen_mul(arr1, arr2);
	getchar();
	getchar();

}