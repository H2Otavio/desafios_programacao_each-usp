/******************************************************************************

Temos um vetor de N inteiros distintos e dois inteiros I e F. Precisamos computar quantos pares desses inteiros do vetor somam pelo menos I e no máximo F. 
Por exemplo, se o vetor for [45, 12, 11, 7, 83, 29, 5] e I = 19 e F = 52, temos exatamente 8 pares cuja soma está entre 19 e 52: {5, 29}, {5, 45}, {7, 12}, 
{7, 29}, {7, 45}, {11, 12}, {11, 29} e {12, 29}.

Entrada
A primeira linha da entrada contém três inteiros N, I e F, indicando respectivamente o tamanho do vetor e o valor mínimo da soma e o valor máximo da soma.

Saída
Seu programa deve imprimir uma única linha contendo um inteiro indicando quantos pares de inteiros no vetor somam pelo menos I e no máximo F.

Restrições

• 2 ≤ N ≤ 1000

• −2000 ≤ I, F ≤ 2000

• O valor de cada inteiro no vetor está entre −1000 e 1000

• Os inteiros no vetor são distintos
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
