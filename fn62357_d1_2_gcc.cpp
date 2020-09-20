/**
*
* Solution to homework task 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 2
* @compiler GCC
*
*/
#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
int SafelyInputInteger2(int Min2,int Max2) //proverka na inputa na cifra
{
    int intNumber2;
    do
    {
        cout<<"cifra: ";
        cin>>intNumber2;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
    }
    while ((intNumber2<Min2) || (intNumber2>Max2));
    return intNumber2;
}
long long SafelyInputInteger(long long Min,long long Max) //proverka na vhoda na chislo
{
    long long intNumber;
    do
    {
        cout<<"chislo: ";
        cin>>intNumber;
        intNumber=abs(intNumber); // vzima i polojitelni i otricatelnite stoinosti
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
    }
    while ((intNumber<Min) || (intNumber>Max));
    return intNumber;
}
int main()
{
    //k prisvoqba stoinostite na cifrite na chisloto
    long long chislo;
    int cifra, k, counter=0;
    cifra = SafelyInputInteger2(1,9); //izvikvame funkciqta, koqto vyvejda i proverqva inputa
    chislo=SafelyInputInteger(1,4294967295); //SAME
    chislo=abs(chislo);
    //cikyla do...while proverqva cifrite v chisloto i nachislqva povtoreniqta
    do
    {
        k = chislo % 10;
        chislo = chislo / 10;
        if(k == cifra)
        {
            counter++;
        }
    }
    while(chislo>0);
    cout<<"broi na cifrata v chisloto: "<<counter;
    return 0;
}
