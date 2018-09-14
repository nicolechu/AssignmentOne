/* Nicole Chu
 * 2290152
 * nichu@chapman.edu
 * 350-01
 * Assignment #1
 */

/*
 * This class contains functions to be used to calculate the summary statistics
  (mean, variance, standard deviation)
 */

#include <iostream>
#include <cmath>
#include "Statistics.h"

using namespace std;

//class constructor
Statistics::Statistics()
{
}

/*
 * getMean function
 * Calculates the mean of the lengths of the DNA strings (returns a whole number)
 * Accepts 2 int parameters sum & count that represent the sum of the lengths (calculated
   in the main() function) and the number of DNA strings in the file
 * To get mean, divide sum of string lengths by number of strings
 */
int Statistics::getMean(int sum, int count)
{
  avg = sum/count;
  return avg;
}

/*
 * getVariance function
 * Calculates the variance of the lengths of the DNA strings (returns a decimal)
 * Accepts 6 int parameters sum & count that represent lengths of each string
   and the number of DNA strings in the file
 * Creates & initializes 5 variables to 0
 * In a while loop and a switch statement, these 5 variables will be initialized
   to values equivalent to the square of the difference of individual string
   lengths and the mean (using the private variable avg initialized in mean function)
 * To get variance, sum the values of the 5 variables and
   divide by the number of strings
 * http://www.statisticslectures.com/topics/variancepopulation/
 */
double Statistics::getVariance(int s1, int s2, int s3, int s4, int s5, int count, int mean)
{
  int x1 = 0;
  int x2 = 0;
  int x3 = 0;
  int x4 = 0;
  int x5 = 0;
  int temp = 0;
  while(temp < count)
  {
    temp += 1;
    switch(temp)
    {
      case 1:
        x1 = pow(s1 - mean, 2);
        break;
      case 2:
        x2 = pow(s2 - mean, 2);
        break;
      case 3:
        x3 = pow(s3 - mean, 2);
        break;
      case 4:
        x4 = pow(s4 - mean, 2);
        break;
      case 5:
        x5 = pow(s5 - mean, 2);
        break;
      //default:
    }
  }

  int x = x1 + x2 + x3 + x4 + x5;
  var = (double)x/count;
  return var;
}

/*
 * getStdDev function
 * Calculates the standard deviation of the lengths of the DNA strings (returns a decimal)
 * To get standard deviation, take the square root of variance
   (using private variable var initialized in variance function)
 */
double Statistics::getStdDev(double variance)
{
  sd = sqrt(variance);
  return sd;
}
