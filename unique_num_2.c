#include<stdio.h>
main(){
	int num, i, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c0=0;
	// scanf("%d", &num);
	num=12348756;
	while(num>0){
		switch(num%10){
			case 1:c1++;break;
			case 2:c2++;break;
			case 3:c3++;break;
			case 4:c4++;break;
			case 5:c5++;break;
			case 6:c6++;break;
			case 7:c7++;break;
			case 8:c8++;break;
			case 9:c9++;break;
			case 0:c0++;break;
		}
		num/=10;
	}
	if(c1>1||c2>1||c3>1||c4>1||c5>1||c6>1||c7>1||c8>1||c9>1||c0>1)
		printf("Not Unique!");
	else
		printf("Unique!");
}
