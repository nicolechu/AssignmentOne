/* Nicole Chu
 * 2290152
 * nichu@chapman.edu
 * 350-01
 * Assignment #1
 */

/*
 * This is the header file for Statistics.cpp
 */

 #ifndef STATISTICS_H
 #define STATISTICS_H

 using namespace std;

 class Statistics
 {
 public:
  Statistics();
  int getMean(int sum, int count);
  double getVariance(int s1, int s2, int s3, int s4, int s5, int count, int mean);
  double getStdDev(double variance);
private:
  int avg;
  double var;
  double sd;
 };

 #endif
