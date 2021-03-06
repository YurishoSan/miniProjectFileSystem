#pragma once
struct VolumeHeader
{
	unsigned int sectorNr; // ���� ������ �� ������ ����� 
	char diskName[12]; //�� ����� �����
	char diskOwner[12]; //�� ��� �����   
	char prodDate[10]; //����� ���� ����� (ddmmyyyy)
	unsigned intClusQty; //��"� ������ ����� (clusters)  �����
	unsigned int dataClusQty; //���� ������ ����� ������� ����
	unsigned int addrDAT; //����� ������ ����� �� �-DAT
	unsigned int addrRootDir; //����� �-cluster ����� �� ������� ������ (Root Directory)
	unsigned int addrDATcpy; //����� ������ ����� ���� ��� �� �-DAT 
	unsigned int addrRootDirCpy; //����� �-cluster ����� ���� ��� �� ������� ������ (Root Directory)  
	unsigned int addrDataStart;  //����� �-cluster ������ ����� ������ �������.
	char formatDate [10];  //����� ������ (ddmmyyyy)
	bool isFormated; // ��� ��� ������?
	char emptyArea [944]; //���� ������ �����
};

