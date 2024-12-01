#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void FillMatrixWithRandomNumbers(short Arr[3][3] , short Rows , short Cols)
{

	for (int i = 0 ; i < Rows ; i++)
	{
		for (int j = 0 ; j < Cols ; j++)
		{
			Arr[i][j] = RandomNumber(1,100);
		}
	}

}

void PrintRandomizedMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << Arr[i][j] << "\t";
		}
		cout << "\n";
	}
}

short ColumnSum(short Arr[3][3], short Rows, short ColNumber)
{
	short Sum = 0;
	for (int j = 0 ; j < Rows; j++)
	{
		Sum += Arr[j][ColNumber];
	}
	return Sum;
}

void PrintWachColumnSum(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0 ; i < Cols ; i++)
	{
		printf("Row [%d] Sum = %d\n" , i + 1 , ColumnSum(Arr , Rows , i));
	}
}

int main()
{
	srand((unsigned)time(NULL));

	short Arr[3][3];

	FillMatrixWithRandomNumbers(Arr, 3, 3);

	cout << "\n These are 3x3 matrix randomized elements\n";
	PrintRandomizedMatrix(Arr , 3 , 3);

	PrintWachColumnSum(Arr, 3 , 3);


}

