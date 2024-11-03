#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
	
	private:
	    float x;
	    float y;
	
	public :
		Point(float x, float y);
		void Affiche();
		void Deplace(float a, float b);
};
