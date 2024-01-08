#ifndef __CARRE_H_
#define __CARRE_H_

#include <iostream>
#include "Forme2D.h"

using namespace std;

class Carre : public Forme2D{
	private:
		int cote;
	public:
		Carre();
		void setCote(int Cote);
		int getCote();
		int calculeSurface();
		int calculePerimetre();
		~Carre();
};

#endif



