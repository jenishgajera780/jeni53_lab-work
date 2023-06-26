// Q1 write a programe to find the minimum number from the given 3 number using the tenary operator.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();

printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
(a<b)?(a<c)?printf("a is minimum....\n")
	   :printf("c is minimum....\n")
     :(b<c)?printf("b is minimum....\n")
	   :printf("c is minimum....\n");
getch();
}