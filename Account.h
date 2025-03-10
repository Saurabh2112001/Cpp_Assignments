#include<string>
using namespace std;
class Account{
      private:
              static int count;
	      double Balance;
	      string Name;
	      int AccNo;

     public:
	      Account();
	      Account(double, string);
	      void Accept();
	      void Display();
	      int GetAccNo(); 
};
