#include "TP week 4.h"

int main()
{
    cout << "Create List" << endl;

    List D;
    cout << "first(D) sebelum createList : " << first(D) << endl;

    createList(D);
    cout << "first(D) setelah createList : " << first(D) << endl;
    cout << endl << endl;

// newElement
    cout << "New Element" << endl;

    adr p;
    p = newElement('1');
    cout << "Info(P) : " << info(p) << endl;
    cout << "Next(P) : " << next(p) << endl;
    cout << endl << endl;

//  insertFirst
    cout << "Insert First" << endl;

    cout << "first(D) sebelum insertFirst : " << first(D) << endl;
    insertFirst(D, p);
    cout << "first(D) setelah insertFirst : " << first(D) << endl;

    p = newElement('5');
    insertFirst(D, p);
    cout << "info First(D) : " << info(first(D)) << endl;
    cout << endl << endl;

// show
    cout << "Show" << endl;

    show(D);

    p = newElement('Y');
    insertFirst(D, p);
    show(D);
    cout << endl << endl << endl;

//  deleteLast
    cout << "Delete Last" << endl;

    p = deleteLast(D);
    show(D);
    cout << info(p) << endl << endl;

    p = deleteLast(D);
    show(D);
    cout << info(p) << endl << endl;

    p = deleteLast(D);
    show(D);
    cout << info(p) << endl << endl;

//insertLast
    cout << "Insert Last" << endl;
    p = newElement('I');
    insertLast(D, p);
    show(D);
    cout << info(p);
    return 0;
}
