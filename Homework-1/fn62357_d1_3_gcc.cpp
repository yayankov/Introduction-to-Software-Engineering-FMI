/**
*
* Solution to homework task 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 3
* @compiler GCC
*
*/
#include<iostream>
using namespace std;
int main ()
{
    int operation;
    int op1;
    int op2;
    int result;
    cout<<"operaciq 0- subirane \n";
    cout<<"operaciq 1- izvajdane \n";
    cout<<"operaciq 2- umnojenie \n";
    cout<<"operaciq 3- celochisleno delenie \n \n";
    cout<<"operand 1, operand 2, operation: ";
    cin>>op1>>op2>>operation;
    if(op1>=0 && op1<=15 && op2>=0 && op2<=15) //kontrola na vhodnite danni izrazen s funkciqta if
        switch (operation) //4-bitov kalkulator
        {
        case 0:
            result=op1+op2;
            cout<<"izhod= "<<result%16<<endl; ///programata izvejda result mejdu 0 i 16
            break;
        case 1:
            result=op1-op2;
            if(op1 >= op2) // pri 1vi operand po golqm ot 2riq
            {
                cout<<"izhod= "<<result<<endl;
            }
            else
                cout<<"izhod= "<<16+result<<endl; // dobavqne na 16 tyi kato otricatelnoto chislo trqbva da vleze v intervala 0/16
            break;
        case 2:
            result=op1*op2;
            cout<<"izhod= "<<result%16<<endl;
            break;
        case 3:
            if(op2!=0)
            {
                result =op1/op2;
                cout<<"izhod= "<<result%16<<endl;
            }
            else
                cout<<"wrong input"; //ako delitelq e raven na 0
            break;
        default:
            cout<<"wrong input"<<endl; //ako operaciqta ne sa ot 0 do 3
        }
    else
        cout<<"wrong input"; //ako operantite ne sa v dopustimi stoinosti 0/15

    return 0;
}
