#include <iostream>
using namespace std;

bool search(int arr[], int size, int key ) {

        for(int i = 0; i<size; i++){

            if(arr[i] == key){

                return 1;
            }
        }
        return 0;
    }

int main(){

    int arr[] = {10, -2, 23, 33, -9, 87, 34};

    int key;
    cout << "Enter the key you want to search:" << endl;
    cin >> key;

    bool found = search(arr, 7, key);

    if(found){

        cout << "Element found: " << endl;

    }
    else{

        cout << "Element not found: " << endl;
    }

    return 0;
}