//Take 25 integers from the user and count the number of odd, even, positive and negative numbers the user enters. Print the results. Remember 0 is neither positive nor negative but it’s an even number.



//Write a program that will print all the prime numbers between two integers entered by the user.


#include <iostream>

using namespace std;

int main()
{
    //Take 25 integers from the user and count the number of odd, even, positive and negative numbers the user enters. Print the results. Remember 0 is neither positive nor negative but it’s an even number.

    cout<<"Please enter number of terms to check: ";
    int terms;
    cin>> terms;

    cout<<"Sequence initiated! " <<endl;

    int odd_counter = 0;
    int even_counter = 0;
    int positive_counter = 0;
    int negative_counter = 0;

    for (int term = 1; term <= terms; term++)
    {
        int num;

        cout<<"Please enter a number: ";

        cin>> num;



        if (num < 0)
            negative_counter++;

        else if (num > 0)
            positive_counter++;

        if (num % 2 == 0)
            even_counter++;

        else if (num == 0)
            continue;

        else
            odd_counter++;

    }



    cout<<endl<<"Odd counter: " << odd_counter <<"\nEven Counter: " << even_counter <<"\nNegative counter: " << negative_counter <<"\nPositive counter: " << positive_counter << endl;


    return 0;
}




