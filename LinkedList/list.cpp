#include "customer.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
infotype x;

address searchCustomer(list l, infotype x)
{
    address s;
    s = ((l).first);
    if (s==NULL)
    {
        s=NULL;
        return s;
    }
    while (s != NULL)
    {
        if (((x.ID_customer) == 0) || (x.ID_customer==(s -> info).ID_customer))
        {
            return s;
            break;
        }
        else
        {
            s=s->next;
        }
        break;
    }
    s=NULL;
    return s;
};

void printInfo (list l)
{
    address p;
    p = ((l).first);
    if (p==NULL)
    {
        cout<<"KOSONG";
        getch();
    }
    else
    {while (p != NULL)
    {
        cout << "ID Customer : " << (p -> info).ID_customer<<endl;
        cout << " Nama : " << (p -> info).nama<<endl;
        cout << " No. HP : " << (p -> info).no_hp<<endl;
        cout << " Alamat : " << (p -> info).alamat<<endl;
        cout << " E-Mail : " << (p -> info).email<<endl;
        cout<<endl;
        p = p -> next;
    }
    getch();
    }
};
