#include <stdio.h>
#include <stdlib.h>

void add(int *codes, int *stock, int num_prods){
    int temp = 100;
    for (int i = 0; i < num_prods; i++)
    {
        codes[i] = temp;
        printf("Produto: %d tem quantos itens no estoque: ", codes[i]);
        scanf("%d", &stock[i]);
        temp++;
    }
}

int *get_zero(int *codes, int *stock, int *num_zero, int num_prods){
    int *zero_stock = NULL;
    for (int i = 0; i < num_prods; i++)
        if (stock[i] == 0)
        {
            (*num_zero)++;
            zero_stock = (int*)realloc(zero_stock, (*num_zero) * sizeof(int));
            zero_stock[(*num_zero)-1] = codes[i];
        }
    return zero_stock;
}

int main(){
    int num_prods, num_zero = 0;
    printf("Quantos produtos deseja adicionar: ");
    scanf("%d", &num_prods);
    int *codes = malloc(num_prods * sizeof(int));
    int *stock = malloc(num_prods * sizeof(int));
    add(codes, stock, num_prods);
    for (int i = 0; i < num_prods; i++)
        printf("Produto %d - Codigo: %d - Estoque: %d\n",i+1, codes[i], stock[i]);
    int *zero_stock = get_zero(codes, stock, &num_zero, num_prods);
    printf("Estoques vazios: \n");
    for (int i = 0; i < num_zero; i++)
        printf("%d\n", zero_stock[i]);
    free(codes);
    free(stock);
    free(zero_stock);
    return 0;
}
