/* Nicole Chu
* 2290152
* nichu@chapman.edu
* 350-01
* Assignment #1
*/

/*
* This file will ask the user to input the name of a file that contains
  up to 5 DNA strings and assign those strings to string variables.
  It will also calculate the sum of the lengths of those strings and call
  the Statistics class to calculate other summary statistics. Those statistics
  will be output onto a new file called nicolechu.out.
*/

#include <iostream>
// To get input from & output to files
#include <fstream>
// To get access to supplementary classes I created
#include "Statistics.cpp"
#include "RelativeProbabilities.cpp"
#include "StringGenerator.cpp"
/*
 * For rand() and time() functions
 * https://www.bogotobogo.com/cplusplus/RandomNumbers.php
 */
#include <cstdlib>
#include <ctime>
/*
 * For transform() function
 * https://www.bogotobogo.com/cplusplus/RandomNumbers.php
 */
#include <bits/stdc++.h>

using namespace std;

/*
* https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/
* Allows for name of text file to be accepted as command line argument
*/

int main(int argc, char* argv[])
{
  /*
   * Creates an ifstream object inputFile and string fileName to access user's text file
     which contains DNA strings
   */
  ifstream inputFile;
  string fileName;

  /*
   * Creates an ofstream object to create a file titled nicolechu.out
   * Writes introductory information to file
   */
  ofstream outputFile("nicolechu.out");
  if(outputFile.is_open())
  {
    outputFile << "Nicole Chu\n2290152\nnichu@chapman.edu\n" << endl;
  }

  /*
   * Takes file as command line argument
   * If no file name is entered, user is prompted to enter name of file
   * If a file name is passed, the argument is assigned to string fileName
   * If more than one file name is entered, session is terminated
   */
  switch(argc)
  {
    case 1:
      cout << "Please enter the name of the text file: ";
      cin >> fileName;
      break;
    case 2:
      fileName = argv[1];
      break;
    default:
      cout << "ERROR: Please enter one file name." << endl;
      exit;
  }

  /*
   * Creates a string cont which is used to test if the user wants to process another text file
   * A while loop is used to recalculate statistics and produce 1000 more DNA strings if user
     chooses to process another file
   */
  string cont = "Y";

  while(cont == "Y" || cont == "y")
  {
    inputFile.open(fileName);
    if(!inputFile.is_open())
    {
      cout << "ERROR: File does not exist." << endl;
      exit;
    }
    else
    {
      /*
       * Create new string line to be used with the getline() function
       * Create new string variables to be assigned with DNA strings from .txt file
       * Create int count to count number of strings in the .txt file
       */
       string line;
       string d1,d2,d3,d4,d5;
       int count = 0;

       /*
        * Use the getline() function in a while loop and a switch statement to
          assign 5 DNA strings to 5 string variables
        */
    while(getline(inputFile, line) && count < 6)
    {
      /*
       * Loop through each string in the text file and uses the tolower function to
         change each char in the string to lower case letters
       * https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
       */
      for(int i = 0; i < line.length(); i++)
      {
       transform(line.begin(), line.end(), line.begin(), ::tolower);
      }

      /*
       * Tests if a DNA string from the text file contains a letter that is not A, C, T, or G
       * If the string contains an invalid letter, the program ignores it and does not process it
       */
      bool sValid = true;
      for(int i = 0; i < line.length(); i++)
      {
        if(!(line.substr(i,1) == "a" || line.substr(i,1) == "c" || line.substr(i,1) == "t" || line.substr(i,1) == "g"))
          sValid = false;
      }

      if(sValid)
      {
        count += 1;

        /*
         * If the text file contains more than 5 strings, the program outputs a default message
           and processes only the first 5 valid DNA strings
         */
        switch (count)
        {
          case 1:
            d1 = line;
            break;
          case 2:
            d2 = line;
            break;
          case 3:
            d3 = line;
            break;
          case 4:
            d4 = line;
            break;
          case 5:
            d5 = line;
            break;
          default:
            cout << "This program only process 5 valid strings." << endl;
      }
    }
   }

   /*
    * Assigns the lengths of each DNA string to an int variable
    * Declares a sum variable to add up the lengths of the DNA strings
    * Declare a biSum variable to add up the total number of bigrams in the strings
    */
   int s1,s2,s3,s4,s5;
   s1 = d1.length();
   s2 = d2.length();
   s3 = d3.length();
   s4 = d4.length();
   s5 = d5.length();
   int sum = s1 + s2 + s3 + s4 + s5;
   int biSum = (s1/2) + (s2/2) + (s3/2) + (s4/2) + (s5/2);

   /*
    * Creates a Statistics object to call functions from the Statistics class and assign
      values to new variables mean, variance, and stdev
    */
    Statistics testS;

    int mean = testS.getMean(sum, count);
    double variance = testS.getVariance(s1,s2,s3,s4,s5,count,mean);
    double stdev = testS.getStdDev(variance);

    /*
     * Creates a RelativeProbabilities object to call functions from the
       RelativeProbabilities class and assigns values to new corresponding variables
     */
     RelativeProbabilities testR(biSum);

     double rpA = testR.getRelProbA(d1,d2,d3,d4,d5,sum);
     double rpC = testR.getRelProbC(d1,d2,d3,d4,d5,sum);
     double rpT = testR.getRelProbT(d1,d2,d3,d4,d5,sum);
     double rpG = testR.getRelProbG(d1,d2,d3,d4,d5,sum);

     double rpAA = testR.getRelProbBiAA(d1,d2,d3,d4,d5);
     double rpAC = testR.getRelProbBiAC(d1,d2,d3,d4,d5);
     double rpAT = testR.getRelProbBiAT(d1,d2,d3,d4,d5);
     double rpAG = testR.getRelProbBiAG(d1,d2,d3,d4,d5);
     double rpCA = testR.getRelProbBiCA(d1,d2,d3,d4,d5);
     double rpCC = testR.getRelProbBiCC(d1,d2,d3,d4,d5);
     double rpCT = testR.getRelProbBiCT(d1,d2,d3,d4,d5);
     double rpCG = testR.getRelProbBiCG(d1,d2,d3,d4,d5);
     double rpTA = testR.getRelProbBiTA(d1,d2,d3,d4,d5);
     double rpTC = testR.getRelProbBiTC(d1,d2,d3,d4,d5);
     double rpTT = testR.getRelProbBiTT(d1,d2,d3,d4,d5);
     double rpTG = testR.getRelProbBiTG(d1,d2,d3,d4,d5);
     double rpGA = testR.getRelProbBiGA(d1,d2,d3,d4,d5);
     double rpGC = testR.getRelProbBiGC(d1,d2,d3,d4,d5);
     double rpGT = testR.getRelProbBiGT(d1,d2,d3,d4,d5);
     double rpGG = testR.getRelProbBiGG(d1,d2,d3,d4,d5);

     /*
      Creates a StringGenerator object to call functions from the StringGenerator class
      in the for loop below
      */
     StringGenerator testD;

     /*
      * The srand function will seed the rand function used in the StringGenerator class
        to generate random string lengths according to Gaussian distribution when the
        RandomGenerator class is called from the StringLength function (which is called by
        the int strLength below) and the getNucleotide function (also called below)
      */
     srand(time(0));

    /*
     * Writes summary statistics and 1000 randomly generated DNA strings to nicolechu.out
     */
     ofstream outputFile("nicolechu.out");
     if(outputFile.is_open())
     {
       outputFile << "Sum of string lengths: " << sum << endl;
       outputFile << "Mean of string lengths: " << mean << endl;
       outputFile << "Variance of string lengths: " << variance << endl;
       outputFile << "Standard deviation of string lengths: " << stdev << endl;

       outputFile << "\n" << endl;
       outputFile << "Relative probability of 'A': " << rpA << endl;
       outputFile << "Relative probability of 'C': " << rpC << endl;
       outputFile << "Relative probability of 'T': " << rpT << endl;
       outputFile << "Relative probability of 'G': " << rpG << endl;

       outputFile << "\n" << endl;

       outputFile << "Relative probability of 'AA': " << rpAA << endl;
       outputFile << "Relative probability of 'AC': " << rpAC << endl;
       outputFile << "Relative probability of 'AT': " << rpAT << endl;
       outputFile << "Relative probability of 'AG': " << rpAG << endl;
       outputFile << "Relative probability of 'CA': " << rpCA << endl;
       outputFile << "Relative probability of 'CC': " << rpCC << endl;
       outputFile << "Relative probability of 'CT': " << rpCT << endl;
       outputFile << "Relative probability of 'CG': " << rpCG << endl;
       outputFile << "Relative probability of 'TA': " << rpTA << endl;
       outputFile << "Relative probability of 'TC': " << rpTC << endl;
       outputFile << "Relative probability of 'TT': " << rpTT << endl;
       outputFile << "Relative probability of 'TG': " << rpTG << endl;
       outputFile << "Relative probability of 'GA': " << rpGA << endl;
       outputFile << "Relative probability of 'GC': " << rpGC << endl;
       outputFile << "Relative probability of 'GT': " << rpGT << endl;
       outputFile << "Relative probability of 'GG': " << rpGG << endl;

       outputFile << "\n" << endl;

       /*
        * Creates empty string variable str to be initialized with new random nucleotides
        * Outer for loop iterates 1000 times and generates random string lengths each time according
          to Gaussian distribution using the StringLength function from the StringGenerator class
        * Inner for loop iterates through randomly generated string length & calls function getNucleotide
          from StringGenerator class and appends nucleotide letter to string variable str
        * Outputs string number, length, and new DNA string to nicolechu.out file
        */
      string str = "";
      for(int i = 0; i < 1000; i++)
      {
       int strLength = testD.StringLength(stdev, mean);

       for(int x = 0; x < strLength; x++)
       {
         str += testD.getNucleotide(rpA, rpC, rpT, rpG);
       }

       outputFile << "String " << (i + 1) << ", Length " << strLength << ": " << str << endl;

       str = "";
      }
     }
   }

  /*
   * Closes user's text file
   */
  inputFile.close();

  /*
   * Asks user if they'd like to process another file
   * If user answers yes (Y/y), they are prompted to enter the name of the next file
     they want to process
   * This new file name is stored in string fileName
   * If user answers no, the output file (nicolechu.out) is closed and the program terminates
   */
  cout << "Do you want to process another file? (Y/N): ";
  cin >> cont;
  if(cont == "Y" || cont == "y")
  {
    cout << "Please enter the name of the text file: ";
    cin >> fileName;
  }
 }
 outputFile.close();
}
