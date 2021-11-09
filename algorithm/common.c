#include <stdio.h>

typeof struct node{
    KeyType key;    // 关键字
    DataType other; // 其他数据域
    Struct node * lchild, *rchild;
}BSTNode;   // 结点类型

typeof BSTNode BSTree;  // 二叉排序树类型

BSTree InsertBST(BSTree T, BSTNode * S){
    // 在T表示的二叉排序树上插入新结点*S
    BSTNode * f, * p = T;
    while(p)    //找位置插入
    {
        f=p;    // 令f指向p的双亲
        if(S->key < p->key)
            p = p->lchild;
        else p = p->rchild;
    }
    if (T==NULL)   // T为空树，新结点作为根结点
    {
        T=S;
    }else{
        if (S->key < f->key)
        {
            f->lchild=S;        //作为双亲的左孩子插入
        }else{
            f->rchild=S;        // 作为双亲的右孩子插入
        }        
    }
    
    return T;    
}

BSTree CreateBST(void){
    // 从空树开始，建立一颗二叉排序树
    BSTree T = NULL;    // 初始化T为空树
    KeyType key;
    BSTNode * S;
    scanf("%d", &key);  // 输入第一个关键字
    while(key){
        // 假设key=0是输入结束
        S=(BSTNode *)malloc(sizeof(BSTNode));
        S->key=key;
        S->lchild=S->rchild=NULL;
        InsertBST(T, S);    // 将新结点*S插入二叉排序树T
        scanf("%d", &key);  // 输入下一个关键字
    }
    return T;   // 返回建立的二叉排序树
}