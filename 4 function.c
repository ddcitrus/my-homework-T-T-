//输入函数，通过用户输入数字存入内存
#include<stdio.h>
int main(){
    int num1=0;
    char num2=0;
    scanf("%d",&num1);//记得输入数字哦
    //&表示num1在内存条内的地址，这里不能输入变量名，但是数组名不用写地址
    printf("num1=%d",num1);

    scanf("\n%c",&num2);//这里如果没有\n会把回车当作字符输入
    printf("num2=%c",num2);
    return 0;
}