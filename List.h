/*
 * List.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef LIST_H_
#define LIST_H_
#include "Element.h"
class List
{
	public:
		List();
		void add(Element* element);
		void remove(int index);
	private:
		Element* _first;
		Element* _last;
};

#endif /* LIST_H_ */
