#include <iostream>
#include <cstdlib>
#include <string>
#include "Forme2D.h"
using namespace std;

Forme2D::Forme2D(){
	cout<<"Creation d'une forme 2D"<<endl;
}
void Forme2D::setCouleur(string Couleur){
	couleur=Couleur;
}
string Forme2D::getCouleur(){
	return couleur;
}
void Forme2D::setSurface(int Surface){
	surface=Surface;
}
int Forme2D::getSurface(){
	return surface;
}
void Forme2D::setPerimetre(int Perimetre){
	perimetre=Perimetre;
}
int Forme2D::getPerimetre(){
	return perimetre;
}
void Forme2D::afficheSurface(){
	cout<<"La surface de cette forme "<<getCouleur()<<" est "<<getSurface()<<" cm2"<<endl;
}
void Forme2D::affichePerimetre(){
	cout<<"Le perimetre de cette forme "<<getCouleur()<<" est "<<getPerimetre()<<" cm2"<<endl;
}
Forme2D::~Forme2D(){
	cout<<"Destruction de la forme 2D"<<endl;
}
