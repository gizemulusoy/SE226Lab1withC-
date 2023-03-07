
#include <iostream>
#include <string>

using namespace std;
int main() {
    string x;
    cout<<"What is your name? :";
    cin>>x;
    cout<<"Hello " + x<<endl;


    int y;
    cout<<"What is your student ID? :";
    cin>>y;
    cout<<"Your student ID is " ;
    cout<<y<<endl;

    cout<< "-------------- question 2 ----------- \n "  ;

    int var1;
    cout<< " enter variable 1 : ";
    cin>>var1;
    int var2;
    cout<< "enter variable 2 : ";
    cin>>var2;
    int sum;

    sum = var1+ var2;
    cout<<"Summation : ";
    cout<<sum;

    int diff = var1 - var2;
    cout<<" \n Difference : " ;
    cout<<diff;

    int prod = var1 * var2 ;
    cout<<" \n Multiplication : ";
    cout<<prod;

    cout<<" \n -------------question 3 -----------";

    string a;
    cout<<" \n Name : ";
    cin>>a;

    int b;
    cout<<"Lab grade : ";
    cin>>b;

    int c ;
    cout<<"Midterm : ";
    cin>>c;

    int d ;
    cout<<"Final : ";
    cin>>d;

    cout<<"Last score : ";
    cout<< (0.25*b)+(0.35*c)+(0.40*d);

    cout<<"\n -------question 4 -------";

    cout<<" \n * \n ** \n *** \n ** \n * ";



    return 0;



}