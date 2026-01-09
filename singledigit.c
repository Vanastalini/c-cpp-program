#include<stdio.h>
int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a>=-9 && a<=9 ){
        printf("single digit");
    }else{
        printf("multiple digit");
    }
}