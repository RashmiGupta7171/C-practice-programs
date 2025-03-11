#include<stdio.h>
int main(){
    int integer;
    char string[10];
    float number;
    printf("Enter a Integer number:");
    scanf("%d",&integer);
    printf("Enter a String:");
    scanf("%s",&string);
    printf("Enter a Float value:");
    scanf("%f",&number);
    printf("The number is :%d\n",integer);
    printf("The number is :%s\n",string);
    printf("The number is :%.2f\n",number);
    printf("The value is integer,string and float value:%d %s %.2f",integer,string,number);
    return 0;
}