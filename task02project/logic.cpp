#include "logic.h"

string get_raws_with_zero_value(int matrix[N][N]) {
	string result = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) 
		{
			if (matrix[i][j] == 0) {
				result += to_string(i+1) + " ";
				break;
			  }
			}
		}
	return result;
}