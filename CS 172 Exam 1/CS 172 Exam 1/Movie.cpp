#include"Movie.h"

Movie::Movie(){
	title = "The Longest Yard";
	genre = "Comedy";
}
Movie::Movie(string new_title, string new_genre, int new_showtime){
	new_title = title;
	new_genre = genre;
	new_showtime = showtime;
}
string Movie::GetTitle(string title){
	return title;
}
string Movie::GetGenre(string genre){
	return genre;
}
int Movie::GetShowtime(int showtime){
	return showtime;
}
