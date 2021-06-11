#include<iostream>
using namespace std ;
int main ()
{
    int n , sum=0  ;
    cout << " Enter student number : " ;
    cin>>n ;
    int students [n] ;



    //input 
    for ( int i=0 ; i <n ;i++) {

        cout << " Marks for student number " <<i+1 << " = " ;
        cin >> students[i] ;

        sum = sum + students[i] ;


    }

    cout << " Total Marks : " <<sum <<endl ;
    float avg = (float) sum / n ;
    cout << " Average number : " <<avg <<endl ;






    return 0 ;
}