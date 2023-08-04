//
//  main.cpp
//  CarRentalProgram
//
//  Created by Farhan Niloy on 4/8/23.
//

#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>


using namespace std;

struct car {
    string company[200]= {"Maruti", "Honda", "Toyota", "Ford", "Tata", "Mahindra", "Hundai", "Renault", "Skoda", "Volkswagen", "Mercedes", "BMW"};
    
    string Model[200]= {"Swift", "City", "Innova", "Figo", "Nano", "XUV", "i20", "Kwid", "Octivia", "Polo", "Benz", "X5", "A4"};
    
    string Color[200]= {"Red", "Blue", "Black", "White", "Silver", "Green", "Gray", "Orange", "Purple", "Pink", "Gold", "Copper", "Pink"};
    
    string MaxSpeed[200] = {"180", "200", "210", "230", "150", "190", "250", "220", "170", "250", "300", "400"};
    
    string FuelType[200] = {"Dissel", "Dissel", "Dissel", "Petrol", "Petrol", "Petrol", "Petrol", "Petrol", "Petrol", "Petrol", "Petrol", "Petrol"};
    
    string Manufacturer[200] = {"India", "Germany", "Japan", "South Korea", "USA", "France", "Japan", "South Korea", "USA", "France", "Russia", "Japan"};
    
    string Price[200] = {"500000", "600000", "700000", "800000", "900000", "1000000", "1500000", "2200000", "3100000", "3500000", "4000000", "6000000" };
}
car;

int login();

int main(){
    int login;
    string decide = "yes";
    cout<<"\t\t-----------------------------" <<endl;
    cout<<"\t\t Welcome to Car Rental System" <<endl;
    cout<<"\t\t Choose your option"<<endl;
    cout<<"\t\t-----------------------------"<<endl;
    
    while(decide != "exit"){
        menu
    }
    
    
    
}

int login(){
    string pass = "";
    char ch;
    
    cout<<"\t\t Car Rental Program Login" <<endl;
    cout<<"\t\t Enter Password: ";
    ch = _getch();
    while (ch!=13){
        pass.push_back(ch);
        cout<< '*';
        ch = _getch();
    }
    if (pass=="PassCode"){
        cout<<"\t Password Matched" <<endl;
        cout<<"\t Loading..." <<endl;
        system("PAUSE");
        cout<<"Access Granted! Welcome to our system!";
        system("cls");
    } else {
        cout<<"\t Password Not Matched" <<endl;
        cout<<"\t Try again!" <<endl;
        system("Pause");
        system("cls");
        login();
    }
}





