#include <iostream>
using namespace std;
int main()
{
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    string movieName;
    cout << "enter the movie name:";
    cin >> movieName;
    float discount;
    int index1 = 0;
    for (int index = 0; index < 5; index++)
    {
        if (movieName == movies[index])
        {

            if (index % 2 != 0)
            {
                discount = (500 * 5) / 100;
                float discountedTicket = 500 - discount;
                cout << "the ticket  price =" << discountedTicket << endl;
                break;
            }
            else
            {
                discount = (500 * 10) / 100;
                float discountedTicket = 500 - discount;
                cout << "the ticket price =" << discountedTicket << endl;
                break;
            }
        }
    }
}