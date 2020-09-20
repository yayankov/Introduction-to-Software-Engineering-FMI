/**
*
* Solution to homework assignment 2
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

#include <iostream>
using namespace std;
int main()
{
    int arr[100]= {6, 5, 6, 0, 3};
    int s,Move,n,c,d,f;
    int newArr[5];
    cout<<" Arr = {6, 5, 6, 0, 3}   L = 5 "<<endl;
    cout<<" M = ";
    cin>>Move;
    if(cin.fail())//proverka za stoinostite na Move
    {
        cout<<"Error!"<<endl;
        return 0;
    }
    if(Move>=-5 && Move<=5)//ogranichava stoinostite na Move mejdu 5 i -5
    {
        if(Move>=0)
        {
            for(n=4,s=Move-1; s>=0; s--)//premestva elementite na dqsno zapochvaiki ot posledniq element v masiva
            {
                newArr[s]=arr[n];
                n--;
            }
            for(c=0,f=Move; f<5; f++)//premestvaelementite otpred nazad
            {
                newArr[f]=arr[c];
                c++;
            }
            for(d=0; d<5; d++)//printira masiva
                cout<<" "<<newArr[d]<<" ";
        }
        else
        {
            Move=Move+5; //otricatelnata stoinost na Move premestva elementite kato polojitelno Move +5
            for(n=4,s=Move-1; s>=0; s--)//premestva stoinostite na lqvo zapochvaiki otzad na masiva
            {
                newArr[s]=arr[n];
                n--;
            }
            for(c=0,f=Move; f<5; f++)
            {
                newArr[f]=arr[c];
                c++;
            }
            for(d=0; d<5; d++)//printira masiva
                cout<<newArr[d]<<" ";
        }
    }
    else cout<<"Error!";
    return 0;
}
