//swapping first and last digit of a number

#include<stdio.h>
#include<math.h>
int main(){
    int n,last_digit,power,first_digit,final,new;
    scanf("%d",&n);
    last_digit=n%10;
    power=log10(n);
    first_digit=n/pow(10,power);
    final=(last_digit*(int)pow(10,power))+(n%(int)pow(10,power));
    printf("%d\n",final);
    new=final-last_digit+first_digit;

    printf("%d",new);
    return 0;
}