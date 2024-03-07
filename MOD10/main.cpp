#include "Stack.h"

int main()
{
    stack S;
    createStack_1301213072(S);

    push_1301213072(S, 'I');
    push_1301213072(S, 'R');
    push_1301213072(S, 'I');
    push_1301213072(S, 'D');
    push_1301213072(S, ' ');
    push_1301213072(S, 'A');
    push_1301213072(S, 'Y');
    push_1301213072(S, 'A');
    push_1301213072(S, 'C');
    push_1301213072(S, 'R');
    push_1301213072(S, 'E');
    push_1301213072(S, 'P');

    cout << "===== Sebelum Pop =====" << endl;
    printInfo_1301213072(S);

    for (int i = 8; i >= 1; i--){
        pop_1301213072(S);
    }

    cout << endl << "===== Sesudah Pop =====" << endl;
    printInfo_1301213072(S);

    return 0;
}
