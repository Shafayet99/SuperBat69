#include <iostream>

using namespace std;

int main()
{
    //Compute the sum, 𝑆=1−2+3−4…+99−100



    int term;

    cout<<"Please enter number of terms: ";

    cin>>term;

    cout<<endl;

    int sum = 0;

    cout<<"Sum = ";

    int iter = 1;

    cout<<iter;

    sum = sum + iter;

    for (iter = 2; iter <= term; iter=iter+1)
    {


        if (iter % 2 == 0)
        {
            cout << " - " << iter;
            sum = sum - iter;
        }
        else
        {
            cout << " + " << iter;
            sum = sum + iter;
        }

    }

    cout<< " = " << sum <<endl;




    return 0;
}


