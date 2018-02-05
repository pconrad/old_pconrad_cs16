// p2.c for CS16, Fall 2009, P. Conrad

//(2) Write a C program that takes two command line arguments,
//both integers. We'll call them width and height.
//
//Make the letter L at that width and height, using stars.
//
//If you don't have two command line args,
//print the message: "Usage: p2 width height" and return 1 indicating an error

#include <stdio.h>

int main(int argc, char *argv[])
{
  int i, width, height;

  if (argc!=3)
    {
      printf("Usage: p2 width height\n");
      return 1;
    }

  width=atoi(argv[1]);
  height=atoi(argv[2]);

  // if width is >=1 print back of L, height-1 stars

  if (width>=1 && height >=1 )
    for (i=0; i<height-1; i++)
      printf("*\n");

  // if height >=1, print width stars for bottom row

  if (height >= 1)
    for (i=0; i < width; i++)
      printf("*");

  // print final return for last row
  printf("\n");

  return 0;
}
