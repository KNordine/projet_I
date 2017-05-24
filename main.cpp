#include <iostream>
#include <string>
#include <libsx.h>
#include "data.hpp"
#include "callbacks.hpp"


using namespace std;


void init_display(init argc, char **argv, void *d)

{



Widget EntryField = MakeStringEntry(NULL,100,NULL,x);
SetEntryFiled(y,EntryField);


Widget one = MakeButton("1", addNumber1, x);
Widget two = MakeButton("2", addNumber2, x);
Widget three = MakeButton("3", addNumber3, x);
Widget four = MakeButton("4", addNumber4, x);
Widget five= MakeButton("5", addNumber5, x);
Widget six= MakeButton("6", addNumber6, x);
Widget seven = MakeButton("7", addNumber7, x);
Widget eight = MakeButton("8", addNumber8, x);
Widget nine = MakeButton("9", addNumber9, x);
Widget zero = MakeButton("0", addNumber0, x);
Widget plus = MakeButton("1", addNumber1, x);

Widget somme = MakeButton("+", somme, x);
Widget moins = MakeButton("+", somme, x);
Widget mult = MakeButton("*", multiplier, x);

Widget ent = MakeButton("Enter", entree, x);
Widget BQuit = MakeButton("Quit", quit, x);
Widget clear = MakeButton("Clear", clearer, x);
display = MakeLabel("Here the operand");



	SetWidgetPos(one,100,display,PLACE_UNDER, display);
	SetWidgetPos(two, PLACE_RIGHT, un, PLACE_UNDER, display);
	SetWidgetPos(three, PLACE_RIGHT, deux, PLACE_UNDER, display);
	SetWidgetPos(somme, PLACE_RIGHT, trois, PLACE_UNDER, display);
	SetWidgetPos(four, PLACE_UNDER, un, NO_CARE, NULL);
	SetWidgetPos(five, PLACE_RIGHT, quatre, PLACE_UNDER, deux);
	SetWidgetPos(six, PLACE_RIGHT, cinq, PLACE_UNDER, trois);
	SetWidgetPos(moins, PLACE_RIGHT, six, PLACE_UNDER, plus);
	SetWidgetPos(seven, PLACE_UNDER, quatre, NO_CARE, NULL);
	SetWidgetPos(eight, PLACE_RIGHT, sept, PLACE_UNDER, cinq);
	SetWidgetPos(nine, PLACE_RIGHT, huit, PLACE_UNDER, six);
	SetWidgetPos(mult, PLACE_RIGHT, neuf, PLACE_UNDER, moins);
	SetWidgetPos(zero, PLACE_UNDER, huit, NO_CARE, NULL);
	SetWidgetPos(divise, PLACE_RIGHT, zero, PLACE_UNDER, mult);
	SetWidgetPos(ent, PLACE_UNDER, zero, NO_CARE, NULL);
	SetWidgetPos(clear, PLACE_RIGHT, ent, PLACE_UNDER, zero);
	SetWidgetPos(BQuit, PLACE_RIGHT, clear, PLACE_UNDER, divise);
	
	GetStandardColors();
	ShowDisplay();
}










GetStandarColors();

ShowDisplay();





int main (int arc, char **argv)
{
	
 if (OpenDisplay(argc, argv) == 0) 
	{
	fprintf(stderr, "Can't open display\n");

	return EXIT_FAILURE;
	}

	
	init_display(argc, argc, NULL);
	MainLoop();
	return EXIT_FAILURE;
	
}
