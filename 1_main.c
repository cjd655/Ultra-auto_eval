//202511716132
//2792131611@qq.com
//陈俊东
#include <stdio.h>
int main() 
{
    float celsius, fahrenheit;
    //获取用户输入的摄氏度
    scanf ("%f", &celsius);
    //进行温度转换
    fahrenheit =celsius * 9.0/5.0+32;
    //输出华氏温度，保留一位小数
    printf ("%.1f\n",fahrenheit);
    return 0;
}
