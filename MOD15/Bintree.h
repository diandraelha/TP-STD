#ifndef BINTREE_H_INCLUDED
#define BINTREE_H_INCLUDED
#include <iostream>

using namespace std;

#define left(P) (P) -> left
#define right(P) (P) -> right
#define info(P) (P) -> info

typedef int infotype;
typedef struct Tree *adr;

struct Tree
{
    infotype info;
    adr left, right;
};

adr createNode_1301213072(infotype x);
adr findNode_1301213072(adr root, infotype x);
void insertNode_1301213072(adr &root, adr P);
void printPreOrder_1301213072(adr root);
void printDescendant_1301213072(adr root, infotype x);
int sumNode_1301213072(adr root);
int countLeeaves_1301213072(adr root);
int heightTree_1301213072(adr root);

#endif // BINTREE_H_INCLUDED
