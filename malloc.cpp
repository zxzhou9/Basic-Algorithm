#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int *p; //定义一个指针p
    p=(int *)malloc(sizeof(int)); //指针p获取动态分配的内存空间地址
    cin>>*p; //向指针p所指向的内存空间中存入10
    printf("%d",*p); //输出指针p所指向的内存中的值
    return 0;
}
