#include<iostream>
#include<algorithm>

Bool NetworkConnection(Bool status_network){
    if(status_network=true){
        network.status=true;
        printf("Conectado a rede com sucesso\n");
        exit(1);
    }
    else{
        printf("Falha na conexao\n");
        exit(1);
    }
}