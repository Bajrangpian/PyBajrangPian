#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //create and opne a text file
    ofstream Myfile("filename.txt");

    //write to the file
    Myfile <<"Hello file";

    //close the file
    Myfile.close();

    return 0;
    
}