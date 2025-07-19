// Q_2_27_28_29_30_32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Deitel "How to C++ Program" 9th Edition 

#include <iostream>

using namespace std; 

int main()
{
    //This program writes down the integer equivalent of a character typed. 
    //Q2.27

    cout << "Beginning of Question 2.27 " << endl;

    char character;

    cout << "Please enter a character: " << endl;
    cin >> character;

    cout <<"Here is your result: " << static_cast <int> (character) << endl;

    cout << "End of Question 2.27"; 
    cout << endl;
    cout << endl;

    //This program takes five-digit integer input and seperates the integer into its digits.
    //Q2.28

    cout << "Beginning of Question 2.28 " << endl;

    int x, d1, d2, d3, d4, d5;
    x = 0; d1 = 0; d2 = 0; d3 = 0; d4 = 0; d5 = 0;

    cout << "Please enter a five-digit integer: " << endl;
    cin >> x; 


    if (10000 <= x && x<= 99999) {

        d1 = (x / 10000) % 10;
        d2 = (x / 1000) % 10;
        d3 = (x / 100) % 10;
        d4 = (x / 10) % 10;
        d5 = x % 10;

        cout << d1 << "\t " << d2 << "\t" << d3 << "\t" << d4 << "\t" << d5 << endl;

    }else cout << "You have entered wrong input" << endl;
     
    cout << "End of Question 2.28"; 

    cout << endl;
    cout << endl;

    //This program writes integers and their squares and cubes from 0-10. 
    //Q2.29

    cout << "Beginning of Question 2.29" << endl;



    cout << "integer  square  cube" << endl;
    cout << "0        0       0   " << endl; //ln0
    cout << "1        1       1   " << endl; //ln1
    cout << "2        4       8   " << endl; //ln2
    cout << "3        9       27  " << endl; //ln3
    cout << "4        16      64  " << endl; //ln4
    cout << "5        25      125 " << endl; //ln5
    cout << "6        36      216 " << endl; //ln6
    cout << "7        49      343 " << endl; //ln7
    cout << "8        64      512 " << endl; //ln8
    cout << "9        81      729 " << endl; //ln9
    cout << "10       100     1000" << endl; //ln10

    cout << "End of Question 2.29"; 

    cout << endl;
    cout << endl;

    //This program takes five-digit integer input and seperates the integer into its digits.
    //Q2.30

    cout << "Beginning of Question 2.30" << endl;

    float weight_kg, height_metr, BMI;
    weight_kg = 0; height_metr = 0; BMI = 0;

    cout << "Please enter your weight and height in kilograms and meters respectively" << endl;
    cin >> weight_kg >> height_metr; 
    BMI = weight_kg / (height_metr * height_metr);

    cout << "Your BMI is: " << BMI << endl;
    cout << " BMI VALUES: \n Underweight: less than 18.5\n Normal:      between 18.5 and 24.9\n Overweight:  between 25 and 29.9\n Obese:       30 or greater" << endl;

    if (BMI < 18.49999) { cout << "You are underweight based on the values from the table." << endl; }
    else if (18.49999<= BMI && BMI <= 24.999999) { cout << "You are normal based on the values from the table" << endl; }
    else if (25.50000 <= BMI && BMI <= 29.999999) { cout << "You are overweight based on the values from the table" << endl; }
    else if (30.00000 <= BMI ) { cout << "You are obese based on the values from the table" << endl; }


    cout << "End of Question 2.30"; 

    cout << endl;
    cout << endl;

    //This program takes five-digit integer input and seperates the integer into its digits.
    //Q2.30

    cout << "Beginning of Question 2.30" << endl;

    float MilesDrivenPerDay, CostPerGallon, AvgMilesPerGallon, ParkingFees, Tolls ;
    MilesDrivenPerDay = 0; CostPerGallon = 0; AvgMilesPerGallon = 0; ParkingFees = 0; Tolls = 0;

    float _cost;
    _cost = 0;

    cout << "Hey there, have you ever thought how much you can save by car pooling and help the environment. If you did so please enter the values required and let us calculate for you." << endl;
    cout << "How many miles do you drive everyday?";
    cin >> MilesDrivenPerDay;
    cout << "\nHow much does it cost you to but a gallon of gasoline?";
    cin >> CostPerGallon;
    cout << "\nHow many miles does your car go per mile?";
    cin >> AvgMilesPerGallon;
    cout << "\nHow much does parking fees 2cost you?";
    cin >> ParkingFees;
    cout << "\nHow much does tolls cost you?";
    cin >> Tolls;

    float dummy1; //This variable holds a dummy value for average cost per mile to calculate daily cost.

    dummy1 = (MilesDrivenPerDay/AvgMilesPerGallon) * CostPerGallon; 

    _cost = (dummy1 + ParkingFees + Tolls)*30 ;

    cout << "If carpool you can save every month " << _cost << "$" << endl;

    cout << "End of Question 2.30"; 

    cout << endl;
    cout << endl;









    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
