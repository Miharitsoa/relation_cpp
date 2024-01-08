#include <iostream>
#include <string>
#include <cstdlib>
#include "Carre.h"
#include "Forme2D.h"

Carre::Carre(){
	cout<<"Construction d'un carre"<<endl;
}
void Carre::setCote(int Cote){
	cote=Cote;
}
int Carre::getCote(){
	return cote;
}
int Carre::calculeSurface(){
	int s=cote*cote;
	return s;
}
int Carre::calculePerimetre(){
	int p=4*cote;
	return p;
}
Carre::~Carre(){
	cout<<"Destruction du carre"<<endl;
}
