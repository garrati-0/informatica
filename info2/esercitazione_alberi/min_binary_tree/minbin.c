#include "tree.h"

size_t trovamin(const ElemType *v, size_t v_size)
{
    ElemType min = v[0];
    size_t size_min = 0;
    for (size_t i = 0; i < v_size; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
            size_min = i;
        }
    }

    return size_min;
}

Node* CreateMinBinTreeRec(const ElemType *v, size_t v_size,Node* tree)
{
    if (v_size == 0)
    return NULL;

   size_t min=trovamin(v,v_size);
   ElemType *vs=malloc(min*sizeof(ElemType));
   ElemType *vd=malloc((v_size-(min+1))*sizeof(ElemType));
   for(size_t i=0;i<v_size;i++)
   {
    if(i<min)
    {
        vs[i]=v[i];
    }else if(i>min){
        vd[i-(min+1)]=v[i];
    }
   }

   tree=TreeCreateRoot(&v[min],NULL,NULL);
   tree->left=CreateMinBinTreeRec(vs,min,tree->left);
   tree->right=CreateMinBinTreeRec(vd,v_size-(min+1),tree->right);
   return tree;
}

Node *CreateMinBinTree(const ElemType *v, size_t v_size)
{
    Node *tree=NULL;
   tree= CreateMinBinTreeRec(v,v_size,tree);
    return tree;
}
/*
int main(void)
{
    ElemType v[] = {3,2,1,6,8,5};
    size_t v_size = sizeof(v)/sizeof(v[0]);
    CreateMinBinTree(v, v_size);
    return 0;
}*/