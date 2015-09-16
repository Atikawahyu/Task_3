#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct infotype
{
    char no_hp[14], nama [20], alamat[100],email[50];
    int ID_customer;
};

typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct list
{
    address first;
};

address searchCustomer(list l, infotype x);
void printInfo (list l);

#endif // LIST_H_INCLUDED
