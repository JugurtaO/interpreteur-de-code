
#ifndef __AST_CONSTRUCTION__
#define __AST_CONSTRUCTION__


#include "type_ast.h"

Ast creer_operation(TypeOperateur opr , Ast opde_gauche , Ast opde_droit) ;
// renvoie un arbre abstrait de nature OPERATEUR,  d'operateur opr 
// et ayant opde_gauche et opde_droit pour fils gauche et droit

Ast creer_valeur(int val) ; 
// renvoie un arbre abstrait "feuille", de nature Valeur  
// et de valeur val

Ast creer_idf(char * idf) ;
// renvoie un arbre abstrait "feuille", de nature IDF 
// et de valeur idf

Ast creer_aff(Ast Ag,Ast Ad);
Ast creer_idf(char * idf);
Ast creer_lire(Ast Ag);
Ast creer_ecrire(Ast Ag);
Ast creer_seqinst(Ast A1, Ast A2);
Ast creer_if(Ast Ag,Ast Ac, Ast Ad);
Ast creer_sup(Ast Ag, Ast Ad);
Ast creer_inf(Ast Ag, Ast Ad);
Ast creer_egal(Ast Ag, Ast Ad);
Ast creer_infegal(Ast A1,Ast A2);
Ast creer_supegal(Ast A1,Ast A2);
Ast creer_notegal(Ast A1,Ast A2);
Ast creer_while(Ast Ag, Ast Ad);
Ast creer_for(Ast Ag,Ast  Ad);


void free_AST(Ast A);
#endif
