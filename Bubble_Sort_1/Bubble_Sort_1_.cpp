#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int Array1[6] = { 1,15,9,4,8,2 };
	int p;
	int i,j;

	while(j<6)
	{
		j += 0;
		i += 0;
		if (i >= 0 && i < 6)  
		{
			if (Array1[i] < Array1[i + 1])
			{
				p = Array1[i];
				Array1[i] = Array1[i + 1];
				Array1[i + 1] = p;
				cout << Array1[i + 1] << " ";
			}
			i++;
		}
		j++;
	}
	system("pause");
	return 0;
}