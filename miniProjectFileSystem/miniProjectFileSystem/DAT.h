#pragma once
#include <bitset>
using namespace std;

typedef bitset<1600> DATtype; 

struct Dat
{
	unsigned int sectorNr; //���� ������ �� ������ �����
	DATtype DAT;
	char emptyArea[820];  ///���� ������ �����
};
