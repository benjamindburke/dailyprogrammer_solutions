//Benjamin Burke
//Solution in C++ to "Spiral Ascension" r/dailyprogrammer prompt
//Prompt: https://reddit.com/r/dailyprogrammer/comments/6i60lr/20170619_challenge_320_easy_spiral_ascension/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    cout << endl;

    int spiral [10][10];

    int max = size * size;
    int n = 0;
    int row = 0;
    int col = -1;
    int low = 0;
    int high = size;

    while (n < max)
    {
	high--;
	while (col < high)
	{
	    col++;
	    n++;
	    spiral[row][col] = n;
	}

	while (row < high)
	{
	    row++;
	    n++;
	    spiral[row][col] = n;
	}

	while(col > low)
	{
	    col--; n++;
	    spiral[row][col] = n;
	}

	low++;

	while(row > low)
	{
	    row--; n++;
	    spiral[row][col] = n;
	}
    }

    int format_n = log10(max) + 2;
    for (int i = 0; i < size; i++)
    {
	for (int j = 0; j < size; j++)
	{
	    if (j == 0)
		cout << setfill(' ') << setw(format_n - 1) << spiral[i][j];
	    else
		cout << setfill(' ') << setw(format_n) << spiral[i][j];
	}
	cout << endl;
    }

    return 0;
}