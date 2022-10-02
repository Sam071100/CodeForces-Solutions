/* 
C++ program to create a 2D vector where 
every row has a certain number of values
as defined by the user.(On line 13)
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	/* Here we tell how many rows 
	the 2D vector is going to have. */
	int row = 5;

	/* We define the number of values 
	each row is supposed to have. */
	int colom[] = {5, 3, 4, 2, 1}; 

	/*
	We now create a vector of vector with size
	equal to row.
	*/
	
	vector<vector<int>> vec(row);
	/*
	On line 21 we created a 2D vector and assinged
	it a capacity of "row"(in this case 5) units.
	*/
	
	/*
	Now we will proceed to create the sturture of
	our 2D vector by assigning the value of rows and
	columns through a nested for loop.
	*/

	for(int i = 0; i < row; i++)
	{ 
		/* Declaring the size of the column. */
		int col = colom[i]; 

		/*
		On the 43rd line we declare the 
		i-th row to the size of the column.
		We create a normal vector of capacity "col" which
		in every iteration of the for loop will define the
		values inside of each row.
		*/
		vec[i] = vector<int>(col);
		for(int j = 0; j < col; j++)
		{
			vec[i][j] = j + 1;
		} 
	}
	
	/*
	We now finally use a simple nested for loop
	to print the 2D vector that we just created above.
	*/

	for(int i = 0; i < row; i++)
	{
		for (int j = 0; j < vec[i].size(); j++)
		{
			cout << vec[i][j] << " ";
		} 
		cout << endl;
	}
	return 0;
}
