#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include <iostream>
#include "Forme2D.h"

using namespace std;

class Rectangle : public Forme2D{
	private:
		int longueur;
		int largeur;
	public:
		Rectangle();
		void setDimension(int L,int l);
		int getLongueur();
		int getLargeur();
		int calculeSurface();
		int calculePerimetre();
		~Rectangle();
};

#endif
