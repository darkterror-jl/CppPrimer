// Chapter2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{

	//unsigned u = 10;
	//int i = -42;
	//std::cout << u + i << std::endl;

	//unsigned i 为非负数，会造成死循环
	//for (unsigned i = 10; i >= 0; i--)
	//{
	//	std::cout << i << std::endl;
	//}
#pragma region 2.1.2 练习
	//const unsigned MAX_UNSIGNED = 4294967296;

	//unsigned u = 10, u2 = 42;
	//std::cout << u2 - u << " my answer: 32" << std::endl;
	//std::cout << u - u2 << " my answer: " << MAX_UNSIGNED - 32 << std::endl;

	//int i = 19, i2 = 42;
	//std::cout << i2 - i << " my answer: 23" << std::endl;
	//std::cout << i - i2 << " my answer: -23" << std::endl;
	//std::cout << i - u << " my answer: 9" << std::endl;
	//只要unsigned数参与运算，值为unsigned类型
	//std::cout << u - i << " my answer: " << MAX_UNSIGNED - 9 << std::endl;
	//std::cout << i - u2 << " my answer: " << MAX_UNSIGNED - 23 << std::endl;
#pragma endregion

#pragma region 定义变量
	//std::string book = "C++ Primer";
	//std::string book("c++ Primer");
	//int i1 = 1;
	//int i2 = { 1 };
	//int i3(1);
	//int i4{ 1 };

	//long double pi = 3.1415926;
	//int i5 = pi;					// convert executed and lost value
	//int i6{ pi };					// error convert

	//std::cout << i5 << std::endl;

	//int _ = 1;
	//std::cout << _;

	// case sensitive
	//double Double = 3.14;
	//std::cout << Double;
#pragma endregion

#pragma region 复合类型

	//int i = 1;
	//int j = i;
	//j++;
	//std::cout << "i: " << i << ", j: " << j << std::endl;

	//int &k = i;
	//k = 10;
	//std::cout << "i: " << i << ", j: " << j << ", k: " << k << std::endl;
	//i = 11;
	//std::cout << "i: " << i << ", j: " << j << ", k: " << k << std::endl;

	//int &ref_value; // reference must be initialized

	//int ival = 42;
	//int *p = &ival;

	//std::cout << p << std::endl;// address
	//std::cout << *p << std::endl;// value 42

	//*p = 52;
	//std::cout << ival << std::endl;

	//int ival_2 = 43;

	//p = &ival_2;
	//std::cout << *p << std::endl;// value 43

	//int &refval = *p;
	//std::cout << refval << std::endl;
	//refval = 50;
	//std::cout << ival_2 << std::endl;

	// NULL Pointer
	//int *nval = nullptr;
	//std::cout << *nval << std::endl;// error

	/*int i = 42;
	int *pi = 0;
	int *pi2 = &i;
	int *pi3;
	std::cout << "pi2 address: " << pi2 << std::endl;
	pi3 = pi2;
	pi2 = 0;

	std::cout << "pi3 address: " << pi3 << " value: " << *pi3 << std::endl;*/

	// void* pointer
	//double obj = 3.14, *pd = &obj;
	//void *pv = &obj;

	//std::cout << pv << std::endl; // address
	//std::cout << *pv << std::endl; // compile error

#pragma endregion


	return 0;
}

