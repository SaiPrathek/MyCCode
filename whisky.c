#include<stdio.h>
#include<string.h>
struct cricket{
	char name[10];
	char team[10];
	float avg;
};
main(){
	struct cricket a[10];
	int n, i;
	char t[10];
	printf("Enter Number Of Players : ");
	scanf("%d", &n);
	printf("Enter Details Of %d Players : \n", n);
	for(i=0;i<n;i++){
		printf("Enter Name Of Player %d : ", i+1);
		scanf("%s", a[i].name);
		printf("Enter Team Of Player %d: ", i+1);
		scanf("%s", a[i].team);
		printf("Enter Batting Avg Of Player %d: ", i+1);
		scanf("%f", &a[i].avg);
	}
	gets(t);
	for(i=0;i<n;i++){
		if(strcmp(a[i].team, t))
		printf("\nDetails Are : ");
		printf("\n\nName Of Player %d : %s", i+1, a[i].name);
		printf("\nBatting Avg Of Player %d: %f", i+1, a[i].avg);		
	}
}
