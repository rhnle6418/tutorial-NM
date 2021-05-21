/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : [YOUR NAME]
Created          : 26-03-2018
Modified         : 18-03-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/

#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H

#include "myMatrix.h"

// Matrix addition
extern	Matrix	addMat(Matrix _A, Matrix _B);

// Apply back-substitution
extern	Matrix	backSub(Matrix _U, Matrix _b);

// HW#03-1
extern	void	LUdecomp(Matrix _A, Matrix _L, Matrix _U, int n);

// HW#03-2
extern	Matrix	solveLU(Matrix _L, Matrix _U, Matrix _b);

// HW#03-3
extern	void	inv(Matrix _A, Matrix _Ainv, int n);

// HW#05
extern	Matrix	linearFit(Matrix _x, Matrix _y);

//extern	Matrix	myPolyFit(Matrix _x, Matrix _y);

// Diff
extern	Matrix	gradient(Matrix _x, Matrix _y);

// newtonrhapson
extern	void	newtonRaphson(float _x0, float _tol);
#endif