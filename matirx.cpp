#include <iostream>

using namespace std;

void maxval();
void minval();
void abovezero();
void belowzero();
void swapcolumn();
void swaprows();

int main()
{
	maxval();
	cout << endl;
	minval();
	cout << endl;
	abovezero();
	cout << endl;
	belowzero();
	cout << endl;
	swapcolumn();
	cout << endl;
	swaprows();
}

void maxval()
{
		int array[4][4]={{2,33,4,1},
					 {3,44,3,12},
					 {56,7,8,86},
					 {5,2,4,21}};
	int LargestIndex_i = 0;
	int LargestIndex_j = 0;

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i==j)
			{
				if(array[LargestIndex_i][LargestIndex_j] <= array[i][j]) //*important
				{
					LargestIndex_i = i;
					LargestIndex_j = j;
				}

			}

		}
	}

		cout << "The largest number in the primary diagonal is: " << array[LargestIndex_i][LargestIndex_j] << endl;
}

void minval()
{
	int array[4][4]={{2,33,4,1},
					 {3,44,3,12},
					 {56,7,8,86},
					 {5,2,4,21}};
	int smallindex_i=0;
	int smallindex_j=0;

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if((i+j)==(4-1))
			{
				if(array[smallindex_i][smallindex_j] >= array[i][j])
				{
					smallindex_i = i;
					smallindex_j = j;
				}
			}
		}
	}

	cout << "The smallest number in the secondary diagonal is: " << array[smallindex_i][smallindex_j] << endl;
}

void abovezero()
{
	int array[4][4]={{2,33,4,1},
					 {3,44,3,12},
					 {56,7,8,86},
					 {5,2,4,21}};
	int n = 0;
	int i;
	int j;
	int x=1;

	for(i=0;i<4;i++)
	{
		for(j=x;j<4;j++)
		{
			array[i][j]=n;
		}
		x++;
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout << " " << array[i][j];
		}
		cout << endl;
	}
}

void belowzero()
{
	int array[4][4]={{2,33,4,1},
					 {3,44,3,12},
					 {56,7,8,86},
					 {5,2,4,21}};
	int n = 0;
	int i;
	int j;
	int x=1;

	for(i=1;i<4;i++)
	{
		for(j=0;j<x;j++)
		{
			array[i][j]=n;
		}
		x++;
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout << " " << array[i][j];
		}
		cout << endl;
	}
}

void swapcolumn()
{
	int array[4][4]={{2,33,4,1},
					 {3,44,3,12},
					 {56,7,8,86},
					 {5,2,4,21}};
	int temp;
	int i;
	int j;


	for(i=0;i<4;i++)
	{
		temp = array[i][0];
		array[i][0] = array[i][2];
		array[i][2] = temp;
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout << " " << array[i][j];
		}
		cout << endl;
	}
}

void swaprows()
{
	int array[4][4]={{2,33,4,1},
					 {3,44,3,12},
					 {56,7,8,86},
					 {5,2,4,21}};
	int temp;
	int i;
	int j;

		for(j=0;j<4;j++)
	{
		temp = array[1][j];
		array[1][j] = array[3][j];
		array[3][j] = temp;
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout << " " << array[i][j];
		}
		cout << endl;
	}

}
