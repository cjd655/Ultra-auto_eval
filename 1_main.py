\\202511716132
\\2792131611@qq.com
\\MY_URL
#include <stdio.h>
int main() 
{
    int i,a,b,c;
   for (i = 100;i <=999;i++){
    a = i / 100;
    b = (i / 10) % 10;
    c = i % 10;
    if (a*a*a+b*b*b+c*c*c == i){
        printf("%d ",i);
    }
   }
    return 0;
}
