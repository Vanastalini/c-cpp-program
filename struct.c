#include<stdio.h>
#include<string.h>
struct book{
    int no;
    char author[50];
    float price;
};
int main(){
    int a;
    a=5;
    struct book avangers;
    avangers.no=7;
    strcpy(avangers.author,"marvelsstudio");
    avangers.price=345.78;
    printf("%d\n",avangers.no);
    printf("%s\n",avangers.author);
    printf("%d\n",avangers.price);
    struct book harrypotter;
    harrypotter.no=8;
    strcpy(harrypotter.author,"j.k.rowlin");
    harrypotter.price=500.05;
    printf("%d\n",harrypotter.no);
    printf("%s\n",harrypotter.author);
    printf("%f\n",harrypotter.price);
}