#include "Bintree.h"

adr createNode_1301213072(infotype x)
{
    adr P = new Tree;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;

    return P;
}
adr findNode_1301213072(adr root, infotype x)
{
    if(root == NULL){
        return NULL;
    }else{
        if(info(root) == x){
            return root;
        }else{
            if (info(root) < x){
                findNode_1301213072(right(root), x);
            }else{
                findNode_1301213072(left(root), x);
            }
        }
    }
}
void insertNode_1301213072(adr &root, adr P)
{
    if(root == NULL){
        root = P;
    }else{
        if(info(P) < info(root)){
            insertNode_1301213072(left(root), P);
        }else if (info(P) > info(root)){
            insertNode_1301213072(right(root), P);
        }else{
            cout << "Data yang diinput sudah ada" << endl;
        }
    }
}
void printPreOrder_1301213072(adr root)
{
    if(root != NULL){
        printPreOrder_1301213072(left(root));
        printPreOrder_1301213072(right(root));
        cout << " || " << info(root) << "  || ";
    }
}
void printDescendant_1301213072(adr root, infotype x)
{
    adr P = findNode_1301213072(root, x);

    if(P == NULL){
        cout << "Data node tidak ada" << endl;
    }else{
        printPreOrder_1301213072(left(P));
        printPreOrder_1301213072(right(P));
    }
}
int sumNode_1301213072(adr root)
{
    if(root == NULL){
        return 0;
    }else{
        return info(root) + sumNode_1301213072(left(root)) + sumNode_1301213072(right(root));
    }
}
int countLeeaves_1301213072(adr root)
{
    if(root == NULL){
        return 0;
    }else if(left(root) == NULL && right(root) == NULL){
        return 1;
    }else{
        return countLeeaves_1301213072(left(root)) + countLeeaves_1301213072(right(root));
    }
}
int heightTree_1301213072(adr root)
{
    if(root == NULL){
        return -1;
    }else{
        return (heightTree_1301213072(left(root)), heightTree_1301213072(right(root))) + 1;
    }
}
