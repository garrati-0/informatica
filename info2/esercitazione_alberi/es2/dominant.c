#include "tree.h"

int CountDominant(const Node *t)
{
    if (t == NULL)
        return 0;
    if (t->left == NULL || t->right == NULL)
        return 0;
    else if (t->left->value + t->right->value < t->value)
    {
        return 1 + CountDominant(t->left) + CountDominant(t->right);
    }
   return CountDominant(t->left)+ CountDominant(t->right);
   
  
}/*
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
    ElemType e[] = {12,4,21,0,2,9,1,77,8};
    Node *t = TreeCreateFromVectorRec(e, sizeof(e) / sizeof(e[0]), 0);
    int c = CountDominant(t);
    return 0;
}*/