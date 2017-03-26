#include <iostream>

using namespace std;

int main()
{
    //Write a program that will take 10 numbers from the user and compute the average value.



    float term;

    cout<<"Please enter number of terms: ";

    cin>>term;

    cout<<endl;

    float sum = 0;



    for (float iter = 1; iter <= term; iter=iter+1)
    {
        int num;

        cout<<"Please enter the " << iter << " nambar number: ";

        cin>> num;

        sum = sum + num;

    }

    float average = sum / term;

    cout<< "\nThe sum of the " << term << " numbers you entered is " << sum <<" and their average is " << average << ". " << endl;


//    cout<<"Float: " << sizeof(float) <<endl;
//    cout<<"Double: " << sizeof(double) <<endl;
//    cout<<"Int: " << sizeof(int) <<endl;

    return 0;
}


