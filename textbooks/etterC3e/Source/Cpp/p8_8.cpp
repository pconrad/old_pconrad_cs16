// p8_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//--------------------------------------------------------------
//  Program chapter8_8
//
//  This program computes and prints the roots of a quadratic
//  equation.  It uses the user-defined complex class.

#include <iostream.h>
//--------------------------------------------------------------
//  Class declaration
//
//  These statements define a class for complex numbers.
//  Assume that this declaration is stored in complex.h.

#include <math.h>

class complex
{
   //  Declare function prototypes for public members.
   public:
      complex();
      complex(double a, double b);
      void print();
      void input();
      double magn(complex);
      double angle(complex);
      complex operator+(complex);
      complex operator-(complex);
      complex operator*(complex);
      complex operator/(complex);

   //  Declare private members.
   public:
      double real, imag;
};
//--------------------------------------------------------------
//---------------------------------------------------------------
//  Class implementation
//
//  These statements define implementation of a complex class.

//  This function is the default constructor to initialize a 
//  complex number that is not given a value.
complex::complex()
{
   real = 0;
   imag = 0;
}

//  This function is the constructor to initialize a complex 
//  number to a specified value.
complex::complex(double a, double b)
{
   real = a;
   imag = b;
}

//  This function prints a complex number.
void complex::print()
{
   if (imag > 0)  
      cout << real << "+" << imag << "i" << endl;
   else
      if (imag == 0)
         cout << real << endl;
      else
         cout << real << imag << "i" << endl;
}

//  This function reads two values for a complex number.
void complex::input()
{
   cin >> real >> imag;
}

//  This function defines the sum of complex numbers.
complex complex::operator+(complex c)
{  
   // Definition of complex addition.
   complex temp;
   temp.real = c.real + real;
   temp.imag = c.imag + imag;
   return temp;
}

//  This function defines the difference of complex numbers.
complex complex::operator-(complex c)
{
   //  Definition of complex subtraction.
   complex temp;
   temp.real = real - c.real;
   temp.imag = imag - c.imag;
   return temp;
}

//  This function defines the product of complex numbers.
complex complex::operator*(complex c)
{
   //  Definition of complex multiplication.
   complex temp;
   temp.real = (real*c.real - imag*c.imag);
   temp.imag = (imag*c.real + real*c.imag);
   return temp;
}

//  This function defines the quotient of complex numbers.
complex complex::operator/(complex c)
{
   //  Definition of complex division.
   complex temp;
   temp.real = (real*c.real + imag*c.imag)/
               (pow(c.real,2) + pow(c.imag,2));
   temp.imag = (imag*c.real - real*c.imag)/
               (pow(c.real,2) + pow(c.imag,2));
   return temp;
}
//--------------------------------------------------------------



int main(void)
{
   //  Declare and initialize variables.
   double a, b, c, term1, disc;
   complex root1, root2;

   //  Read values for a, b, c from the keyboard.
   cout << "Enter real values a, b, c:" << endl;
   cin >> a >> b >> c;

   //  Compute roots of quadratic equation.
   term1 = -b/(2*a);
   disc = b*b - 4*a*c;
   if (disc >= 0) 
   {
      root1.real = term1 + sqrt(disc)/(2*a);
      root2.real = term1 - sqrt(disc)/(2*a);
   }
   else
   {
      root1.real = term1;
      root1.imag = sqrt(-disc)/(2*a);
      root2.real = term1;
      root2.imag = -sqrt(-disc)/(2*a);
   }

   //  Print roots.
   cout <<  "Roots:"  << endl;
   root1.print();
   root2.print();
   
   //  Exit program.
   return 0;
}
//--------------------------------------------------------------
