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

void Movie::print() {
    cout << "Movie: " << title << endl;
    cout << "  Year released: " << yearReleased << endl;
    cout << "  Screenwriter: " << screenWrtier << endl;
}

string Movie::getTitle() const {
    return title;
}

int Movie::getYear() const {
    return year;
}
string Movie::getWriter() const {
    return writer;
}

void Movie::setTitle(string title) {
    this->title = title;
}
void Movie::setYear(int year) {
    this->year = year
}
void Movie::setWriter(string writer) {
    this->writer = writer;
}

void finMovies(array<Movie, MOVIES>& movies) {
    ifstream fin;
    fin.open("input.txt");
    string buf;

    if (fin.good()) {

    }
    else {
        cout << "File not found." << endl;
    }
}
