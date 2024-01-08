#ifndef __FORME2D_H_
#define __FORME2D_H_

#include<string>
#include <iostream>

using namespace std;

class Forme2D{
	private:
		string couleur;
		int surface;
		int perimetre;
	public:
		Forme2D();
		void setCouleur(string Couleur);
		string getCouleur();
		void setSurface(int Surface);
		int getSurface();
		void setPerimetre(int Perimetre);
		int getPerimetre();
		void afficheSurface();
		void affichePerimetre();
		~Forme2D();
};


#endif
