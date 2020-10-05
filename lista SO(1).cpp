#include <stdio.h>
#include <stdlib.h>

typedef struct reg celula;
struct reg {
   int     conteudo; 
   celula *prox;
};

int main(void){
	celula  c;    
	celula *p;
	celula *le; 
	le = malloc (sizeof (celula)); le->prox = NULL;
	void insere (int x, celula *p)  celula *nova; 
	nova = mallocc (sizeof (celula)); nova->conteudo = x; nova->prox = p->prox; p->prox = nova;
 

}
//esse foi o mais longe que cheguei sem entender nada kkkk
