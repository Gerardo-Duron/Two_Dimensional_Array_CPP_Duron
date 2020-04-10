//Student Name: Gerardo Duron

//Teacher: Dr. Tyson McMillan

//Date:4/09/2020

//A program to practice working with multi-dimensional arrays

#include <iostream>

using namespace std;

//Washington, DC = 1, New York City, NY = 2  Replace City_One and City_Two with the names of your cities

//Data Table

//City X, Day X: Temp
/*
City 1, Day 1: 54

City 1, Day 2: 60

City 1, Day 3: 72

City 1, Day 4: 79

City 1, Day 5: 57

City 1, Day 6: 57

City 1, Day 7: 55

City 2, Day 1: 51

City 2, Day 2: 56

City 2, Day 3: 64

City 2, Day 4: 69

City 2, Day 5: 57

City 2, Day 6: 54

City 2, Day 7: 51
*/

int main()

{

      const int CITY = 2;

      const int WEEK = 7;

 

    int temperature[CITY][WEEK];

    //Note your input data from the above

    cout << "Enter all temperature for a week of first city and then second city. \n";

 

    // Inserting the values into the temperature array

    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";

            cin >> temperature[i][j];

        }

    }

 

    cout << "\n\nDisplaying Values:\n";

 

    // Accessing the values from the temperature array

    for (int i = 0; i < CITY; ++i)

    {

        for(int j = 0; j < WEEK; ++j)

        {

            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;

        }

    }

 

    return 0;

}