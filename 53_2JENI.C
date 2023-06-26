//write a programe to crate a menu-driven program for telecom call service conversation using nested switch case.

#include<stdio.h>
#include<conio.h>

void main(){

int choice,english,gujrati,hindi;

clrscr();

printf("press 1 for englis\n");
print("press 2 for hindi\n");
printf("press 1 for gujrati\n");
peintf("enter your choice:\n");
scanf("%d",&choice);

switch(choice){
case 1:
printf("press 1 for internet recharge..\n");
printf("press 2 for top-up recharge..\n");
printf("press 3 for spacial recharge..\n ");
print("enter  your choice:");
scanf("%d",english);

switch(english){
case 1:
print("you have sucessfully done internet recharge..")
break;

case 2:
print("tou have sucessfully done top-up recharge..")
break;
case 3:
print("you have sucessfully done special recharge..")
break;

default:
printf("no plan availabel")
break;

case 2:
printf("internet recharge ke liye 1 dabaiye\n");
printf("top-up recharge ke liye 2 dabaiye\n");
printf("special recharge ke liye 3 dabaiye\n");
scanf("%d");