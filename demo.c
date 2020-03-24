# include<stdio.h>

int addition (int,int);

int main()
{
int value1=0;
int value2=0;
int result=0;

printf("enter 1st no");

scanf("%d", & value1);

printf("enter 2nd no");

scanf("%d", & value2);

result=addition(value1,value2);

printf("addition of 2 no. in %d", result);

return 0;
}

int addition (int no1,int no2)
{
int ans=0

ans= no1+no2;


return ans;

}
