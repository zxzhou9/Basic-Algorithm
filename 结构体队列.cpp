#include <iostream>
#include <stdio.h>
using namespace std;
struct queue
{
    int data[100];//队列的主体，用来存储内容
    int head;//队首
    int tail;//队尾
};
int main()
{
    struct queue q;
    int i;
//初始化队列
    q.head=1;
    q.tail=1;
    for(i=1; i<=9; i++)
    {
        cin>>q.data[q.tail];
        q.tail++;
    }
    while(q.head<q.tail) //当队列不为空的时候执行循环
    {
        cout<<q.data[q.head]<<' ';
        q.head++;
        //先将新队首的数添加到队尾
        q.data[q.tail]=q.data[q.head];
        q.tail++;
        //再将队首出队
        q.head++;
    }
    getchar();
    return 0;
}
