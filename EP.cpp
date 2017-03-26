#include <iostream>

using namespace std;

int main()
{
    //Take 10 floating point numbers from the user and then print the largest and smallest numbers among the 10 numbers.

    float num_1, num_2, maxi, mini;

    cout<<"Please enter a number: ";
    cin>>num_1;

    cout<<"\nPlease enter another number: ";
    cin>> num_2;

    if (num_1 > num_2)
    {
         maxi = num_1;
         mini = num_2;
    }
    else
    {
         mini = num_1;
         maxi = num_2;
    }

    for (int counter = 3; counter <= 10; counter= counter + 1)
    {
         cout<<"Please enter a number: ";
    cin>>num_1;


        if (num_1 > maxi)
            maxi = num_1;

        if (num_1 < mini)
            mini = num_1;


    }

    cout<<"\nMaximum of 10 numbers : " << maxi << endl;

    cout<<"\Minimum of 10 numbers : " << mini << endl;


    return 0;
}
