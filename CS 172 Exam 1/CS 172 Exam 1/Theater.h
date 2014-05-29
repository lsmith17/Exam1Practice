#include<string>
using namespace std;

class Theater{
private:
	string name;
	string telephone;
	double priceofpop;
	double priceofcoke;
public:
	Theater(string Name, string Phone);	
	void AddMovie(Movie& Movie);	
	string GetMovieForHour(int hour);
	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();	
	int GetCokePrice();			



	
};