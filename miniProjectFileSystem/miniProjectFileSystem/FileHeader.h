#pragma once
#include "DAT.h"
#include "DirEntry.h"

struct FileHeader
{
unsigned int sectorNr;  //���� ������ �� ������ �����
DirEntry fileDesc ; // ���� �� ������ �� ����� ������� (file descriptor)
DATtype FAT; // FAT

char emptyArea[744];  //���� ������ �����
};

