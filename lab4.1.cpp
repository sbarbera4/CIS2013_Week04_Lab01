#include <iostream>
using namespace std;

int num = 0;

void printStuff(int num) 
{
	cout << "Printing " << (num * 5) << endl;
}

int main()
{
for(int i=0; i<10;i++)
{
	printStuff(i);
}

/*
void printStuff() 
{
	cout << "Printing Stuff" << endl;
}

int counter()
{
	num++;

}


int main()
{

	for(num;num>10;counter())
	{
		printStuff();
	}

*/

printStuff(1000);
	return 0;
}