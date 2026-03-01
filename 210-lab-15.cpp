#include <iostream>
#include<fstream>
#include<array>
#include<string>
using namespace std;

const int MOVIES = 4;

class Movie {
    string title;
    int year;
    string writer;

public:
    void print(); //cout movie info

    string getTitle() const; //accessors
    int getYear() const;
    string getWriter() const;

    void setTitle(string); //mutators
    void setYear(int);
    void setWriter(string);
};

void finMovies(array<Movie, MOVIES>&);
void coutMovies(array<Movie, MOVIES>&);

int main()
{
    std::cout << "Hello World!\n";
}

void print() {
    cout << "Movie: " << title << endl;
    cout << "  Year released: " << yearReleased << endl;
    cout << "  Screenwriter: " << screenWrtier << endl;
}

string getTitle() const {
    return title;
}

int getYear() const [
    return year;
]
string getWriter() const;

void setTitle(string);
void setYear(int);
void setWriter(string);