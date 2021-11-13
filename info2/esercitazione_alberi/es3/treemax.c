#include "tree.h"

const ElemType *BstTreeMax(const Node *n)
{
    if (n == NULL)
        return NULL;

    const ElemType *max = NULL;
    if (n->right == NULL)
    {
        max = &n->value;
        return max;
    }
    return BstTreeMax(n->right);
}

 
void TreeMaxRec(const Node *n, const ElemType **max,ElemType curr,ElemType level)
{
        if (n == NULL)
        return;

      
        if(ElemCompare(*max,&n->value)<0 && level>curr)
        {
            *max=&n->value;
            curr=level;
        }

        TreeMaxRec(n->left,max,curr,level+1);
        TreeMaxRec(n->right,max,curr,level+1);
       
}
const ElemType *TreeMax(const Node *n)
{
    
    if (n == NULL)
        return NULL;

    const ElemType *max = 0;
    ElemType a=0;
    max=&a;
    ElemType level=0;
    ElemType curr=0;
    TreeMaxRec(n,&max,curr,level);
  
    return max;
}


/*
Node *BstInsertRec(const ElemType *e, Node *n)
{
    if (TreeIsEmpty(n))
    {
        return TreeCreateRoot(e, TreeCreateEmpty(), TreeCreateEmpty());
    }

    if (ElemCompare(e, TreeGetRootValue(n)) <= 0)
    {
        // Va a sinistra
        n->left = BstInsertRec(e, TreeLeft(n));
    }
    else
    {
        // Va a destra
        n->right = BstInsertRec(e, TreeRight(n));
    }
    return n;
}

Node *TreeCreateFromVectorRec(const int *v, size_t v_size, int i)
{
    if (i >= (int)v_size)
    {
        return NULL;
    }

    Node *l = TreeCreateFromVectorRec(v, v_size, i * 2 + 1);
    Node *r = TreeCreateFromVectorRec(v, v_size, i * 2 + 2);

    return TreeCreateRoot(&v[i], l, r);
}

int main(void)
{
    ElemType e[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Node *n = NULL;
    for (int i = 0; i < 10; i++)
        n = BstInsertRec(&e[i], n);

    BstTreeMax(n);

    n = TreeCreateFromVectorRec(e, 10, 0);
    TreeMax(n);

    return 0;
}*/