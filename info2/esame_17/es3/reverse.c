#include "list.h"

Item *Reverse(Item *i)
{
    Item *next=NULL;
    Item *prev=NULL;
   
    while (!ListIsEmpty(i))
    {
      next=i->next;
      i->next=prev;
      prev=i;
      i=next;
    }
    
    
    return prev;
}


/*
int main(void)
{ 
    int vect[]={1,2,3,4};
    Item * List= ListCreateEmpty();
    for(int i=0;i<4;i++)
    {
        List=ListInsertBack(List,&vect[i]);
    }
    List= Reverse(List);
    ListWriteStdout(List);
    return 0;
}*/