#ifndef __AST_PARCOURS__
#define __AST_PARCOURS__

void AfficherAST(Ast expr) ;
// affiche l'arbre abstrait de l'expression arithmetique expr

int evaluation(Ast expr) ;
// calcule la valeur de l'expression arithmetique expr
// FONCTION A COMPLETER !


//Interprétation du programme complet
// Parcours (récursif) de l’Ast du programme et traitement par cas
void  interpretation_finale(Ast A);
int interpreter(Ast A);

void interpreter_affectation(Ast A);
void interpreter_ecrire(Ast A);
void interpreter_lire(Ast A);
void interpreter_if(Ast A);
int evaluer_condition(Ast A);
 

#endif

