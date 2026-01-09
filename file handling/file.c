#include<stdio.h>
int main(){
    FILE * fp;
    char s[100];
    char c;

    //write
    fp=fopen("test.txt","w");
    fputs("hello word!!",fp);
    fputc('f',fp);
    fclose(fp);

    //read
    fp=fopen("test.txt","r");
    fgets(s,10,fp);
    printf("%s",s);
    fclose(fp);

    //append
    fp=fopen("test.txt","a");
    fputs("hii iam robot how can i guide u!!",fp);

    //update  
    fp=fopen("test.txt","r+"); 
    fseek(fp,0,SEEK_SET); 
    fprintf(fp,"new");    
    fclose(fp);
}