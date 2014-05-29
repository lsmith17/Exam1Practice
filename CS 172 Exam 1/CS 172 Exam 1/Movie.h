#ifndef MOVIE_H
#define MOVIE_H
#include<string>
using namespace std;

class Movie{
private:
	string title;
	string genre;
	int showtime;
public:
	Movie(){
	}
	Movie(string title, string genre, int showtime){

	}
	string GetTitle();
	string GetGenre();
	int GetShowtime();
};
#endif