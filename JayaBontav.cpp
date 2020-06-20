#include<stdio.h>
class Parent{
	public:
	static method(){
		printf("In Parent.");
	}
	static method(char a){
		printf("\n%c", a);
	}
};
main(){
	Parent::method();
	Parent::method('a');
}
