// 3.accounts.cpp
// juanfc 2020-01-30
//
// pepe 20 lola 30 pepe 10 juan 40 lola 20 luis 20 ana 30 eva 34 END

// Enter name and expense (enter name END to finish)
//     Name: pepe
//     Expense: 20
//     Name: lola
//     Expense: 30
//     Name: pepe
//     Expense: 10
//     Name: juan
//     Expense: 40
//     Name: lola
//     Expense: 20
//     Name: luis
//     Expense: 20
//     Name: ana
//     Expense: 30
//     Name: eva
//     Expense: 34
//     Name: END


// Output:
//     pepe has spent a total of 30
//     lola has spent a total of 50
//     juan has spent a total of 40
//     luis has spent a total of 20
//     ana has spent a total of 30
//     eva has spent a total of 34

//     The mean of the total expenses is 34 so

//     pepe has to pay 4
//     lola must receive 16
//     juan must receive 6
//     luis has to pay 14
//     ana has to pay 4
//     eva is in balance

//     luis pays 14 to lola
//     pepe pays 4 to juan
//     ana pays 2 to lola
//     ana pays 2 to juan


#include <iostream>
#include <array>
using namespace std;


const int MAXNAMES = 10;
const float PRECIS = 0.01;

struct TPerson {
    string name;
    float paid;
};
typedef array<TPerson,MAXNAMES> TFriends;

void add(TFriends& f, string name, int exp);
float doMean(TFriends f);
void printExpenses(TFriends f);
void printDebts(TFriends f);
void printTrans(TFriends f);

int main()
{
    TFriends friends;
    string name;
    float exp;
    while (cin >> name and name != "END" and cin >> exp) {
        add(friends, name, exp);
    }
    printExpenses(friends);
    cout << endl << "The mean of the total expenses is " <<
            doMean(friends) << " so" << endl << endl;
    printDebts(friends);
    cout << endl;
    printTrans(friends);
    return 0;
}

void add(TFriends& f, string name, int exp)
{
    int i = 0;
    while (f[i].name.size() and f[i].name != name)
        ++i;
    if (f[i].name.size() > 0)
        f[i].paid += exp;
    else {
        f[i].name = name;
        f[i].paid = exp;
    }
}

float doMean(TFriends f)
{
    float s = 0;
    int i;
    for (i = 0; f[i].name.size() > 0; ++i)
        s += f[i].paid;
    return s/i;
}

void printExpenses(TFriends f)
{
    for (int i = 0; f[i].name.size() > 0; ++i)
        cout << f[i].name <<
                " has spent a total of " <<
                f[i].paid << endl;
}

void printDebts(TFriends f)
{
    float mean = doMean(f);
    for (int i = 0; f[i].name.size() > 0; ++i) {
        float dif = mean - f[i].paid;
        if (dif > PRECIS)
            cout << f[i].name <<
                    " has to pay " <<
                     dif << endl;
        else if (dif < -PRECIS)
            cout << f[i].name <<
                    " must receive " <<
                     -dif << endl;
        else
            cout << f[i].name <<
                    " is in balance" << endl;
    }

}

void findExtremes(TFriends f, int& minPayer, int& maxPayer);
void printTrans(TFriends f)
{
    float mean = doMean(f);
    int debtor, personToPay;
    findExtremes(f, debtor, personToPay);
    while (mean - f[debtor].paid > PRECIS) {
        float toPay = f[personToPay].paid - mean;
        if (toPay > mean - f[debtor].paid)
            toPay = mean - f[debtor].paid;
        cout << f[debtor].name <<
                " pays " <<
                toPay << " to " <<
                f[personToPay].name << endl;
        f[personToPay].paid -= toPay;
        f[debtor].paid += toPay;
        findExtremes(f, debtor, personToPay);
    }
}

void findExtremes(TFriends f, int& minPayer, int& maxPayer)
{
    minPayer = maxPayer = 0;
    for (int i = 1; f[i].name.size() > 0; ++i)
        if (f[i].paid < f[minPayer].paid)
            minPayer = i;
        else if (f[i].paid > f[maxPayer].paid)
            maxPayer = i;
}
