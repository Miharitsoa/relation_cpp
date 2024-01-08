#include <iostream>
#include <cstdlib>
#include <string>
#include "Forme2D.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Carre.h"

int main(){
	Cercle*forme1=new Cercle();
	forme1->setCouleur("rouge");
	forme1->setRayon(45);
	cout<<"Rayon du cercle: "<<forme1->getRayon()<<endl;
	forme1->setSurface(forme1->calculeSurface());
	forme1->afficheSurface();
	forme1->setPerimetre(forme1->calculePerimetre());
	forme1->affichePerimetre();
	forme1->~Cercle();
	
	cout<<"---------------------------------------------"<<endl;
	
	Rectangle*forme2=new Rectangle();
	forme2->setCouleur("jaune");
	forme2->setDimension(50,20);
	cout<<"Longueur du rectangle: "<<forme2->getLongueur()<<endl;
	cout<<"Largeur du rectangle: "<<forme2->getLargeur()<<endl;
	forme2->setSurface(forme2->calculeSurface());
	forme2->afficheSurface();
	forme2->setPerimetre(forme2->calculePerimetre());
	forme2->affichePerimetre();
	forme2->~Rectangle();
	
	cout<<"---------------------------------------------"<<endl;
	
	Carre*forme3=new Carre();
	forme3->setCouleur("gris");
	forme3->setCote(26);
	cout<<"Cote du carre: "<<forme3->getCote()<<endl;
	forme3->setSurface(forme3->calculeSurface());
	forme3->afficheSurface();
	forme3->setPerimetre(forme3->calculePerimetre());
	forme3->affichePerimetre();
	forme3->~Carre();
	return 0;
}
