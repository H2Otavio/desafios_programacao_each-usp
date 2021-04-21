/******************************************************************************

Grupo:
	- Juan Carlos 		NUSP
	- Otávio Hideki Higa 	NUSP 10826201

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int N, I, F;
    int resposta = 0;
    
    cin >> N >> I >> F;
    
    int array[N];
    
    //usando laços para verificar a soma de todos os elementos
    for(int i = 0; i < N; i++){
        //aproveitando o mesmo laço for para receber os valores do input e armazenar em um array
        cin >> array[i];
        for(int j = 0; j < N; j++){
            //não contabilizando pares que somam número iguais
            if(i == j) break;
            //caso a soma do par esteja dentro das exigências, a variável resposta soma 1
            else if ((array[i] + array[j]) >= I && (array[i] + array[j]) <= F){
                resposta++;
            }
        }
    }
    
    //printa a resposta
    cout <<  resposta << endl;

    return 0;
}
