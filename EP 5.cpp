#include <iostream>

using namespace std;

int main()
{
    //Write a program that will print the digits of an integer backwards. Example: if the user enters 452643, the program should print 346254.


    int rows;

    cout<<"Please enter your number of rows: ";

    cin>>rows;

    cout<<endl;


    for (int iter = 0; iter <= rows; iter++)
    {
        for (int jiter = 0; jiter < iter; jiter++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }

    cout<<endl;

    return 0;
}



