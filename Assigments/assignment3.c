#include<stdio.h>
int main(){
    int a;
    printf("Enter a postive number : ");
    scanf("%d",&a);
    if(a>=1 && a<=9){
        if(a==1)
            printf("One");
        if(a==2)
            printf("Two");
        if(a==3)
            printf("Three");
        if(a==4)
            printf("Four");
        if(a==5)
            printf("Five");
        if(a==6)
            printf("Six");
        if(a==7)
            printf("Seven");
        if(a==8)
            printf("Eight");
        if(a==9)
            printf("Nine");
    }
    else
        printf("Greater than 9");
}
