#include <iostream>
using namespace std;

		constexpr double pi = 3.14159265;		
		constexpr double stopnie_na_radiany( double stopni )
		{
			return pi*stopni/180;
		}



		constexpr long long silnia( int n )
		{
			return n > 0 ? n * silnia( n - 1 ) : 1;
		

			if( n > 0 )
				return n * silnia( n - 1 );
			else
				return 1;
		}



		constexpr double nasz_sinus( double x )
		{
			return x
				-(x*x*x)/silnia(3)
				+(x*x*x*x*x)/silnia(5)
				-(x*x*x*x*x*x*x)/silnia(7)
				+(x*x*x*x*x*x*x*x*x)/silnia(9);
		}

		constexpr double tablica_sinusow[] = { nasz_sinus( stopnie_na_radiany(0)),
						       nasz_sinus( stopnie_na_radiany(2.5)),
						       nasz_sinus( stopnie_na_radiany(30)),
						       nasz_sinus( stopnie_na_radiany(7.5)) };


int main()
{
	for( int i = 0; i < 4; i++ )
	{
		cout << "sinus " << i * 2.5 << " stopni to = " << tablica_sinusow[i] << endl;
	}

}
