#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Qfloat
{
	char arrBits[16];
};
void init(Qfloat&);
std::string AddBigInt(std::string, std::string);
std::string SubBigInt(std::string, std::string);
std::string stringDecToBin(string s);
string convertAfterComma(string s);
string subStringBit(string b1, string b2);


//bool CheckInput(std::string&); ///????


void Div2(std::string&);
void Div2ToPrint(std::string&);

void SetBitSign(Qfloat &);
bool GetBit(char, int);
bool GetBitSign(const Qfloat& x);
void OnBit(char&, int);
void OffBit(char&, int);
void SetBit(Qfloat&, int, bool);
bool GetBit(Qfloat, int);

string QfloatToStringBin(string s); //(*)
Qfloat ConvertStringToQfloat(string s);
void ScanQfloat(Qfloat&); //(*)

string x5(string str);
string Pow5(int x);
string PowNegativeTwo(int x);
string AddBigIntAfterComma(string A, string B);
void PrintQfloat(Qfloat&); //(*)
string QfloatBitToString(string bit); //(*)