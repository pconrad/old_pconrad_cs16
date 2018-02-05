// getEarthQuakeData.c    P. Conrad for CS16, Fall 2009
// Get Earthquake data, parse it, and display it

// REQUIRES wget---this should work on CSIL, but might not be portable
//   to other systems without modification
// USES "system" function to get the earthquake data via "wget" program

#include <stdlib.h>
#include <stdio.h>

#define EARTHQUAKE_DATA_URL "http://earthquake.usgs.gov/earthquakes/catalogs/"

// #define EARTHQUAKE_DATA_FILE "eqs1hour-M1.txt"

// #define EARTHQUAKE_DATA_FILE "eqs1day-M1.txt"
#define EARTHQUAKE_DATA_FILE "eqs7day-M1.txt"


#define WGET_PROGRAM "/usr/bin/wget"

void retrieveEarthquakeDataFile(); 
void processEarthquakeDataFile();  

int main()
{
  retrieveEarthquakeDataFile(); 
  processEarthquakeDataFile();  

  return 0; // success!
}


void retrieveEarthquakeDataFile() 
{
  int result; 
  printf("Retrieving earthquake data... please wait...");
  
  result = system(WGET_PROGRAM " " EARTHQUAKE_DATA_URL EARTHQUAKE_DATA_FILE);
  
  if (result!=0)
    {
      perror("Error in calling " WGET_PROGRAM " on " 
	     EARTHQUAKE_DATA_URL EARTHQUAKE_DATA_FILE);
      exit(1);
    }
}

void processEarthquakeDataFile()
{
  FILE *infile;
  const int MAXLINE = 1024;

  char line[MAXLINE];

  infile = fopen(EARTHQUAKE_DATA_FILE,"r");

  // try to read a line from the file
  fgets(line,1024,infile);
  while (!feof(infile) && !ferror(infile)) // stop on EOF or error
    {
      // process the line we read

      printf("Got this data: %s",line); // the \n is already in the data

      // try to read another line
      fgets(line,1024,infile);      
    }

  fclose(infile); // close the file

}

