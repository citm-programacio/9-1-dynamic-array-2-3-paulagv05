#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
   int* array = nullptr;     
    int size = 0;            
    int capacity = 0;     

    while (true) {
        int num;
       cout << "Introduce un número (o -1 para salir): ";
       cin >> num;

        if (num == -1) {
            cout << "\nAdios muy buenas!";
            break;  
        }

        
        if (size == capacity) {
            
            int* newArray = new int[capacity];  
            for (int i = 0; i < size; ++i) 
            {
                newArray[i] = array[i];
            }

            delete[] array;  
            array = newArray;  
        }
        array[size++] = num;

        
        sort(array, array + size);

        cout << "Array actual: [";
        for (int i = 0; i < size; ++i) 
        {
            cout << array[i];
            if (i < size - 1)
            {
               cout << ", ";
            };
        }
        cout << "]" << endl;
    }
  
    delete[] array;
    return 0;
}
