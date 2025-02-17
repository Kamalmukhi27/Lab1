// #include <iostream>
// #include <math.h>
// using namespace std;

// class Complex
// {
// private:
//     float re;
//     float im;

// public:
//     Complex(float r, float i)
//     {
//         re = r;
//         im = i;
//     }
//     Complex(float r)
//     {
//         re = r;
//         im = 0.0;
//     }
//     ~Complex() {}

//     double Magnitude()
//     {
//         return sqrt(re * re + Imag() * Imag());
//     }

//     float Real() { return re; }
//     float Imag() { return im; }

//     Complex operator+(Complex b)
//     {
//         return Complex(re + b.re, im + b.im);
//     }

//     Complex operator=(Complex b)
//     {
//         re = b.re;
//         im = b.im;
//         return *this;
//     }

//     Complex operator*(Complex b)
//     {
//         return Complex(re * b.re - im * b.im, re * b.im + im * b.re);
//     }
// };

// int main()
// {
//     Complex a(1.0, 1.0);
//     Complex *b = new Complex(5.0);
//     Complex c(0, 0);
//     cout << "a real = " << a.Real() << " imaginary = " << a.Imag() << endl;
//     cout << "b real = " << b->Real() << " imaginary = " << b->Imag() << endl;
//     c = a + (*b);
//     cout << "c real = " << c.Real() << " imaginary = " << c.Imag() << endl;

//     c = a * (*b);

//     cout << "c real = " << c.Real() << " imaginary = " << c.Imag() << endl;
//     delete b;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template <class T>
// class Mypair
// {
//     T a, b;
//     public :
//     Mypair(T first, T second)
//     {
//         a = first ;
//         b = second;
//     }

//     T getMax();
// };

// template <class T>
// T Mypair<T>::getMax()
// {
//     T retval;
//     retval = a>b? a:b;
//     return retval;
// }

// int main()
// {
//     int i = 5;
//     int j=6;
//     int k;
//     long l=10, m=5,n;
//     Mypair<int> obj1(i,j);
//     k = obj1.getMax();

//     Mypair<long> obj2(l,m);
//     n=obj2.getMax();

//     cout<<k<<endl<<l;

// }


// #include <iostream>
// using namespace std;

// template <class T>
// class mypair
// {
//     T a, b;
//     public:
//     mypair (T first, T second)
//     {
//         a = first; b = second;
//     }

//     T getmax ();
//     T getmin ();
// };

// template <class T>
// T mypair<T>::getmax ()
// {
//     T retval;
//     retval = a > b ? a : b;
//     return retval;
// }

// template <class T>
// T mypair<T>::getmin(){
//     T retval;
//     retval = a < b? a:b;
//     return retval;
// }

// int main ()
// {
//     mypair <int> myobject (100, 75);
//     cout << myobject.getmax()<<" ";
//     cout<< myobject.getmin();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template <class T, int N>
// class mysequence
// {
//     T memblock[N];
// public:
//     void setmember(int x, T value);
//     T getmember(int x);
//     T getmax();  
//     T getmin();  
// };

// template <class T, int N>
// void mysequence<T, N>::setmember(int x, T value)
// {
//     memblock[x] = value;
// }

// template <class T, int N>
// T mysequence<T, N>::getmember(int x)
// {
//     return memblock[x];
// }

// template <class T, int N>
// T mysequence<T, N>::getmax()
// {
//     T maxVal = memblock[0];
//     for (int i = 1; i < N; i++)
//     {
//         if (memblock[i] > maxVal)
//             maxVal = memblock[i];
//     }
//     return maxVal;
// }

// template <class T, int N>
// T mysequence<T, N>::getmin()
// {
//     T minVal = memblock[0];
//     for (int i = 1; i < N; i++)
//     {
//         if (memblock[i] < minVal)
//             minVal = memblock[i];
//     }
//     return minVal;
// }

// int main()
// {
//     mysequence<int, 5> myints;
//     mysequence<double, 5> myfloats;

//     myints.setmember(0, 100);
//     myfloats.setmember(3, 3.1416);

//     cout << myints.getmember(0) << '\n';
//     cout << myfloats.getmember(3) << '\n';

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {
//     ofstream outFile;
//     outFile.open("fout.txt");

//     ifstream inFile("fin.txt");
//     if (!inFile) {
//         cerr << "Error opening input file!" << endl;
//         return 1;
//     }

//     char ch;
//     int charCount = 0, wordCount = 0, sentenceCount = 0;
//     bool inWord = false;

//     while (inFile.get(ch)) {
//         outFile << ch;
//         charCount++;

//         if (ch == ' ' || ch == '\n' || ch == '\t') {
//             if (inWord) {
//                 wordCount++;
//                 inWord = false;
//             }
//         } else {
//             inWord = true;
//         }

//         if (ch == '.' || ch == '!' || ch == '?') {
//             sentenceCount++;
//         }
//     }

//     if (inWord) {
//         wordCount++; // Count last word if file doesn't end with space.
//     }

//     outFile << "\n\nCharacter count = " << charCount;
//     outFile << "\nWord count = " << wordCount;
//     outFile << "\nSentence count = " << sentenceCount << endl;

//     inFile.close();
//     outFile.close();
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class House {
// public:
//     string owner;
//     string address;
//     int bedrooms;
//     float price;

//     void readHouse() {
//         cout << "Enter Owner: ";
//         cin.ignore();  
//         getline(cin, owner);

//         cout << "Enter Address: ";
//         getline(cin, address);

//         cout << "Number of Bedrooms?: ";
//         cin >> bedrooms;

//         cout << "Price: ";
//         cin >> price;
//     }

//     void displayHouse() {
//         cout << owner << "\t" << address << "\t" << bedrooms << "\t" << price << endl;
//     }
// };

// int main() {
//     House available[100];  
//     int count = 0;         
//     char choice;

//     do {
//         if (count >= 100) {
//             cout << "Maximum house limit reached\n";
//             break;
//         }

//         available[count].readHouse();
//         count++;

//         cout << "\nEnter another house? (Y/N): ";
//         cin >> choice;
//         cin.ignore();  

//     } while (choice == 'Y' || choice == 'y'); // if user press N or n then the progrom will not take inputs it will display the results

//     cout << "\nThe output should look like:\n";
//     cout << "Owner\tAddress\tBedrooms\tPrice" << endl;

//     for (int i = 0; i < count; i++) {
//         available[i].displayHouse();
//     }

//     return 0;
// }


// #include <iostream>
// #include <fstream>  
// using namespace std;

// class Student {
// private:
//     string name;  
//     int grades[10]; 
//     float average;  

// public:
//     
//     void readFromFile(ifstream &inFile, int numGrades) {
//         inFile >> ws; // Ignore whitespace
//         getline(inFile, name); it gets 2 argument the source from where it gets the input and                                the other argument is where it store..
//         int sum = 0;
        
//         // Read grades and calculate sum
//         for (int i = 0; i < numGrades; i++) {
//             inFile >> grades[i];
//             sum += grades[i];
//         }
        
//         // Calculate and store average
//         average = (float)sum / numGrades;
//     }

//     // Function to display student details
//     void display(int numGrades) const {
//         cout << name << " ";
//         for (int i = 0; i < numGrades; i++) {
//             cout << grades[i] << " ";
//         }
//         cout << "Avg: " << average << endl;
//     }

//     // Getter function for average
//     float getAverage() const {
//         return average;
//     }

//     // Getter function for name
//     string getName() const {
//         return name;
//     }
// };

// int main() {
//     string fileName;
//     cout << "Enter filename: ";
//     cin >> fileName;

//     // Open the file
//     ifstream inFile(fileName);
//     if (!inFile) {
//         cout << "Error: Cannot open file!" << endl;
//         return 1;
//     }

//     int numStudents, numGrades;
//     inFile >> numStudents >> numGrades; 

//     Student students[numStudents];

//     // Read data for each student
//     for (int i = 0; i < numStudents; i++) {
//         students[i].readFromFile(inFile, numGrades);
//     }
    
//     inFile.close(); 

//     cout << "\nStudent Data:\n";
//     for (int i = 0; i < numStudents; i++) {
//         students[i].display(numGrades);
//     }

//     float classSum = 0, highest = 0, lowest = 100;
//     for (int i = 0; i < numStudents; i++) {
//         float avg = students[i].getAverage();
//         classSum += avg;

//         if (avg > highest) highest = avg;
//         if (avg < lowest) lowest = avg;
//     }

//     float classAverage = classSum / numStudents;

//     cout << "\nClass Average: " << classAverage << endl;
//     cout << "Highest Average: " << highest << endl;
//     cout << "Lowest Average: " << lowest << endl;

//     cout << "\nStudents below class average:\n";
//     for (int i = 0; i < numStudents; i++) {
//         if (students[i].getAverage() < classAverage) {
//             cout << students[i].getName() << endl;
//         }
//     }

//     return 0;
// }


