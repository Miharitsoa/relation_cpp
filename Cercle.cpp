#include <iostream>
#include <string>
#include <cstdlib>
#include "Cercle.h"
#include "Forme2D.h"
 
Cercle::Cercle(){
	cout<<"Construction d'un cercle"<<endl;
}
void Cercle::setRayon(int R){
	rayon=R;
}
int Cercle::getRayon(){
	return rayon;
}
int Cercle::calculeSurface(){
	int s=PI*getRayon()*getRayon();
	return s;
}
int Cercle::calculePerimetre(){
	int p=2*PI*getRayon();
	return p;
}
Cercle::~Cercle(){
	cout<<"Destruction du cercle"<<endl;
}
