//Wap  to store N elements in a vector and display them using for loop , for-each loop and using iterator.//

#include <iostream>
#include <vector>
int main() {
    std::vector<int> vec;
    int N, element;
    std::cout << "Enter the number of elements: ";
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> element;
        vec.push_back(element);
    }
    std::cout << "Elements using for loop: "; //for loop
    for (int i = 0; i < N; ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Elements using for-each loop: "; //for each loop
    for (int elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    std::cout << "Elements using iterator: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
