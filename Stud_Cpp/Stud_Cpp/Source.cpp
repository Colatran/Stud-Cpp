#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;



/*_______________________________________________________________________________________
|																						|
|																						|
|		[https://www.youtube.com/watch?v=Rub-JsjMhWY&t=554s]							|
|																						|
|_______________________________________________________________________________________*/
//----------------------------------------------------------------------------------------------------//



/*_______________________________________________________________________________________
|																						|
|																						|
|		//---------------VARIABLE TYPES---------------//	[0:00:00] - [0:06:00]		|
|																						|
|_______________________________________________________________________________________*/
/*----------------------------------------------------------------------------------------------------//
int main(){

	cout << "Helo world" << endl;								//endl		-	paragraf
	const double PI = 3.1415926535;								//const		-	constant variable
	char myGrade = 'A';
	bool isHappy = true;
	int largestInt = 2147483647;
	float favNum = 3.141592;
	double otherfavNum = 1.6180339887;
	cout << "Favourite Number " << favNum << endl;

	//other types include
	//short int		-	at least 16 bits
	//long int		-	at least 32 bits
	//long long int	-	at least 64 bits
	//unsigned int	-	same size as signed version
	//long double	-	not less then double

	cout << "Size of char " << sizeof(myGrade) << endl;			//sizeof	-	size of variable type
	cout << "Size of bool " << sizeof(isHappy) << endl;
	cout << "Size of int " << sizeof(largestInt) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherfavNum) << endl;

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------ARYTHMETIC---------------//	[0:06:00] - [0:09:20]			|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
int main(){

	cout << "5 + 2 = " << 5 + 2 << endl;	//'+'	-	add
	cout << "5 - 2 = " << 5 - 2 << endl;	//'-'	-	subtract
	cout << "5 * 2 = " << 5 * 2 << endl;	//'*'	-	multiply
	cout << "5 / 2 = " << 5 / 2 << endl;	//'/'	-	divide
	cout << "7 % 2 = " << 5 % 2 << endl;	//'%'	-	emainder of a division

	int five = 5;
	cout << endl << "var = 5" << endl;
	cout << "var++ = " << five++ << " Increments after the action" << endl;		five = 5;
	cout << "++var = " << ++five << " Increments first" << endl;				five = 5;
	cout << "var-- = " << five-- << " Decrements after the action" << endl;		five = 5;
	cout << "--var = " << --five << " Decrements first" << endl;				five = 5;

	cout << endl << "var += 6; *equivalent* var = var + 6;" << endl << endl;

	cout << "4 / 5 = " << 4 / 5 << endl;
	cout << "4 / 5 = " << (float)4 / 5 << endl;	//(variable type that will transform into) other variable type

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------IF STATMENT---------------//	[0:09:20] - [0:12:00]			|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
int main(){

	// '=='		-	equal to
	// '!='		-	not equal to
	// '>'		-	grater than
	// '<'		-	less than
	// '>='		-	grater than or equal to
	// '<='		-	less than or equal to

	// '&&'		-	and
	// '||'		-	or
	// '!'		-	not

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if ((age >= 1) && (age < 16)) {
	cout << "You can't drive" << endl;
	}
	else if (!isNotIntoxicated) {
	cout << "You can't drive" << endl;
	}
	else if (age >= 80 && ((age > 100 || ((age - ageAtLastExam) > 5)))) {
	cout << "You can't drive" << endl;
	}
	else { cout << "You can drive" << endl; }

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------SWITCH---------------//	[0:12:00] - [0:13:50]				|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
int main(){

	int greetingOption = 2;

	switch (greetingOption) {
	case 1:
	cout << "bonjour" << endl;
	break;
	case 2:
	cout << "Hola" << endl;
	break;
	case 3:
	cout << "Hallo" << endl;
	break;
	default:
	cout << "Hello" << endl;
	}

	int largestNum = (5 > 2) ? 5 : 2;	// variable = condition ? true : false
	cout << largestNum << endl;

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________________________
	|																										|
	|																										|
	|		//---------------ARRAYS / LOOPS / STRINGS---------------//	[0:13:50] - [0:27:47]				|
	|																										|
	|_______________________________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
int main(){

	int myFavNums[5];
	int badNums[5] = { 4, 13, 14, 24, 34 };
	cout << "Bad Number 1: " << badNums[0] << endl;

	char myName[5][5] = { { 'D', 'e', 'r', 'e', 'k' }, { 'B', 'a', 'n', 'a', 's' } };
	cout << "2nd letter in the 2nd array" << myName[1][1] << endl;	//multyDimArray[select array index][select value in that array]

	myName[0][2] = 'e';												// change a value in the 1st array
	cout << "New Value " << myName[0][2] << endl;

	for (int i = 1; i <= 10; i++){
	cout << i << endl;
	}

	for (int j = 0; j < 5; j++) {
	for (int k = 0; k < 5; k++) {
	cout << myName[j][k];
	}
	}

	int randNum = (rand() % 100) + 1;								// rand() % X + Y	-	generates a random number in the range of X starting in Y
	while (randNum != 100){
	cout << randNum << endl;
	randNum = (rand() % 100) + 1;
	}

	int index = 1;													// while loop cand do the same thing as for loop
	while (index <= 10){
	cout << index << endl;
	index++;
	}

	string numberGuessed;
	int intNumberGuessed = 0;
	do {
	cout << "Guess between 1 and 10: ";
	getline(cin, numberGuessed);
	intNumberGuessed = stoi(numberGuessed);							//stoi()	-	converts string to int
	cout << intNumberGuessed << endl;								//stod()	-	converts string to double
	} while (intNumberGuessed != 4);
	cout << "You win" << endl;

	char happyArray[6] = { 'H', 'a', 'p', 'p', 'y', '\0' };			//c string
	string birthdayString = " Birthday";							//c++ string
	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is your name ";
	getline(cin, yourName);
	cout << "hello " << yourName << endl;

	string wholeName = yourName.assign(yourName);					//str1.assign(str2)			-	str1 = str2
	cout << wholeName << endl;
	string firstName = wholeName.assign(wholeName, 0, 5);			//str1.assign(str2, X, Y)	-	str2 - string I want to work with	/	X - where I want to start puling characters	/	Y - where I want to stop
	cout << firstName << endl;
	int lastNameIndex = yourName.find("Banas", 0);					//str1.find("str2", X)		-	str1 - find in, str2 - the porcion I want to find, X - the index I want to start searching
	cout << "Index for last name " << lastNameIndex << endl;
	yourName.insert(5, " Justin");									//str1.insert(X, str2)		-	put str2 at index X in str1
	cout << yourName << endl;
	yourName.erase(6, 7);											//str1.erase(X, Y);			-	erase X characters starting at the index of Y
	cout << yourName << endl;
	yourName.replace(6, 5, "Maximus");								//str.replace(X, Y, str2);	-	replace Y characters starting at the index of X with str2

	double eulerConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;
	cout << "What is Euler's Constant? ";
	getline(cin, eulerGuess);
	eulerGuessDouble = stod(eulerGuess);
	if (eulerGuessDouble == eulerConstant){
	cout << "You are right" << endl;
	}
	else {
	cout << "You are wrong" << endl;
	}
	cout << "Size of String " << eulerGuess.size() << endl;			//str1.size()			-	gives size of string
	cout << "Is string empty " << eulerGuess.empty() << endl;		//str1.empty()			-	checks if string str1 is empty, 0-not empty/1-empty
	cout << eulerGuess.append(" was your gess") << endl;			//str1.append("str2")	-	add strings together
	cout << eulerGuess << endl;

	string dogString = "b";
	string catString = "ab";
	cout << dogString.compare(catString) << endl;					//str1.compare(str2)	- 0 if str1 = str2 (don't see use in the other results)
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------VECTORS---------------//	[0:27:47] - [0:30:15]				|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
	//Vectors are like arrays but their size can change
int main(){

	vector <int> lotteryNumVect(10);
	int lotteryNumArray[5] = { 4, 13, 14, 24, 34 };
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);	//vector.insert(a, b, c)				-	insert values in the vector		//a-	vector.begin()	-	insert the values at beginning of the vector
	cout << lotteryNumVect.at(2) << endl;																																//b-	array of values tha I want to insert
																																										//c-	array + X		-	insert only the first X values of array
	lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);									//vector.insert(vector.begin() + X, Y)	-	insert values at the X index, Y the value I want to insert
	cout << lotteryNumVect.at(5) << endl;

	lotteryNumVect.push_back(64);															//vector.push_back(X)					-	insert the value X at the end of vector
	cout << "Final Value " << lotteryNumVect.back() << endl;								//vector.back()							-	get the last value
	lotteryNumVect.pop_back();																//vector.pop_back()						-	remove the final value
	cout << "First Value " << lotteryNumVect.front() << endl;								//vector.front()						-	get the first value
	cout << "Is Vector Empty? " << lotteryNumVect.empty() << endl;							//vector.empty()						-	check if vector is empty, 0 if not, 1 if it is
	cout << "Size " << lotteryNumVect.size() << endl;										//vector.size()							-	get vector size

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------FUNCTIONS---------------//	[0:30:15] - [0:34:55]				|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//

int addNumbers(int firstNum, int secondNum = 0) {				//int secondNum = 0 - this case the funcion dosen't need the second atribute so it has a default value, and they have to come last
	int combineValue = firstNum + secondNum;
	return combineValue;
}

int addNumbers(int firstNum, int secondNum, int thirdNum) {		//We can make funcions with the same name but they must have diferent attributes
	int combineValue = firstNum + secondNum + thirdNum;
	return combineValue;
}

int getFactorial(int number){
	int sum;
	if (number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;
}

int main(){
	cout << addNumbers(1) << endl;
	cout << addNumbers(1, 5, 6) << endl;
	cout << "the factorial of 3 is " << getFactorial(3) << endl;
	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/


/*main() {
	char input[100];
	ofstream fl("GTASAsf1.b");
	return 0;
}*/

	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------FILEIO---------------//	[0:34:55] - [0:38:35]				|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
int main(){

	string steveQuote = "A day without sunshine is like, you know, night";
	ofstream writer("stevequote.txt");			//ofstream				-	output file stream
	if (!writer){
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer << steveQuote << endl;			//write in the file
		writer.close();							//fileVariable.close();	-	close file
	}
	ofstream writer2("stevequote", ios::app);
	//ios::app		-	append to whats there
	//ios::binary	-	treat the file as binary
	//ios::in		-	open a file to read input
	//ios::trunc	-	default
	//ios::out		-	open a file to write output
	if (!writer2){
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		writer2 << "\n . Steve Martin" << endl;
		writer2.close();
	}

	char letter;
	ifstream reader("stevequote.txt");			//ifstream				-	input file stream
	if (!reader){
		cout << "Error opening file" << endl;
		return -1;
	}
	else {
		for (int i = 0; !reader.eof(); i++){	//reader.eof()			-	end of the file
			reader.get(letter);
			cout << letter;
		}
		cout << endl;
		reader.close();
	}

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________________
	|																								|
	|																								|
	|		//---------------EXCEPION HANDLING---------------//	[0:38:35] - [0:40:00]				|
	|																								|
	|_______________________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
	//Exeption handling is how to deal with actions tha can cause errors (ex: /0)
int main(){

	int number = 0;
	try{									//try{}	-	use it to surround the cod that could potencialy cause an error
		if (number != 0){
			cout << 2 / number << endl;
		}
		else throw(number);					//throw	-	it looks for the catch
	}
	catch (int number){						//catch	-	directed by the throw
		cout << number << "is not valid" << endl;
	}

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------POINTERS---------------//	[0:40:00] - [0:47:10]				|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
	//With pointers we can pass the reference of the variables insted of the value:
	//Without pointers: int num=5; funcion(num) = funcion(5)
	//With pointers: int num=5; funcion(num) = funcion(num)
void makeMeYoung(int *age){
	cout << "I used to be " << *age << endl;
	*age = 21;
}

void actYourAge(int &age){
	age = 39;
}

int main(){

	int myAge = 39;
	char myGrade = 'A';
	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "myAge is located at " << &myAge << endl;		//&	-	reference operator of the memory location

	int *agePtr = &myAge;									//*	-	to reference to the data
	cout << "Address of pointer " << agePtr << endl;
	cout << "Data at memory address " << *agePtr << endl;	//*	-	to dereference to the data

	int badNums[5] = { 4, 13, 14, 24, 34 };
	int *numArrayPtr = badNums;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr++;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	cout << "Address " << badNums << " Value " << *badNums << endl;

	makeMeYoung(&myAge);
	cout << "I'm " << myAge << " years old now" << endl;

	int &ageRef = myAge;
	cout << "myAge: " << myAge << endl;
	ageRef++;
	cout << "myAge: " << myAge << endl;

	actYourAge(ageRef);
	cout << "myAge: " << myAge << endl;

	cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*_______________________________________________________________________________________
	|																						|
	|																						|
	|		//---------------CLASSES---------------//	[0:47:10] - [1:02:19]				|
	|																						|
	|_______________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
class Animal {
//	private		//private variables can only be changed by funcions inside the class
//	public		//oposite of private - necessary to access the private values
//	protected:	//is going to be available only to objects of the same class or subclass
	private:
		int height;
		int weight;
		string name;

		static int numOfAnimals;								//static variable values is going to be shared by every object of this class

	public:
		int getHeight(){ return height; }						//encapsulation	-	to protect the values that are going to be stored
		int getWeight(){ return weight; }
		string getName(){ return name; }
		void setHeight(int cm){ height = cm; }
		void setWeight(int kg){ weight = kg; }
		void setName(string animalName){ name = animalName; }
//		void setAll(int, int, string);							//declare a prototype of a funcion
		Animal(int, int, string);								//Constructor	-	has the same name as the class	-	called when an object of this class is created
		~Animal();												//Destructor
		Animal();												//a constructor that dosen't recive nothing	-	overloaded constructor
//basically you declare the classe's funcions inside the class (with the prototypes) to define them outside

		static int getNumOfAnimals(){ return numOfAnimals; }	//static funcions/method are atached to the class not ot the object, they can also only access static variables

		void toString();										//is going to print out every thing thatg we have in our class
};

int Animal::numOfAnimals = 0;

//void Animal::setAll(int height, int weight, string name){		//defining the funcion setall prototype in the class
//	this -> height = height;									//this ->	-	to refer to especific object
//	this -> weight = weight;
//	this -> name = name;
//	Animal::numOfAnimals++;
//}//this is the same as the constructor	\/	\/	\/-down here

Animal::Animal(int height, int weight, string name){			//defining the constructor
	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;
}

Animal::~Animal(){												//defining the destructor
	cout << "Animal " << this->name << "destroyed" << endl;
	Animal::numOfAnimals--;
}

Animal::Animal(){												//defining the overloaded constructor
	Animal::numOfAnimals++;
}

void Animal::toString(){
	cout << this->name << " is " << this->height << " cms tall and " << this->weight << " kgs in weight" << endl;
}

class Dog : public Animal {										//inherit all atributes and methods into another class (child class)
	private:
		string sound = "Woof";
	public:
		string getSound(){ return sound; }
		Dog(int, int, string, string);
		Dog() : Animal(){};
		void toString();
};

Dog::Dog(int height, int weight, string name, string bark) : Animal(height, weight, name){
	this->sound = bark;
}

void Dog::toString(){
	cout << this->getName() << " is " << this->getHeight() << " cms tall and " << this->getWeight() << " kgs in wight and says " << this->getSound() << endl;
}

int main(){

	Animal fred;

	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");
	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and " << fred.getWeight() << " kgs in weight" << endl;

	Animal tom(36, 15, "Tom");
	cout << tom.getName() << " is " << tom.getHeight() << " cms tall and " << tom.getWeight() << " kgs in weight" << endl;

	Dog spot(38, 16, "Spot", "Woof");
	cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;
	spot.getSound();
	tom.toString();
	spot.toString();

	spot.Animal::toString();

	cin.get();
}
//----------------------------------------------------------------------------------------------------*/



/*_______________________________________________________________________________________________________________
|																												|
|																												|
|		//---------------VIRTUAL METHODS & POLYMORPHISM---------------//	[1:02:19] - [1:07:47]				|
|																												|
|_______________________________________________________________________________________________________________*/
/*----------------------------------------------------------------------------------------------------//
class Animal{
public:
	void getFamily(){cout << "We are animals" << endl;}
	virtual void getClass(){ cout << "I'm an Animal" << endl; }	//virtual	-	when we know that a method or atribute is going to be overited by an inherit class
};

class Dog : public Animal{
public :
	void getClass(){ cout << "I'm a Dog" << endl; }
};

class GermanShepard : public Dog{
public:
	void getClass(){ cout << "I'm a German Shepard" << endl; }
	void getDrived(){ cout << "I'm an Animal and Dog" << endl; }
};

void whatClassAreYou(Animal *animal) {
	animal->getClass();
}

int main(){
	Animal *animal = new Animal;
	Dog *dog = new Dog;

	animal->getClass();
	dog->getClass();

	whatClassAreYou(animal);
	whatClassAreYou(dog);

	Dog spot;
	GermanShepard max;

	Animal* ptrDog = &spot;
	Animal* ptrGShepard = &max;

	ptrDog->getFamily();
	ptrDog->getClass();

	ptrGShepard->getFamily();
	ptrGShepard->getClass();

cin.get();
}
	//----------------------------------------------------------------------------------------------------*/



	/*___________________________________________________________________________________________
	|																							|
	|																							|
	|		//---------------POLYMORPHISM---------------//	[1:07:47] - [1:10:32]				|
	|																							|
	|___________________________________________________________________________________________*/
	/*----------------------------------------------------------------------------------------------------//
class Animal {
public:
	virtual void makeSound() { cout << "The Animal says grr" << endl; }
};

class Dog : public Animal {
public:
	void makeSound() { cout << "The Dog says woof" << endl; }
};

class Cat : public Animal {
public:
	void makeSound() { cout << "The Cat says meow" << endl; }
};

class Car {
public:
	virtual int getNumWheels() = 0;
	virtual int getNumDoors() = 0;
};

class StationWagon : public Car {
public:
	int getNumWheels() { cout << "Station wagon has 4 wheels" << endl; return 1; }
	int getNumDoors() { cout << "Station wagon has 4 doors" << endl; return 1; }
	StationWagon() {}
	~StationWagon();
};

int main() {
	Animal* pCat = new Cat;
	Animal* pDog = new Dog;

	pCat->makeSound();
	pCat->makeSound();

	Car* statonWagon = new StationWagon();

	cin.get();
}
//----------------------------------------------------------------------------------------------------*/