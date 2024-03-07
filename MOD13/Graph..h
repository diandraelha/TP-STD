#ifndef GRAPH__H_INCLUDED
#define GRAPH__H_INCLUDED
#include <iostream>

using namespace std;

#define first(L) L -> first
#define info(P) P -> info
#define child(P) P -> child
#define next(P) P -> next
#define nextEdge(P) P -> nextEdge
#define infoEdge(P) P -> infoEdge

typedef char infotype;
typedef struct Node *adrNode;
typedef struct Edge *adrEdge;

struct Node{
    infotype info;
    adrEdge child;
    adrNode next;
};


struct Edge{
    infotype infoEdge;
    adrEdge nextEdge;
};

adrNode newNode_1301213072(char x);
void addNode_1301213072(adrNode &G, adrNode P);
adrNode findNode_1301213072(adrNode &G, char x);
void addEdge_1301213072(adrNode &G, char x, char y);
bool isConnected_1301213072(adrNode G, char x, char y);
void printGraph_1301213072(adrNode G);

#endif // GRAPH__H_INCLUDED
