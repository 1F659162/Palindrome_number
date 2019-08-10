#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string snum , Palindrome;
	int lnum , last ;
	do 
	{
		cout << ">> Program Palindrome Number << " << endl;
		cout << "Eter integer number (0 for Exit) : " ;
		cin >> snum ;
		if (snum != "0")
		{
			lnum = snum.length();
			last = lnum - 1;
	
			for (int i = 0 ; i < lnum/2 ; i++ )
			{
				if(snum.at(i) == snum.at(last)) 
				{
					cout << "Digit " << snum.at(i) << " Equal to Digit " << snum.at(last) << endl;
					Palindrome = " is Palindrome Number.";
				}else 
				{
					cout << "Digit " << snum.at(i) << " Not equal to Digit " << snum.at(last) << endl;
					Palindrome = " isn't Palindrome Number.";
					break;
				}
				last -= 1;
			}
			if ((lnum % 2) == 1 && last == lnum/2) cout << "Digit " << snum.at(lnum/2) << " Equal to Digit " << snum.at(lnum/2) << endl;
			cout << "Your enter number : " << snum  << Palindrome << endl << endl;
		}else cout << "Exit program." << endl << endl;
	}while(snum != "0");
	return(0);
}