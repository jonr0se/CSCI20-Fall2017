//Jon Rose
//April Browne
//CSCI020
//10/25/2017
/*
Classes and Constructors
This lab requires a class that converts temperature between Kelvin, Fahrenheit, and Celcius.
It will store the Kelvin value internally. The class will be run by the provided main.
*/

        #include <iostream> // embedded comments iostream
        #include <string>  // string
        
        using namespace std; // name space std
        
        class TemperatureConverter // class Temperature Converter
            {
            public:  // public 
            double SetTempFromKelvin  // Set Temp From Kelvin
            double GetTempFromKelvin   // Get Temp From Kelvin
            double SetTempFromCelsius  // Set Temp From Celcius
            double SetTempFromFahrenheit  // Set Temp From Fahrenheit
            double GetTempAsCelsius  // Get Temp As Celcius
            double GetTempAsFahrenheit  // Get Temp As Fahrenheit
            PrintTemperatures // Print Temperatures 
            }
            private: // private
            double kelvin_=0;  // kelvin_
            };
            /*
            Kelvin = Celsius + 273.15
            Celsius = (5.0/9) * (Fahrenheit - 32)
            */
            
            
            
          
            

            
            
            
            
            // Created By: April Browne
            //* Created On: 9/22/2016
            //* This program will run the Temperature Converter Class
            #include<iostream>
            #include "lab35.cpp"
            using namespace std;
            int main ()
            {
            TemperatureConverter temp1; //testing default constructor
            TemperatureConverter temp2(274); //testing overloaded constructor
            temp1.PrintTemperatures();
            temp2.PrintTemperatures();
            temp1.SetTempFromKelvin(400.15); //testing mutator function
            cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
            temp1.PrintTemperatures();
            temp2.SetTempFromCelsius(32); //testing other functions
            cout<<temp2.GetTempAsCelsius()<<endl;
            temp2.PrintTemperatures();
            temp2.SetTempFromFahrenheit(32);
            cout<<temp2.GetTempAsFahrenheit()<<endl;
            temp2.PrintTemperatures();
            return 0;
            }
            double Temperature::kelToCel(double kel)
            {
            kelvin = kel;
            return celsius = kel - 273.15;
            }
            double Temperature::kelToFahr(double kel)
            {
            kelvin = kel;
            return fahrenheit = (9.0 / 5) * (kel - 273.15) + 32;
            }
            double Temperature::celToKel(double cel)
            {
            celsius = cel;
            return kelvin = cel + 273.15;
            }
            double Temperature::celToFahr(double cel)
            {
            celsius = cel;
            return fahrenheit = cel * (9.0 / 5) + 32;
            }
            double Temperature::fahrToCel(double fahr)
            {
            fahrenheit = fahr;
            return celsius  = (5.0 / 9) * (fahr - 32);
            }
            double Temperature::fahrToKel(double fahr)
            {
            fahrenheit = fahr;
            return  kelvin = (5.0 / 9) * (fahr - 32) + 273.15;
            }
            int main()
            {
            std::cout << "This program converts between temperature scales.\n\n"
            << "1: Kelvin to Celsius       3: Fahrenheit to Kelvin     5:Celsius to Fahrenheit\n"
            << "2: Kelvin to Fahrenheit    4: Fahrenheit to Celsius    6: Celsius to Kelvin\n\n"
            << "Enter the number of your selection: ";
            short selection;
            std::cin >> selection;
            Temperature temp;
            double degrees, count = 0;
            switch (selection)
            {
            // input: Kelvin, output: Celsius
            case 1:
            std::cout << "Enter degrees in Kelvin: ";
            std::cin >> degrees;
            std::cout << temp.kelToCel(degrees) << " Celsius.\n";
            break;
            // input Kelvin, output: Fahrenheit
            case 2:
            std::cout << "Enter degrees in Kelvin: ";
            std::cin >> degrees;
            std::cout << temp.kelToFahr(degrees) << " Fahrenheit.\n";
            break;
            // input: Fahrenheit, output: Kelvin
            case 3:
            std::cout << "Enter degrees in Fahrenheit: ";
            std::cin >> degrees;
            std::cout << temp.fahrToKel(degrees) << " Kelvin.\n";
            break;
            // input: Fahrenheit, output Celsius
            case 4:
            std::cout << "Enter degrees in Fahrenheit: ";
            std::cin >> degrees;
            std::cout << temp.fahrToCel(degrees) << " Celsius.\n";
            break;
            // input: Celsius, output: Fahrenheit
            case 5:
            std::cout << "Enter degrees in Celsius: ";
            std::cin >> degrees;
            std::cout << temp.celToFahr(degrees) << " Fahrenheit.\n";
            break;
            // input: Celsius, output Kelvin
            case 6:
            std::cout << "Enter degrees in Celsius: ";
            std::cin >> degrees;
            std::cout << temp.celToKel(degrees) << " Kelvin\n";
            break;
            }
            }
            */