#include "point.h“
#include<iostream>
using namespace std;

Point::Point(int x, int y){
	this->x=x;
	this->y=y;
}

void Point::Deplace(int a , int b){
	x+=a;
	y+=b;
	
}

void Point:: Affiche(){
	cout<< " les coordonnées cartésiennes du point: ("<< x <<";"<<y<<")"<<endl;
}
