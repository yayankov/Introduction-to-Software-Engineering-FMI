/**
*
* Solution to homework task 5
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 5
* @compiler GCC
*
*/
#include<iostream>
#include<math.h>
#include<limits>
using namespace std;
double validInput()
{
    double x1;
    cin>>x1;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Wrong input."<<endl;
        cout<<"x= ";
        cin>>x1;
    }
    return x1;
}
double validInput2()
{
    double y1;
    cin>>y1;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Wrong input."<<endl;
        cout<<"y= ";
        cin>>y1;
    }
    return y1;
}
int main ()
{
    double x;
    double y;
    double upperCycle;
    double underCycle;
    cout<<"x= ";
    x=validInput();
    cout<<"y= ";
    y=validInput2();
    if(sqrt(x*x+y*y)==6) //opredelq tochkite vurhu okryjnostta kato undefined
        cout<<"Undefined";
    else if(sqrt(x*x+y*y)<6) //opredelq dali e v okrjnostta ili izvun neq
    {
        upperCycle = sqrt((y-3)*(y-3)+x*x);
        underCycle = sqrt((y+3)*(y+3)+x*x);
        if (upperCycle==3 || upperCycle==1 || underCycle==3 || underCycle==1) //opredelq tochkite vurhu liniite v okr. kato undefined
            cout<<"Undefined";
        else  if (upperCycle<3 && y>=0 && x>=0) //izkarva bqlata chast v 1 kvadrant
            cout<<"White";
        else  if (upperCycle>1 && y>=0 && x<=0) //izkarva bqlata chast v 2 kvadrant
            cout<<"White";
        else  if (underCycle>3 && y<=0 && x<=0) //izkarva bqlata chast v 3 kvadrant
            cout<<"White";
        else  if (underCycle<1 && y<=0) //izkarva bqlata chast v dolnata malka okrujnost
            cout<<"White";
        else
            cout<<"Black"; //vsichko koeto ne e v izbroenite if-ove, e cherno
    }
    else
        cout<<"Outside"; //vsichko izvyn okryjnostta
    return 0;
}
