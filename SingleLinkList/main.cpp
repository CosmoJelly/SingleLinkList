#include "List.h"

int main()
{
	List* list = new List();
	
	list->addAtLast(20);
	list->addAtFirstLocation(70);

	list->displayList();

	return 0;
}