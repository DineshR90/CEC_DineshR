#include<stdio.h>
int main(){
    int num,digit=0;
    scanf("%d",&num);
    while(num>0){
        digit=digit+(num%10);
        num=num/10;
    }
    printf("%d",digit);
}