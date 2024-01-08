#include <iostream>
#include <cstdlib>
#include <string>
#include "Forme2D.h"
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(){
	cout<<"Constrution du rectangle"<<endl;
}
void Rectangle::setDimension(int L,int l){
	longueur=L;
	largeur=l;
}
int Rectangle::getLongueur(){
	return longueur;
}
int Rectangle::getLargeur(){
	return largeur;
}
int Rectangle::calculeSurface(){
	int s=getLongueur()*getLargeur();
	return s;
}
int Rectangle::calculePerimetre(){
	int p=(getLongueur()+getLargeur())/2;
	return p;
}
Rectangle::~Rectangle(){
	cout<<"Destruction du rectangle"<<endl;
}
