 #include <iostream>

 using namespace std;

 int main(){

double km, miles;

cout << "Enter distance in km: ";
cin >> km;

double miles_conversion_rate = 0.6;
miles = km * miles_conversion_rate;

cout << "distance in miles:  " << miles;

return 0;

 }











