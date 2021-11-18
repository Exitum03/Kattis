#include <iostream>
#include <array>
#include <algorithm>

int main(){
    std::array<int, 3> arr;
    std::array<char, 3> abc;

    for (int i = 0; i < 3; i++) std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());

    // FUCK IT im using switch cases cuz IDK anymore 
    for (int i = 0; i < 3; i++) std::cin >> abc[i];
    for (int i = 0; i < 3; i++){
        switch(abc[i]){
            case 'A':
                std::cout << arr[0] << " ";
                break;
            case 'B':
                std::cout << arr[1] << " ";
                break;
            case 'C':
                std::cout << arr[2] << " ";
                break;
        }
    }
}