/**
*
* Solution to homework assignment 3
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
#include<stdlib.h>
#include<windows.h>
using namespace std;
void slideAnimation(char A)
{
    for(int i=-5; i<82; i++) // poleta na konzolata 80
    {
        cout<<"\n \n \n \n \n \n \n \n \n \n \n \n"; //vertikalno centrirano, zapochva ot 13tiq red
        for(int k=0; k<i; k++)
        {
            cout<<" ";//pri k=0 nqma da ima pole , pri k=1 she ostavi edno mqsto
        }
        cout<<"H   H   EEEEE   L       L         O"<<endl;
        for(int k=0; k<i; k++)
        {
            cout<<" ";
        }
        cout<<"H   H   E       L       L       O   O"<<endl;
        for(int k=0; k<i; k++)
        {
            cout<<" ";
        }
        cout<<"HHHHH   EEEEE   L       L      O     O"<<endl;
        for(int k=0; k<i; k++)
        {
            cout<<" ";
        }
        cout<<"H   H   E       L       L       O   O"<<endl;
        for(int k=0; k<i; k++)
        {
            cout<<" ";
        }
        cout<<"H   H   EEEEE   LLLLL   LLLLL     O"<<endl;
        for(double j=0; j<1000000; j++);
        Sleep(30);   //zabavq nadpisa
        system("CLS");  //she iztrie konzolataa, ekrana
    }
}
int main()
{
    char A;
    slideAnimation(A);
    return 0;
}
