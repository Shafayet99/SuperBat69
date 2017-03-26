#include <iostream>

using namespace std;

int main()
{
    //Take an integer from the user and check if the number is prime or not.

    int number;

    cout<<"Please enter a number: ";

    cin>>number;

    cout<<endl;

    bool is_prime = true;

    for (int iter = 2; iter < number; iter++)
    {
        if (number % iter == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout<< endl << number << " is a prime number." <<endl;
    else
        cout<< endl << number << " is not a prime number." <<endl;


    return 0;
}


