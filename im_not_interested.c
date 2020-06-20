#include<stdio.h>
#include<stdlib.h>
int win();
main()
{
	char t[3][3]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int pos, i=1, c, w=-1;
	while(i<=9){
		scanf("%d", &pos);
		if(pos>9||pos<0){
			printt(t);
			continue;
		}
		pos--;
		if(t[pos/3][pos%3]!='X'&&t[pos/3][pos%3]!='O'){
			t[pos/3][pos%3]='X';
			i++;
			if(i==9)
				break;
		}
		while(1){
			c=rand()%9+1;
			c--;
			if(t[c/3][c%3]!='X'&&t[c/3][c%3]!='O'){
			t[c/3][c%3]='O';
			i++;
			break;
		}
		}
		printf("%d-%d\n", pos, c);
		printt(t);
		switch(win(t)){
			case 1:printf("\nYou Win");w=1;goto out;
			case 2:printf("\nYou Lose");w=1;goto out;
			default:continue;
		}
	}
	out:
		if(w!=1&&w!=2)
			printf("Draw");
}

printt(char a[3][3]){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%2c", a[i][j]);
		printf("\n");
	}
}

int win(char a[3][3]){
	int i, j;
	for(i=0;i<3;i++){
		if((a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][2]=='X')||(a[0][i]==a[1][i]&&a[1][i]==a[2][i]&&a[2][i]=='X')||(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]=='X')||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]=='X'))
			return 1;
		else if((a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][2]=='O')||(a[0][i]==a[1][i]&&a[1][i]==a[2][i]&&a[2][i]=='O')||(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]=='O')||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]=='O'))
			return 2;
		else return -1;
	}
}
