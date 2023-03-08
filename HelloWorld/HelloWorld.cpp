#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <math.h>

int a = 50, b = 25, c = 75;

using namespace std;

void printHello();
void printSum(int a, int b);

int main()
{

	printf("Hello, world!\n");

	cout << "Ten " << 10 << " Twenty " << 20 << " Thirty " << 30 << endl;

	printf("a: %d, b: %d\n", a, b);
	printf("a: %d, b: %d\n", b, a);
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	printf("a: %d, b: %d, c: %d\n"); //with no variables

	//swap values
	printf("Swap values of a & b\n");
	c = a;
	a = b;
	b = c;
	printf("a: %d, b: %d\n", a, b);

	//Triangle
	cout << endl; 
	for (int i = 6; i >= 1; --i)
	{
		for (int j = 1; j < i; ++j)
		{
			cout << "&_";
		}
		cout << "&" << endl;
	}

	//print new line
	printf("\n");
	int array[] = {1,2,3,4};
	for (size_t i = 0; i < (sizeof(array) / sizeof(int)); ++i)
	{
		printf("%hd \n", array[i]);
	};

	//print Alphabet
	printf("\n"); 
	char alphabet[26];
	int a = 1;
	for (size_t i = 'a'; i <= 'z'; ++i)
	{
		alphabet[i - 'a'] = i;
	};
	alphabet[25] = '\0';
	printf("%s \n", alphabet);

	//what is your age
	printf("\n");
	int age;
	cout << "What's your age? ?\n";
	cin >> age;
	cout << "Next year, you will be " << age + 1 << " !" << endl;

	cout << "What's your age? ?\n";
	scanf_s("%d", &age, sizeof(age));
	printf("Next year, you will be %d !\n", age+1);

	//previous letter
	printf("\n");
	char answer;
	cout << "Give me a character. \n";
	cin >> answer;
	char previous = (char)(answer - 1);
	cout << "The letter " << previous << " is before " << answer << ".\n";

	//seconds passed
	printf("\n");
	int secondsPassed;
	cout << "How many second have passed?\n";
	cin >> secondsPassed;
	int hours = secondsPassed / 3600;
	secondsPassed %= 3600;
	int minutes = secondsPassed / 60;
	secondsPassed %= 60;
	cout << hours << " hours, " << minutes << " minutes, " << secondsPassed << " seconds\n";

	//higer value
	cout << endl;
	cout << "Give me two numbers Separated by Comma. Like ' - 2, 5' \n";
	int num1, num2;
	int result = scanf_s("%d, %d", &num1, &num2);

	if (num1 > num2) cout << "The higher number is " << num1 << "\n";
	
	else if (num1 < num2) cout << "The higher number is " << num2 << "\n";
	
	else cout << "The numbers are equal.\n";

	//char type
	cout << endl;
	char input;
	cout << "Enter a single character: ";
	cin >> input;

	if (input >= 'A' && input <= 'Z') cout << "The character is a uppercase-letter." << endl;
	
	else if (isalpha(input)) cout << "The character is a lowercase-letter." << endl;
	
	else if (isdigit(input)) cout << "The character is a digit." << endl;
	
	else cout << "The character is a symbol." << endl;

	//power
	cout << endl;
	string inputPower;
	cout << "Give me a base and a power separated by ^. Like '2 ^ 5'\n";
	cin >> inputPower;
	int pos = inputPower.find("^");
	string baseString = inputPower.substr(0, pos);
	string expString = inputPower.substr(pos + 1);
	double base = stod(baseString);
	double exp = stod(expString);
	double answerPower = pow(base, exp);
	cout << base << "^" << exp << " = ";
	for (int i = 0; i < exp; ++i)
	{
		cout << base;
		if (i < exp - 1)
		{
			cout << "*";
		}
	}
	cout << " = " << answerPower << "\n";

	//print Hello
	cout << endl;
	printHello();

	//print Sum
	cout << endl;
	void printSum();


	return 0;
}

void printHello()
{
	printf("Hello!\n");
}

void printSum(int a, int b)
{
	printf("%d", a + b);
}
