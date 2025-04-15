#include <iostream>

using namespace std;

template <typename T>

T calculatethemaximumvalue(const T arrayval[], int big) {
	T maxval = arrayval[0];
	for (int r = 1; r < big; r++) {
		if (arrayval[r] > maxvalue) {
			maxvalue = arrayval[r];
		}
	}
	return maxval;
}

//function in the T template is used to carefully scan the array via a linear algorithm