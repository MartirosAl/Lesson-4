#include "str.h"


int main()
{
   char str1[100] = "1234567";
   char str2[] = "1234";
   printf("%d %d \n", my_strlen(str1), my_strlen(str2));
   //printf("%s \n", my_strcpy(str1, str2)); //��-�� ����, ��� �� ������ � ���� ������� str1, �� ��� �������� � ����������� 
   printf("%s \n", my_strcat(str1, str2));
   return 0;
}


// size_t strlen(const char *);	���������� ����� ������
// char *strcpy(char *toHere, const char *fromHere);	�������� ������ �� ������ ����� � ������
// char *strcat(char *dest, const char *src);	���������� ������ src � ����� dest
// size_t strspn(const char *s, const char *accept);	���������� ������������ ����� ��������� ���������, ��������� ������������� �� ������, ������������� � accept
// char *strstr(const char *haystack, const char *needle);	������� ������ ��������� ������ needle � haystack