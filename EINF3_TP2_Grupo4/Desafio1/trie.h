
#include <stdbool.h>
#include <stdbool.h> //para usar o tipo boleano
#include <ctype.h>   //para usar fun��es de manipula��o de caracteres

#define ALFABETO_TAMANHO 52

//Estrutura para um n� da trie R-Way
typedef struct No{
	struct NoTrie* filhos[ALFABETO_TAMANHO];
	bool fimDaPalavra; //indica se este n� marca o final de uma palavra.
}NoTrie;

//Prot�tipos das fun��es
NoTrie* criarNo(); //Fun��o usada para criar novos n�s na trie
void inserir(NoTrie* raiz, char *Palavra ); //Esta fun��o insere a palavra na Trie
bool buscar(NoTrie* raiz, char *palavra); //busca a palavra na Trie, retorna true se a palavra for encontrada e false caso contr�rio.
void imprimirPalavras(NoTrie* no, char prefixo[], int profundidade);
void imprimirEmOrdem(NoTrie* raiz);
bool removerPalavra(NoTrie* no, char *palavra, int profundidade);
bool temFilhos(NoTrie* no);
void remover(NoTrie* raiz, char *palavra);

