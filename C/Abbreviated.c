// Convert a Person’s Name into an Abbreviated
#include<stdio.h>
int main(){

char fname[20], mname[20], lname[20];

printf("Enter you first middle last name :");
scanf("%s %s %s",fname , mname, lname);

printf("Abbreviated code :");
printf("%c.%c.%s\n",fname[0], mname[0], lname);
return 0;



}       