#include <iostream>
using namespace std;

void bubbleSort(int A[], int x){
  int temp;
  
  for(int i = 0; i < x-1; i++){
    for(int j = 0; j < x-i-1; j++){
      if(A[j] > A[j + 1]){
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }

}

int main() {
  int userArray[6];
  int arraySize = 6 - 1;
  int userInput;
 
  cout << "Please enter 5 numbers (please place a space between each number): " << endl;
  for(int i = 0; i < arraySize; i++){
      cin >> userInput;
      userArray[i] = userInput;
  }
  
  cout << endl;

  cout << "Here is your array: " << endl;
  for(int i = 0; i < arraySize; i++){
      cout << userArray[i] << " ";
  }

  cout << endl;

  bubbleSort(userArray, arraySize);
  
  cout << endl;

  cout << "Here is your sorted array:" << endl;
  for(int i = 0; i < arraySize; i++){
      cout << userArray[i] << " ";
  }

}