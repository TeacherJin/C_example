/*
本程序演示逗号运算，格式输入和输出函数
*/
#include "stdio.h"
int main()
{
    int a;
    printf("%d\n",(a=4*5,a*5,a+10));
    /*
    (a=4*5,a*5,a+10)是逗号运算，首先执行
    a=4*5，结果a的值为20，然后计算a*5，最
    后计算a+10，结果为30，因此输出30
    */
    int i=10;
    double d=5.9;
    printf("i=%d,d=%f\n",i,d);
    /*
    这是正常输出，i是整型数据，使用%d输出；
    d是实型数据，使用%f输出
    */
    printf("i=%f,d=%d\n",i,d);
    /*
    这是非正常输出，这时整型数据i将按照实型
    数据的格式进行输出，而实型数据将按照整型
    数据的格式进行输出，由于不同数据类型在内
    存中的存储格式不同，输出结果将不符合真实
    情况
    */
    int x;
    double y;
    scanf("%d%lf",&x,&y);
    /*
    在输入函数中，格式控制部分怎么写，程序运
    行时就该怎么输入数据，但是如果两个格式控
    制字符之间没有任何字符，则启用默认的分隔
    符，就是空格、制表符和回车中的任意一个。
    例如在输入时，填入数字5 6.7，那么6将存入
    x的存储空间，6.7将存入y的存储空间。如果格
    式控制部分是“x=%d,y=%f”,则输入数据时，必须
    写成x=5,y=6.7。地址表列部分必须是地址，不
    能使变量名，可以使用取地址运算符&获取变量
    地址
    */
    printf("x=%d,y=%f\n",x,y);
}