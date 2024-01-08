#ifndef __CERCLE_H_
#define __CERCLE_H_
#define PI 3.14


#include <iostream>
#include "Forme2D.h"

using namespace std;

class Cercle : public Forme2D{
	private:
		int rayon;
	public:
		Cercle();
		void setRayon(int R);
		int getRayon();
		int calculeSurface();
		int calculePerimetre();
		~Cercle();
};
#endif
