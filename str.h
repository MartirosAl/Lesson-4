#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* @brief ��������� ������� �� �����
* @param line_: ������ ���� �����������
* @param f_: ����
* @return ���-�� ��������� ��������
*/
unsigned int fgetline(char* line_, FILE* f_);

/** 
* @brief ������� ���-�� �������� � ������
* @param str_: ������
* @return ����� ������
*/
unsigned int my_strlen(const char* str_);

/** 
* @brief �������� ������ � ������ ���������� 
* @param toHere ���� ��������
* @param fromHere ������ ��������
* @return ���������� � ������� ����������� 
*/
char* my_strcpy(char* toHere, const char* fromHere);

/** 
* @brief ����������� � ����� ������ ������
* @param dest � ���� �����������
* @param src ��� �����������
* @return ���������� � ������� ��������� ������
*/
char* my_strcat(const char* dest, const char* src);