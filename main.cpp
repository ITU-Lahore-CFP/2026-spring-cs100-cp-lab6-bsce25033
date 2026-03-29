#include "functions.h"

int main()
{
    int choice;
    do{


        cout<<"1. Sum of Squares"<<endl;
        cout<<"2. Find Factorial"<<endl;
        cout <<"3. Exit" << endl;
        cout << "Please enter a choice: "<<endl;
        cin >> choice;

        switch(choice)
        {
        case 1:{
                int n;
                cout<<"Please enter a number: "<<endl;
                cin>>n;
                cout<< sumOfSquares(n)<<endl;
                break;
        }
        case 2:{
                int number;
                cout<<"Please enter a number: "<<endl;
                cin>>number;
                cout<< findFactorial(number)<<endl;
                break;
        }
        case 3:
            cout<<"Exiting the program!!!LOL "<<endl;
            break;

        default:
            cout<<"Please enter a valid choice shit"<<endl;
        }
    }while(choice!=3);

    return 0;
}