#include <string>
#include <iostream>
#include <sstream>
#include <libsx.h>
#include "data.hpp"
#include <stdlib.h>
#include <stdio.h>
#include "callbacks.hpp"

using namespace std;

// display the value x


static void display(value1* x)
{	
	SetStringEntry(d->EntryField,strcpy(new char[d->value.length()+1],d->value.c_str()));
}

void zero(Widget w, void* data) {
	value1* x = (value1*) data;
	setValeur(x,"0");
	display(x);
}

void one(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"1");
	display(x);
}
void two(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"2");
	display(x);
}
void tree(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"3");
	display(x);
}
void four(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"4");
	display(x);
}
void five(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"5");
	display(x);
}
void six(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"6");
	display(x);
}
void seven(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"7");
	display(x);
}
void eight(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"8");
	display(x);
}
void nine(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x,"9");
	display(x);
}
void Div(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x," /");
	display(x);
	
}
void Mul(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x," *");
	display(x);

void moins(Widget w, void* data) {
	value1* x = (value1*) data;
	setvalue(x," -");
        display(x);
	
}
void Add(Widget w, void* data) {
	value1* x = (ValeurCourante*) data;
	setvalue(x," +");
	display(x);
	
}

void Square(Widget w, void* data){
	value1** x = (value1**) data;
	setvalue(x," ^2");
	display(x);
	
void Entry(Widget w, void* data) {
	value1** x = (value1*) data;
	setvalue(x," ");
	display(x);

}
void Egal(Widget w, void* data) {
	value1* x = (value1*) data;
	setValeur(x," =");
	float eval = evalExpression(d->valeur);
	ostringstream ss;
	ss << eval;
	string s(ss.str());
	initvalue1(x);
	setvalue(x,s+" ");
	display(x);
	
}
