#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int a,b,sum,subtraction , multiplication  ;
float division;
char c[100];
clrscr();
printf("choose the option : \n1  addition  \n2.   subtraction  \n3. multiplication \n4. division\n > ");
scanf("%s",&c);
printf(" enter the  two number=");
scanf("%d \n %d",&a, &b);
if(strcmp( c, "addition")==0)
{
sum= a+b;
printf("%d+%d=%d",a,b,sum);
}
else if(strcmp(c, "subtraction")==0)
{
subtraction= a-b;
printf("%d-%d=%d",a,b,subtraction);
}
if(strcmp( c, "multiplication")==0)
{
multiplication= a*b;
printf("%d*%d=%d",a,b,multiplication);
}
else if(strcmp(c, "division")==0)
{
division= (float)a/b;
printf("%d/%d=%.3f",a,b,division);
}
getch();
return 0;
}

