#include <iostream>

using namespace std;

int main()
{
    //Take an integer from the user and check if the number is prime or not.

    int number;

    cout<<"Please enter a number: ";

    cin>>number;

    cout<<endl;

    for (int iter = 0; iter <= 12; iter++)
    {
        cout<<number << " x " << iter <<
        " = " << iter *number <<endl;

    }




    return 0;
}


