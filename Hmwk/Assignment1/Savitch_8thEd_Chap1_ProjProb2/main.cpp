/* 
 * File:   main.cpp
 * Author: Joana Arellano       
 * Created on January 7, 2015, 7:40 AM
 * Purpose: To spot mistakes in code and correct the problem to run program.
 * Took out Under slashes from original code, as well as modifications as asked.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here
int main()
{
    int numofpods, peasperpod, totalpeas;
    //Output Prompt for input
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    //Input number of pods
    cin >> numofpods;
    //Output Prompt for input
    cout << "Enter the number of peas in a pod:\n";
    //Input peas per pod
    cin >> peasperpod;
    //Calculating total peas
    totalpeas =numofpods*peasperpod;
    //Output results of calculation 
    cout << "If you have ";
    cout << numofpods;
    cout << " and ";
    cout << peasperpod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalpeas;
    cout << " peas in all the pods.\n";
    cout << "Good Bye.\n";
    //Exit stage 
    
    return 0;
}
