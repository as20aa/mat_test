// mat_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()

{
	Mat a(2, 2, CV_8UC3, Scalar(0, 0,255));
	cout << "M=" << endl << a << endl << endl;
	system("pause");
    return 0;
}

