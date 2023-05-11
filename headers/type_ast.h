
#ifndef __TYPE_AST__
#define __TYPE_AST__ 

typedef enum {OPERATION, VALEUR,N_IDF,N_PVIRG,N_PRINTF,N_SCANF,N_EGAL,N_EGALCOND,N_SUP,N_INF,N_SUPEGAL,N_INFEGAL,N_NOTEGAL,N_IF,N_WHILE,N_FOR} TypeAst ;
typedef enum {N_PLUS, N_MUL,N_DIV, N_MOINS} TypeOperateur ;
typedef enum {B_EGALC,B_SUPC,B_INFC,B_SUPEGALC,B_INFEGALC,B_NOTEGALC} TypeBoolean;

typedef struct noeud { 
	TypeAst nature ;
	TypeOperateur operateur ;
	struct noeud *gauche, *droite ,*central;
    int valeur ;
	char idf[128];
} NoeudAst ;

typedef NoeudAst *Ast ;

#endif  
