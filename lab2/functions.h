//
// Created by 1 on 04.03.2023.
//

#ifndef PROG_LAB2_FUNCTIONS_H
#define PROG_LAB2_FUNCTIONS_H

#include <fstream>
#include "iostream"
#include "functions.h"
using namespace std;

class File {
public:
    ofstream file;
    string name = "";
    void start(){
        int cases;
        bool circle=true;
        while (circle) {
            menu();
            line();
            cin >> cases;
            switch (cases){
                case 1:
                    open();
                    line();
                    break;
                case 2:
                    line();
                    close();
                    line();
                    break;
                case 3:
                    line();
                    get_name();
                    line();
                    break;
                case 4:
                    line();
                    open_file();
                    line();
                    break;
                case 5:
                    line();
                    write_string();
                    line();
                    break;
                case 6:
                    line();
                    write_integer();
                    line();
                    break;
                case 7:
                    line();
                    write_real();
                    line();
                    break;
                case 0:
                    line();
                    cout << "The program has been finished.";
                    line();
                    circle = false;
                    break;
                default:
                    line();
                    cout << "There is no such command.\n";
                    line();
                    break;
            }
        }
    };
    void open(){
        cout << "Write the name of the file: ";
        cin >> name;
        file.open(name , ios::app);
    };
    void close(){
        file.close();
    };
    int open_file(){
        if (!file.is_open()){
            cout << "File is closed \n";
            return -1;
        }
        else{
            cout << "File is opened \n";
            return 1;
        }
    }
    void get_name(){
        if (name != "") {
            cout << "Name of the file - : " << name << "\n";
        }else{
            cout << "File is not opened \n";
        }
    }

    void write_string(){
        string text;
        cout << "Write: ";
        cin >> text;
        if (file.is_open()){
            file << text << endl;
        } else{
            cout << "File is not opened";
        }
    }
    void write_integer(){
        int figure;
        cout << "Write: ";
        cin >> figure;
        if (file.is_open()){
            file << figure;
        } else{
            cout << "File is not opened";
        }
    }
    void write_real(){
        float figure;
        cout << "Write: ";
        if (file.is_open()){
            file << figure << endl;
        } else{
            cout << "File is not opened";
        }
    }
    void menu(){
        cout <<"Choose the case:" << "\n";
        cout << "1 - Open the file." << "\n";
        cout << "2 - Close the file." << "\n";
        cout << "3 - Get the file's name." << "\n";
        cout << "4 - Check if the file is opened." << "\n";
        cout << "5 - Write a string in the file." << "\n";
        cout << "6 - Write an integer in the file." << "\n";
        cout << "7 - Write a real figure in the file." << "\n";
        cout << "0 - End the program." << "\n";
    }

    void line(){
        cout << "--------------------------------\n" ;
    }

};

#endif //PROG_LAB2_FUNCTIONS_H
