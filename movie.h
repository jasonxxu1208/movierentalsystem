#ifndef MOVIE_H_
#define MOVIE_H_
#include<iostream>
#include<string>

using namespace std;
// abstract base class
class Movie{
    public:
    // constructors
    Movie();
    Movie(int stock, string director, string title, int year);
    // destructor
    virtual ~Movie();
    // functions
    void changeStock(int input);
    virtual void print(ostream& os)const = 0;
    friend ostream& operator<<(ostream& os, const Movie& movie);
    int getYear() const;
    string getTitle() const;
    string getDirector() const;
    int getStock() const;

    protected:
    string title;  // title of the movie
    string director;  // director of the movie
    int stock;  // stock of the movie in the store
    int year;   // release year of the movie

};
#endif
