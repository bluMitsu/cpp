#include "../inc/easyfind.hpp"

int main() {
    std::vector<int> v;
    v.push_back(1337); 
    v.push_back(42); 
    v.push_back(19); 
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << std::endl;
    }
    easyfind(v, 420);
	easyfind(v, 19);
}