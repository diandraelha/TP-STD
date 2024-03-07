#include "Graph..h"

int main()
{
    adrNode G;

    adrNode P = newNode_1301213072(1);
    addNode_1301213072(G,P);
    P = newNode_1301213072(2);
    addNode_1301213072(G, P);
    P = newNode_1301213072(3);
    addNode_1301213072(G, P);
    P = newNode_1301213072(4);
    addNode_1301213072(G, P);
    P = newNode_1301213072(5);
    addNode_1301213072(G, P);
    P = newNode_1301213072(6);
    addNode_1301213072(G, P);
    P = newNode_1301213072(7);
    addNode_1301213072(G, P);
    P = newNode_1301213072(8);
    addNode_1301213072(G, P);
    P = newNode_1301213072(9);
    addNode_1301213072(G, P);
    P = newNode_1301213072(10);
    addNode_1301213072(G, P);
    P = newNode_1301213072(11);
    addNode_1301213072(G, P);
    P = newNode_1301213072(12);
    addNode_1301213072(G, P);

    addEdge_1301213072(G, 1, 2);
    addEdge_1301213072(G, 1, 3);
    addEdge_1301213072(G, 1, 4);
    addEdge_1301213072(G, 1, 9);

    addEdge_1301213072(G, 2, 3);

    addEdge_1301213072(G, 3, 5);
    addEdge_1301213072(G, 3, 9);

    addEdge_1301213072(G, 4, 6);
    addEdge_1301213072(G, 4, 7);

    addEdge_1301213072(G, 5, 6);

    addEdge_1301213072(G, 6, 9);

    addEdge_1301213072(G, 7, 8);

    addEdge_1301213072(G, 8, 11);
    addEdge_1301213072(G, 8, 12);

    addEdge_1301213072(G, 9, 10);
    addEdge_1301213072(G, 9, 11);

    printGraph_1301213072(G);

    cout << "Apakah Node A dan Edge C terhubung : ";

    /*if (isConnected_1301213072(G, 'A', 'C')){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }

    cout << "Apakah Node B dan Edge C terhubung : ";

    if (isConnected_1301213072(G, 'B', 'C')){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }*/

    return 0;
}
