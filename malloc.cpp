#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int *p; //����һ��ָ��p
    p=(int *)malloc(sizeof(int)); //ָ��p��ȡ��̬������ڴ�ռ��ַ
    cin>>*p; //��ָ��p��ָ����ڴ�ռ��д���10
    printf("%d",*p); //���ָ��p��ָ����ڴ��е�ֵ
    return 0;
}
