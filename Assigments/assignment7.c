#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a postive number : ");
    scanf("%d",&a);
    printf("Enter a postive number : ");
    scanf("%d",&b);
    if(a<=9 && b<=9){
        if(a==1 || b==1)
            printf("One\n");
        if(a==2 || b==2)
            printf("Two\n");
        if(a==3 || b==3)
            printf("Three\n");
        if(a==4 || b==4)
            printf("Four\n");
        if(a==5 || b==5)
            printf("Five\n");
        if(a==6 || b==6)
            printf("Six\n");
        if(a==7 || b==7)
            printf("Seven\n");
        if(a==8 || b==8)
            printf("Eight\n");
        if(a==9 || b==9)
            printf("Nine\n");
    }
    else
        printf("Greater than 9");
    for(a,b;a==b;a++){
        if(a<=9 && b<=9){
        if(a==1 || b==1)
            printf("One\n");
        if(a==2 || b==2)
            printf("Two\n");
        if(a==3 || b==3)
            printf("Three\n");
        if(a==4 || b==4)
            printf("Four\n");
        if(a==5 || b==5)
            printf("Five\n");
        if(a==6 || b==6)
            printf("Six\n");
        if(a==7 || b==7)
            printf("Seven\n");
        if(a==8 || b==8)
            printf("Eight\n");
        if(a==9 || b==9)
            printf("Nine\n");
    }
    else
        printf("Greater than 9");
    }
    if(a%2==0){
        printf("Even\n");
    }
    else
        printf("Odd\n");

    if(b%2==0){
        printf("Even\n");
    }
    else
        printf("Odd\n");
}