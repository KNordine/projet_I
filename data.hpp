/*
*data.hpp
* 
*/

#include <string>
#include <iostream>
#include <libsx.h>

using namespace std;

#define ZoneSaisieSIZE 19

typedef struct{
Widget EntryField;
double value;
int number;
double valeur1;
}
;

extern void initvalue1(value1*);
extern void setvalue(value1* x, double n);
extern double getvalue(value1* x);
extern void setEntryFiled(value1* x, Widget w);
extern void setNumber(value1* x, int n);
extern int getNumber(value1* x);
