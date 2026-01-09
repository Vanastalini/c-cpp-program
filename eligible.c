#include<stdio.h>
#include<string.h>
int main(){
    char b[20];
    int age;
    printf("enter age");
    scanf("%d",&age);
    printf("enter citizen");
    scanf("%s",&b);

    if(age>=18 && strcmp(b,"indian")==0){
        printf("eligible");
    }
    else{
        printf("not eligible");
    }
}