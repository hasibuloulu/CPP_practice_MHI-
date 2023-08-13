#include<iostream>
#include<string>
using namespace std;

class MyBackground {                // the class
    private:                        // access secifier (private)
     double CGPA; 
     string Retake;

    public:                          // access secifier (public)
     string myName;                  // attribute (string variable)
     string University;              // attribute (string variable)
     int    passingYear;             // attribute (int variable)
     
    // function initializing private variable 
    void setCGPA(double GPA) { 
        CGPA = GPA;}

    double getCGPA(){
        return CGPA;
    }
    // function initializing private variable
    void setRetake(string R) {
        Retake = R;  
    }
    string getRetake(){
        return Retake;
    }
};

int main() {
    MyBackground Bachelor;                                          // create an objecct of MyBackground
    // Access attributes and set values
    Bachelor.University = "East West University, Bangladesh";
    Bachelor.passingYear = 2014;
    Bachelor.setCGPA(3.01);                                          //passing the value of private variable 
    Bachelor.setRetake("YES");
    // Print attribute values
    cout << Bachelor.University << endl;
    cout << "Passing year: "<< Bachelor.passingYear << endl;
    cout << "Bachelor CGPA: " << Bachelor.getCGPA() << endl;
    cout << "Bachelor Retake: " << Bachelor.getRetake() << endl;

    MyBackground Masters;                                          // create an objecct of MyBackground
    // Access attributes and set values
    Masters.University = "University of Oulu, Finland";
    Masters.passingYear = 2019;
    Masters.setCGPA(3.26);                                              //passing the value of private variable 
    Masters.setRetake("YES");                                           //passing the value of private variable 

    // Print attribute values
    cout << Masters.University << endl;
    cout << "Passing year: "<< Masters.passingYear << endl;
    cout << "Masters CGPA: " << Masters.getCGPA() << endl;
    cout << "Masters Retake: " << Masters.getRetake() << endl;
    return 0;

    }