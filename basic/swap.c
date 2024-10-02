//swapping first and last digit of a number

#include<stdio.h>
#include<math.h>
int main(){
    int n,ld,power,fd,final,new;
    printf("enter the number : ");
    scanf("%d",&n);
    ld=n%10;
    power=log10(n);
    fd=n/pow(10,power);
    final=(ld*(int)pow(10,power))+(n%(int)pow(10,power));
    new=final-ld+fd;

    printf("%d",new);
    return 0;
}