#include "list.h"
#include "load.h"

Item *REVERSE(Item *list)
{
    Item *next = NULL;
    Item *prev = NULL;

    while (list != NULL)
    {
        next = list->next;
        list->next = prev;
        prev = list;
        list = next;

        ListWriteStdout(list);
    }
    list=prev;
    ListWriteStdout(list);
    return list;
}

int main(void)
{
    Item *list = NULL;
    list = ListLoad("res/data_00.txt");
    REVERSE(list);
    return 0;
}