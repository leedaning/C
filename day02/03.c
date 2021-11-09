#include <stdlib.h>

int main(void){

}

BinTree CreateBinTree(BinTree bt){
    // Q[1...n]是一个BinTNode类型的指针数组。
    // front和rear分别是对头和队尾指针

    BinTNode * Q[100];  // 定义队列
    BinTNode * s;
    int front, rear;
    char ch;
    ch = getchar(); bt = NULL;  // 置空二叉树
    front = 1; rear = 0;    // 初始化队列
    while (ch!='#')     // 假设结点值为单字符，#为终结字符，@为虚结点字符
    {
        s = NULL;       // 先假设读入的为虚结点“φ”
        if (ch!='@')
        {
            s = (BinTNode *)malloc(sizeof(BinTNode));   //申请新结点
            s->data = ch; s->lchild=s->rchild=NULL;     // 新结点赋值
        }
        rear++;     // 队尾指针自增
        Q[rear] = s;    // 将新结点地址或虚结点地址（NULL）入队

        if(rear==1)     // 若rear为1，则说明是根结点，用bt指向它
            bt=s;
        else
            if (s!=NULL && Q[front]!=NULL)      // 当前结点及其双亲结点都不是虚结点
            {
                if (rear % 2==0)        // rear为偶数，新结点应该作为左孩子
                {
                    Q[front]->lchild=s;
                }else{
                    Q[front]->rchild=s;     // rear为奇数，新结点应该作为右孩子
                }

                if (rear%2!=0)      // 说明两个孩子已经处理完，front指向下一个
                {
                    front++;
                }                
            }
        ch=getchar();       // 读下一个结点值    
    }//endwhile

    return bt;

}
if (rear%2!=0 || Q[front]==NULL) front++;
