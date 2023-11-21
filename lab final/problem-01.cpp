#include<bits/stdc++.h>
using namespace std;

class ManchesterUnited
{
private:
    int coach = 0;
    int player = 0;

public:
    void getData()
    {
        cout<< "\n"<<"            Number of coach  = " << coach<<endl;
        cout<< "            Number of Player = " << player << endl;
    }

    void operator++(int)
    {
        coach++;
        player++;
    }

    bool operator==(ManchesterUnited &obj)
    {
        return (this->coach + player == obj.coach + obj.player);
    }


    void setData(int Coach, int Player)
    {
        coach = Coach;
        player= Player;
    }

};

int main()
{
    ManchesterUnited ronaldo,fernandes;

    ronaldo.setData(4,5);
    fernandes.setData(5,6);

    cout<<"Total member for Ronaldo  : ";
    ronaldo.getData();
    cout<<"Total member for Fernandes: ";
    fernandes.getData();


    cout<<"Ans: ";
    if (ronaldo == fernandes)
    {
        cout << "Total Member is Equal\n\n"<<endl;
    }
    else
    {
        cout << "Total Member is not Equal\n\n"<<endl;
    }


    ronaldo++;


    cout<<"Total member for Ronaldo  : ";
    ronaldo.getData();
    cout<<"Total member for Fernandes: ";
    fernandes.getData();


    cout<<"Ans: ";
    if (ronaldo == fernandes)
    {
        cout << "Total Member is Equal"<<endl;
    }
    else
    {
        cout << "Total Member is not Equal"<<endl;
    }
    return 0;
}
