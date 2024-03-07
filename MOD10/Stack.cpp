#include "Stack.h"

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
