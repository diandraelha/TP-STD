#include "Bintree.h"

int main()
{
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

    int x[9] = {5, 3, 9, 10, 4, 7, 1, 8, 6};

    for(int i = 0; i < 9; i++)
    {
        cout << x[i] << " ";
    }

    cout << endl;

    adr root = NULL;

    for(int i = 0; i < 9; i++)
    {
        adr P = createNode_1301213072(x[i]);
        insertNode_1301213072(root, P);
    }


    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder_1301213072(root);

    printf("\n");
    printf("\nDescendent of Node 9\t: ");
    printDescendant_1301213072(root, 9);

    printf("\n");
    printf("\nSum of BST Info\t: ");
    cout << sumNode_1301213072(root);

    printf("\nNumber of Leaves\t: ");
    cout << countLeeaves_1301213072(root);

    printf("\nHeight of Tree\t\t: ");
    cout << heightTree_1301213072(root);

    cout << endl << endl << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    return 0;
}
