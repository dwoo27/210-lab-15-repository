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
    cout << "  Year released: " << year << endl;
    cout << "  Screenwriter: " << writer << endl;
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
    string tempTitle, tempYear, tempWriter;

    if (fin.good()) {
        for (int i = 0; i < MOVIES; i++) { //for each set of 3 lines, loop takes info
            getline(fin, tempTitle);
            getline(fin, tempYear);
            getline(fin, tempWriter);

            Movie temp; //creates new temp object for each iteration
            temp.setTitle(tempTitle); //populates object with read info
            temp.setYear(atoi(tempYear.c_str()));
            temp.setWriter(tempWriter);

            movies[i] = temp;

       }

        fin.close();
    
    }
    else {
        cout << "File not found." << endl;
    }
}

void coutMovies(array<Movie, MOVIES>& movies) {
    for (int i = 0; i < MOVIES; i++) {
        movies[i].print();
        cout << endl;
    }
}