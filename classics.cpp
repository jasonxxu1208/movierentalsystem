#include "classics.h"

// Constructor
Classics::Classics(int stock, string director, string title, string firstName, string lastName, int month, int year):Movie(stock, director, title, year){
    this->firstName = firstName;
    this->lastName = lastName;
    this->month = month;
}
// display the information of the movie
void Classics::print(ostream& os)const{
    os << "Classics " << title << ", Director: " << director << ", Major Actor: " << firstName << " " << lastName << ", Release: " << month << " " << year << ", Stock: " << stock;
}
/* This method is used to sort the classics movies to store them
 * in the hashtable. It compares the release year of the movie
 * and if they have same release year, then compare month, lastname
 * and firstname
 */   
bool Classics::operator<(const Classics& other)const{
    if (year == other.year) {
        if (month == other.month) {
            if (firstName == other.firstName) {
                return lastName < other.lastName;
            } else {
                return firstName < other.firstName;
            }
        }
        return month < other.month;
    } else {
        return year < other.year;
    }
}
// same as operator<
bool Classics::operator>(const Classics& other)const{
    return !(*this < other);
}
// return the firstname of major actor
string Classics::getFirstName() const{
    return firstName;
}
// return the last name of major actor
string Classics::getLastName() const{
    return lastName;
}
// return the release month
int Classics::getMonth() const{
    return month;
}
// return the release year
int Classics::getYear() const{
    return year;
}
