//
// Created by iot on 20/06/25.
//

#ifndef LIBPRG_TRABALHO_H
#define LIBPRG_TRABALHO_H

#endif //LIBPRG_TRABALHO_H

/*--- PILHA ---*/
typedef struct pilha pilha_t;
pilha_t* create_stack();
void push(pilha_t* pilha, int valor);
int pop(pilha_t* pilha);
bool emptys(pilha_t* pilha);
int sizes(pilha_t* pilha);
void detroy_stack(pilha_t* pilha);