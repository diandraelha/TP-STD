#include "Graph..h"

adrNode newNode_1301213072(char x)
{
    adrNode P = new Node;
    info(P) = x;
    child(P) = NULL;
    next(P) = NULL;

    return P;
}
void addNode_1301213072(adrNode &G, adrNode P)
{
    if(G == NULL)
    {
        G = P;
    }
    else
    {
        adrNode Q = G;
        while (next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
adrNode findNode_1301213072(adrNode &G, char x)
{
    adrNode Q = G;
    if(G != NULL)
    {
        while (Q != NULL)
        {
            if (info(Q) == x)
            {
                return Q;
            }
            Q = next(Q);
        }
    }else
    {
        return NULL;
    }

}
void addEdge_1301213072(adrNode &G, char x, char y)
{
    adrNode Q = findNode_1301213072(G, x);

    adrEdge P = new Edge;
    infoEdge(P) = y;
    nextEdge(P) = NULL;

    if(G != NULL)
    {
        if(Q != NULL)
        {
            if(child(Q) == NULL)
            {
                child(Q) = P;
            }
            else{
                adrEdge E = child(Q);
                while (nextEdge(E) != NULL){
                    E = nextEdge(E);
                }
                nextEdge(E) = P;
            }
        }
        else{
            cout << "Data Parent Tidak Ditemukan" << endl;
        }

    } else{
        cout << "Graph Kosong" << endl;
    }
}
bool isConnected_1301213072(adrNode G, char x, char y)
{
    adrNode Q = findNode_1301213072(G, x);

    if(Q != NULL){
        adrEdge P = child(Q);

        while(P != NULL){
            if(infoEdge(P) == y){
                return true;
            }
            P = nextEdge(P);
        }
    } else{
        return false;
    }

}
void printGraph_1301213072(adrNode G)
{
    cout << "==================================================" << endl;
    adrNode P = next(G);

    while (P != NULL){
        cout << "Node " << info(P) << " :";
        if(child(P) != NULL){
            adrEdge(Q) = child(P);
            while(Q != NULL){
                cout << " - " << infoEdge(Q);
                Q = nextEdge(Q);
            }
        }
        cout << endl;
        P = next(P);
    }
    cout << "==================================================" << endl;
}
