//202511716132
//2792131611@qq.com
//陈俊东
include <stdio.h>
int main() 
{
    int i = 100,a,b,c;
   while (i <=999){
    a = i / 100;
    b = (i / 10) % 10;
    c = i % 10;
    if (a*a*a+b*b*b+c*c*c == i){
        printf("%d ",i);
    }
