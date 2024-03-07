
#include "member.h"
#include <iostream>


void inputData_1301213072(member *MB) {
    int k;

    std ::cout << "Tuliskan IDNumber : " ;
    std ::cin >> MB->IDNumber;

    k = 0;
    while(k < Max){
        std ::cout << "Poin Bulan ke- "<<k+1<<": ";
        std ::cin >> MB -> Poin[k];

        k++;
    }

}
float ratarata_1301213072(member MB) {
    float rerata = 0;
    int i = 0;
    while(i < Max){
        rerata = rerata + MB.Poin[i];
        i++;
    }
    return rerata / Max;
}

void showData_1301213072(member MB){
    std :: cout << "Data Member : " << std :: endl;
    std ::cout << "IDNumber : " << MB.IDNumber << std :: endl;
    std :: cout << "poin : ";
    for(int i = 0; i < Max; i++){
        std :: cout << MB.Poin[i] <<" ";
    }
    std :: cout << std :: endl;
}
