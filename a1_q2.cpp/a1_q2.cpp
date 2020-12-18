//
//  main.cpp
//  a1_q2.cpp
//
//  Created by Laura Persichini on 2020-09-24.
//  Copyright © 2020 Laura Persichini. All rights reserved.
//
/*
 Student Name: Laura Persichini
 ID#: 20894127
  
  SYDE 121 Assignment #1
  File Name: a1_q2.cpp
  
  I hereby declare that this code, submitted for credit for the course
  SYDE121, is a product of my own efforts. This coded solution has
  not been plagiarized from other sources and has not been knowingly
  plagiarized by others.

  Project: Sum computation (question #2)
  Purpose: Find the sum of all integers between two given integers.
  Due date: September 25th, 2020
  */
/*
 I used edge cases to test the limitations of my program. For example, I tested what the program
 outputted when I entered the same value to see if the first number had to be strictly less than
 the second. The program did not output the correct result, so I knew the first number did have
 to be strictly less than the second. I also tested if I could input decimals. This did not work
 as I defined the first and second numbers as integers. Therefore, the program works for any two
 integers such that the second integer is strictly greater than the first and both numbers are
 between -2147483648 to 214748364.
 
Outputs for step (1):
 1-500 (inclusive)-> 125250
 5-2141200 (inclusive)->2041200
 42-32000 (inclusive)->512015139
 */
#include <iostream>

using namespace std;

// declaring variables
int first_num;
int second_num;

// get input from user
void get_inputs() {
    cout << "provide me the lower number please: ";
    cin  >> first_num;
    cout << "provide me the higher number please: ";
    cin  >> second_num;
}

// sum of all the integers between two integers
// restriction a must be strictly less than b
int sum_between(int a, int b) {
    double n = (b - a) + 1; // used double since n will be divided by 2 and we want decimals
    int d = 1;
    int sum = (n / 2) * (2 * a + (n - 1) * d); // formula from assignment sheet
    return sum;
}

// main function
int main(int argc, const char * argv[]) {
    get_inputs();
    int sum = sum_between(first_num, second_num);
    cout << sum;
    return 0;
}
