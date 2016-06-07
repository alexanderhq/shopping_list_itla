/*
 * Element.h
 * Alexander Hernandez Quezada
 * Matricula: 20112500
 *
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	public:
		Element(std::string name);

	private:
		Element* _next;
		std::string _name;
		//This means that List can access to all private members of this class
		friend class List;
};

#endif /* ELEMENT_H_ */
