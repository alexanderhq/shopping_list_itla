/*
 * Menu.h
 *  Alexander Hernandez Quezada
 *  Matricula: 20112500
 */
#include <accctrl.h>


class Menu
{
	private:
		void clearScreen();
		void listItems();
		void addItems();
		void removeItems();
		bool validate(int option);
		void routeAction(int option);
		void pause();
	public:
		Menu();
		void show();
};
