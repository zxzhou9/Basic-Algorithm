#include <iostream>
#include <stdio.h>
using namespace std;
struct queue
{
    int data[100];//���е����壬�����洢����
    int head;//����
    int tail;//��β
};
int main()
{
    struct queue q;
    int i;
//��ʼ������
    q.head=1;
    q.tail=1;
    for(i=1; i<=9; i++)
    {
        cin>>q.data[q.tail];
        q.tail++;
    }
    while(q.head<q.tail) //�����в�Ϊ�յ�ʱ��ִ��ѭ��
    {
        cout<<q.data[q.head]<<' ';
        q.head++;
        //�Ƚ��¶��׵�����ӵ���β
        q.data[q.tail]=q.data[q.head];
        q.tail++;
        //�ٽ����׳���
        q.head++;
    }
    getchar();
    return 0;
}
