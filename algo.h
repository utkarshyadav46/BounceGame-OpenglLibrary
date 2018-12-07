#include<iostream>
#include<GL/glut.h>
#include<bits/stdc++.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265

void linedraw(int xi ,int yi ,int xf,int yf)   //linedraw using  dda algorithm
{
float dy,dx,step,x,y,k,Xin,Yin;    
dx=xf-xi;
dy=yf-yi;

if(abs(dx)> abs(dy))
{
step = abs(dx);
}
else
step = abs(dy);
 
Xin = dx/step;
Yin = dy/step;
 
x= xi;
y=yi;
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
 
for (k=1 ;k<=step;k++)
{
x= x + Xin;
y= y + Yin;

glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}
}
//circle Drawing Algorithm
void circle(float xc,float yc,float l)
{
float x=0;
float y=l;
float h=1-l;
glBegin(GL_POINTS);                     //circle algorithm 
glVertex2i(xc+x,yc+y);
glVertex2i(xc+y,yc+x);
glVertex2i(xc-x,yc+y);
glVertex2i(xc+y,yc-x);
glVertex2i(xc-x,yc-y);
glEnd();
while(y>x)
{
	if(h<0)
		h=h+2*x+3;
	else
	{
		h=h+2*x-2*y+5;
		y=y-1;
	}
x=x+1;
glBegin(GL_POINTS);
glVertex2i(xc+x,yc+y);
glVertex2i(xc+x,yc-y);
glVertex2i(xc+y,yc+x);
glVertex2i(xc+y,yc-x);
glVertex2i(xc-x,yc+y);
glVertex2i(xc-x,yc-y);
glVertex2i(xc-y,yc-x);
glVertex2i(xc-y,yc+x);
glEnd();
}
}



//circle Drawing Algorithm
void dig(float xc,float yc,float l)
{
float x=0;
float y=l;
float h=1-l;
while(y>x)
{
	if(h<0)
		h=h+2*x+3;
	else
	{
		h=h+2*x-2*y+5;
		y=y-1;
	}
x=x+1;
glBegin(GL_POINTS);
glVertex2i(xc+x,yc-y);
glVertex2i(xc+y,yc-x);
glVertex2i(xc-x,yc-y);
glVertex2i(xc-y,yc-x);
glEnd();
}

}
