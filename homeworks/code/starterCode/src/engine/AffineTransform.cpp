#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <cmath>
#include "AffineTransform.h"
#include <iostream>


/**
 * Affine Transforms
 * 
 * */	
AffineTransform::AffineTransform(){
	transform = identity();
}

AffineTransform::~AffineTransform(){
	cleanMatrix(transform);
}

void AffineTransform::cleanMatrix(double** m){
	for(int i=0; i<3; i++)
		delete m[i];
	delete m;
}

/* Returns the identity matrix as an array */ 
double** AffineTransform::identity(){
	double** id = new double*[3];
	for(int i=0; i<3; i++){
		id[i] = new double[3];
		for(int j=0; j<3; j++){
			if(i == j) id[i][j] = 1.0;
			else id[i][j] = 0.0;
		}
	}
	return id;
}

/* Takes a point in the local coordinate system and transforms it to global space given this AffineTransform */ 
SDL_Point AffineTransform::transformPoint(int x, int y){	
	//TODO in future assignment
	SDL_Point temp;
	return temp;
}

/* Add another transform to this one, is basically just matrix multiply */
void AffineTransform::concatenate(AffineTransform &at){
	//TODO in future assignment
}

/* Move points in the x and y direction */
void AffineTransform::translate(int x, int y){
	//TODO in future assignment
}

/* rotate points by r radians */
void AffineTransform::rotate(double r){
	//TODO in future assignment
}

/* scale in the x and y direction accordingly */
void AffineTransform::scale(double x, double y){
	//TODO in future assignment
}

double AffineTransform::getScaleX(){
	//TODO in future assignment
	return 0.0;
}

double AffineTransform::getScaleY(){
	//TODO in future assignment
	return 0.0;
}