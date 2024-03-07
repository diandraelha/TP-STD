#include "s.h"

void createStack_1301213072(stack &S){
    Top(S) = 0;
}

bool isEmpty_1301213072(stack S){
    if (Top(S) == 0){
        return Top(S) == 0;
    }else{
        return false;
    }
}

bool isFull_1301213072(stack S){
    if (Top(S) == 15){
        return Top(S) == 15;
    }else{
        return false;
    }
}

void push_1301213072(stack &S, infotype x){
    if (!isFull_1301213072(S)){
        Top(S)++;
        info(S)[Top(S)] = x;
    }
}

infotype pop_1301213072(stack &S){
    infotype x = S.info[S.Top];
    Top(S)--;
    return x;
}

void printInfo_1301213072(stack S){
    for (int i = 0; i <= S.Top; i++){
        cout << S.info[i] << " ";
    }
}

bool isPalindrom(stack S1, stack S2){
    while (Top(S1) - Top(S2) != 1){
        infotype x = pop_1301213072(S1);
        push_1301213072(S2, x)
    }

    int scnd = Top(S1)-1

    while (scnd != 0 || Top(S2) != 0){
        if (info(scnd)== info Top(S2)){
            return true
        } else {
            return false;
            break;
        }
        scnd--;
        Top(S2)--;
    }
}
