#include <string>
#include <iostream>
#include <libsx.h>
#include "data.hpp"

using namespace std;

/* Rôle : initialise à 0 la valeur courante.
*
??? Initialisation du taux de change
*/
void initvalue1(value1* x) {
x->valeur = 0;
}
void setEntryField(value1* x, Widget w) {
x->EntryField = w;
}

/*
* Rôle : affecte la valeur réelle n à la valeur courante
*/
void setvalue(value1* x, double n) {
x->value=n;
}

/*
* Rôle : affecte la valeur entiére n à la valeur courante
*/
void setNumber(value1* x, int n) {
x->number=n;
}

/*
* Rôle : renvoie la valeur courante
*/
double getvalue(value1 *x) {
return x->value1;
}

/*
* Rôle : renvoie la valeur courante
*/
int getNumber(value1 *x) {
return x->Number;
}
