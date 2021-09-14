#include "tree.h"

Node *BstInsert(const ElemType *e, Node *n)
{
    Node *root = n;
    if (n == NULL)
    {
        return TreeCreateRoot(e, NULL, NULL);
    }
    while (1)
    {
        if (n->value >= *e)
        {
            //va inserito a sinistra
            //SE il prossimo nodo è NULL allora creo un nuovo nodo
            if (n->left == NULL)
            {
                n->left = TreeCreateRoot(e, NULL, NULL);
                break;
            }
            else
            {
                n = n->left;
            }
        }
        else
        {
            //va  inserito a destra
            if (n->right == NULL)
            {
                n->right = TreeCreateRoot(e, NULL, NULL);
                break;
            }
            else
            {
                n = n->right;
            }
        }
    }
    return root;
}

Node *BstInsertRec(const ElemType *e, Node *n) {
    if (TreeIsEmpty(n)) {
        return TreeCreateRoot(e, TreeCreateEmpty(), TreeCreateEmpty());
    }

    if (ElemCompare(e, TreeGetRootValue(n)) <= 0){
        // Va a sinistra
        n->left = BstInsertRec(e, TreeLeft(n));
    } else {
        // Va a destra
        n->right = BstInsertRec(e, TreeRight(n));
    }
    return n;
}
/*
int main(void)
{
    ElemType e[] = {4, 2, 7, 5, 8, 3, 5, 7, 3, 21, 9};
    Node *tree = NULL;
    for (int i = 0; i < 11; i++)
        tree = BstInsert(&e[i], tree);

    Node *tree_1 = NULL;
    for (int i = 0; i < 11; i++)
        tree_1 = BstInsertRec(&e[i], tree_1);

    return 0;
}*/