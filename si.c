#include<stdio.h>
int main(){
    int p,n, r;
    printf("enter principle");
    scanf("%d",&p);
    printf("enter no of interest");
    scanf("%d",&n);
    printf("enter rate interest");
    scanf("%d",&r);
    float simpleinterest=(p*n*r)/100;
    printf("%f",simpleinterest);
}