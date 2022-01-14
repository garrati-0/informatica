#if !defined CONCATENA_H
#define CONCATENA_H
#include "list.h"

enum ConcType{
    KCopy,
    KNoCopy
};

extern Item *Concatena(Item *i1,Item *i2, enum ConcType c);
#endif/* CONCATENA.H */