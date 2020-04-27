#pragma once
#include <iostream>
#include <string>
#include "Qfloat.h"
using namespace std;
int main()
{
	Qfloat q;
	// cau a
	ScanQfloat(q);
	// cau b in ra so vua nhap tu cau a
	PrintQfloat(q);
	cout << endl;
	// cau c dich tu so thap phan tu string bin ve string dec
	// VD: 00111111111111111100101000111101011100001010001111010111000010100011110101110000101000111101011100001010001111010111000010100100
	cout << "Cau c: " << endl;
	cout << QfloatBitToString("00111111111111111100101000111101011100001010001111010111000010100011110101110000101000111101011100001010001111010111000010100100");
	// cau d dich tu so thap phan sang nhi phan
	// VD: 1.79
	cout << endl << "Cau d: " << endl;
	cout << QfloatToStringBin("1.79");
	return 0;
}