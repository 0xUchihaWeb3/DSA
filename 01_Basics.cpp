#include <bits/stdc++.h>
using namespace std;

//Functons declaraion
void printHello(){
  cout << "Hello" << endl;
}

void doSomething(int a){
  a = a + 10;
  cout << a << endl;
}

void doSomethingAgain(int &a){
  a = a + 10;
  cout << a << endl;
}

int main() {
  cout << "Hello World!" << endl << "Hello World!" << endl;
  int x, y;
  cin >> x >> y;
  cout << "the value of x is " << x << " and the value of y is " << y;

  // Datatypes

  // Integer
  int a = 10;
  long b = 15;
  long long c = 10000000000;
  cout << a << endl << b << endl << c << endl;

  // Float
  float d = 10.5;
  cout << d << endl;

  // Double
  double e = 100.5;
  cout << e << endl;

  // Character
  char f = 'a';
  cout << f << endl;

  // Boolean
  bool g = true;
  cout << g << endl;

  // String
  string h = "Hello Itachi!";
  cout << h << endl;
  // string str;
  // getline(cin, str);
  // cout << str << endl;

  //If-Else
  int age;
  cin >> age;
  if (age >= 18){
    cout << "You are an adult";
  }
  else{
    cout << "You are not an adult" << endl;
  }

  // Switch
  int day;
  cin >> day;

  switch(day){
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    default:
      cout << "Invalid day";
      break;
  }

  //array
  int arr[5] = {1, 2, 3, 4, 5};
  cout << arr[0] << endl;
  int Arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
  cout << Arr2[0][0] << endl;
  
   //Loops

  //For loop
  for (int i = 0; i < 5; i++){
    cout << i << endl;
  }

  //While loop
  int j = 0;
  while (j < 5){
    cout << j << endl;
    j++;
  }

  //Do-While loop
  int k = 0;
  do{
    cout << k << endl;
    k++;
  }while(k < 5);

  //fuctions call
  printHello();

  //pass by value
  int num1 = 10;
  doSomething(num1);
  cout << "the value of num is " << num1 << endl;
  
  //hence the value of num is not changed bcz pass by value involve     passing a copy of the variable to the function and the function is    not able to change the value of the variable.
  
  //pass by reference
  int num2 = 10;
  doSomethingAgain(num2);
  cout << "the value of num is " << num2 << endl;

  //hence the value of num is changed bcz pass by reference involve     passing the address of the variable to
  
  return 0;
}
