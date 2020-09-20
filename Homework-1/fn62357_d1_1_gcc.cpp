/**
*
* Solution to homework task 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 1
* @compiler GCC
*
*/
#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
int SafelyInputInteger(int Min,int Max){
    int intNumber;
    do{
            cout<<"Estestveno chislo: ";
            cin>>intNumber;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
    }while ((intNumber<Min) || (intNumber>Max));
    return intNumber;
    }
int main()
{
    short int number;
    int AbsSt;
    int max_num;
    int min_num;
    int counter=0;
    number= SafelyInputInteger(0,65536);
    if(number>=0)
    {
        // min и max присвояват първата стойност
        max_num=number;
        min_num=number;
        //namira min i max
        do
        {
            number= SafelyInputInteger(-65536,65536);
            {
            if(max_num<number && number>=0)
                max_num=number;
            if(min_num>number && number>=0)
                min_num=number;
            counter++;
            }
        }
        while(number>=0);
        //namira absolutnata stoinost
        if (counter>1)
        {
            cout<<"Min= "<<min_num<<endl;
            cout<<"Max= "<<max_num<<endl;

            AbsSt = min_num - max_num;
            AbsSt = abs(AbsSt);
            cout<<"Absolutna stoinost na razlikata im: "<<AbsSt;
        }
        else
            cout<<"greshka";
    }
    else
        cout<<"greshka";
    return 0;
}
