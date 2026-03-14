#include<stdio.h>
int sumofDigits(int n)
{
if (n==0)
 return 0;
else
return(n % 10) + sumofDigits(n/10);
}int main()
{
int num;
printf("Enter a number");
scanf("%d",&num);
if(num<0){
		num =-num;

}
int result = sumofDigits(num);
printf("sum of digits of %d s %d\n",num, result);
return 0;
}
