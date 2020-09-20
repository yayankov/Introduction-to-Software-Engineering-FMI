/**
*
* Solution to homework assignment 3
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
#include<iomanip>
using namespace std;
double* transponirane(double A[3][3])  //transponirane na matrici
{
    double AT[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            A[i][j]=A[j][i];
        }
    }
    double *pointer=&A[0][0];
    return pointer;
}
double* multiplication(double A[3][3],double C[3][3])  //umnojenie na matrici
{
    double M[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            M[i][j]=A[i][0]*C[0][j] + A[i][1]*C[1][j] + A[i][2]*C[2][j];
        }
    }
    double *pointer=&M[0][0];
    return pointer;
}
double* subiraneMatrici(double A[3][3], double B[3][3])   //subirane na 2 matrici
{
    double Sum[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            Sum[i][j]=A[i][j]+B[i][j];
        }
    }
    double *pointer=&Sum[0][0];
    return pointer;
}
double* chisloMatrica(double A[3][3])   //umnojenie na chislo s matrica
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            A[i][j]=A[i][j]*(-3);
        }
    }
    double *pointer=&A[0][0];
    return pointer;
}
double *functioN(double A[3][3],double C[3][3])  //osnovna funkciq
{
    ///transponirane
    //chrez pointer izvikvam purvata stoinost na matricata i printiram ostanalata chast
    double *pointer10;
    pointer10 = transponirane(A);
    double AT[3][3];
    for(int p=0; p<3; p++)
    {
        for(int r=0; r<3; r++)
        {
            AT[p][r]= *pointer10;
            pointer10++;
        }
    }
    ///umnojenie na 2 matrici M=At*C
    double *pointer2;
    pointer2 = multiplication(AT,C);
    double M[3][3];
    for(int q=0; q<3; q++)
    {
        for(int r=0; r<3; r++)
        {
            M[q][r] = *pointer2;
            pointer2++;
        }
    }
    ///namirane na matrica sys stoinosti P=(-3)*At*C
    double *pointer3;
    pointer3= chisloMatrica(M);
    double P[3][3];
    for(int p=0; p<3; p++)
    {
        for(int r=0; r<3; r++)
        {
            P[p][r]= *pointer3;
            pointer3++;
        }
    }
    ///poluchavane na edinichna matrica i q umnojavam s 5
    double E[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                E[i][j]=1*5;
            }
            else
            {
                E[i][j]=0;
            }
        }
    }
      ///subirane na matrici K= A+5E
    double *pointer4;
    pointer4=subiraneMatrici(A, E);
    double K[3][3];
    for(int p=0; p<3; p++)
    {
        for(int r=0; r<3; r++)
        {
            K[p][r]= *pointer4;
            pointer4++;
        }
    }
    ///namirane na determinanta i namirane na adungiranata matrica K
    double K_ad[3][3];
    double K_Obr[3][3];
    double detK=(K[0][0]*K[1][1]*K[2][2]+K[0][1]*K[1][2]*K[2][0]+K[0][2]*K[1][0]*K[2][1])-(K[2][0]*K[1][1]*K[0][2]+K[1][0]*K[0][1]*K[2][2]+K[0][0]*K[2][1]*K[1][2]);
            K_ad[0][0]=(K[1][1]*K[2][2]-K[1][2]*K[2][1]);
            K_ad[0][1]=(-1)*(K[1][0]*K[2][2]-K[2][0]*K[2][1]);
            K_ad[0][2]=(K[1][0]*K[2][1]-K[1][1]*K[2][0]);
            K_ad[1][0]=(-1)*(K[0][1]*K[2][2]-K[0][2]*K[2][1]);
            K_ad[1][1]=(K[0][0]*K[2][2]-K[0][2]*K[2][0]);
            K_ad[1][2]=(-1)*(K[0][0]*K[1][2]-K[1][0]*K[0][2]);
            K_ad[2][0]=(K[0][1]*K[1][2]-K[1][1]*K[0][2]);
            K_ad[2][1]=(-1)*(K[0][0]*K[1][2]-K[0][2]*K[1][0]);
            K_ad[2][2]=(K[1][1]*K[0][0]-K[1][0]*K[0][1]);
    ///K_Obr e obratnata matrica kato K_Obr e ravna na K_ad razdelena na detK
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            K_Obr[i][j]=(K_ad[i][j])/(detK);
        }
    }
    ///Umnojavane na matrica P po obratnata matrica K_obr i poluchavane na X
    double *pointer5;
    pointer5= multiplication(P,K_Obr);
    double X[3][3];
    for(int p=0; p<3; p++)
    {
        for(int r=0; r<3; r++)
        {
            X[p][r]= *pointer5;
            pointer5++;
        }
    }

    double *Pointer=&X[0][0];
    return Pointer;
}
int main ()
{
    double A[3][3]={-4., 1., 1.,
                     1.,-3., 2.,
                     1., 2.,-4.};

    double C[3][3]={-1.,-2.,-2.,
                    -1.,-3.,-4.,
                    -1.,-3.,-5.};
    ///chrez pointer vzimame stoinostite na matrica X
    double *pointer6;
    pointer6= functioN(A,C);
    double X[3][3];
    for(int p=0; p<3; p++)
    {
        for(int r=0; r<3; r++)
        {
            X[p][r]= *pointer6;
            pointer6++;
        }
    }
    //Printiram matrica X
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<setw(3)<<X[i][j];
        }
        cout<<endl;
    }
    return 0;
}

