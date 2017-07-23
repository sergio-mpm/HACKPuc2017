#include<iostream>
#include<algorithm>
#include "verification.h"

string PaymentMethod (Bool verify, string buyway){
    string pm;
    if(verify=true){
        pm=buyway;
        return pm;
    }
    else{
        printf("Erro ao verificar metodo de pagamento - Por favor, verifique novamente");
        exit(1);
    }
}
