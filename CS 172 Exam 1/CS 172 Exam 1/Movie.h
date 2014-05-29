#include<string>
using namespace std;

class Movie{
private:
	string title;
	string genre;
	int showtime;
public:
	Movie(){
		title = "The Longest Yard";
		genre = "Comedy";
	}
	Movie(string title, string genre, int showtime){

	}
	string GetTitle();
	string GetGenre();
	int GetShowtime();
};