#include<stdio.h>
struct A{
	int a;
	float b;
};
main(){
	struct A A1, A2={2, 3.5}, *p;
	p=&A1;
	scanf("%d%f", &(*p).a, &(*p).b);
	printf("%2d - %f\n", (*p).a, (*p).b );
	p=&A2;
	printf("%2d - %f", p->a, p->b);
}
