#include<stdio.h>
#include<float.h>
#include<limits.h>
void main()
{
	printf("no bytes of int=%d\n", sizeof(int));
	printf("no bytes of short int=%d\n", sizeof(short int));
	printf("no bytes of long int=%d\n", sizeof(long int));
	printf("no bytes of unsigned int=%d\n", sizeof(unsigned int));
	printf("no bytes of float=%d\n", sizeof(float));
	printf("no bytes of double=%d\n", sizeof(double));
	printf("no bytes of character=%d\n", sizeof(char));
	printf("range of int is from %d to %d\n", INT_MIN, INT_MAX);
	printf("range of long int is from %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("range of short int is from %d to %d\n", LONG_MIN, LONG_MAX);
	printf("range of unsigned int is from 0 to %d\n",UINT_MAX);
	printf("range of character is from %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("range of float is from %e to %e\n", FLT_MIN, FLT_MAX);
	printf("range of double is from %e to %e\n", DBL_MIN, DBL_MAX);
}
