#include<stdio.h>
#include<string.h>
union book{
    int no;
    char author[50];
    float price;
};
int main(){
    int a;
    a=5;
    union book avangers;
    avangers.no=7;
    
    printf("%d\n",avangers.no);
    
    
}