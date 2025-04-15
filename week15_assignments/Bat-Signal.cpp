#include <iostream>
#include <utility>
#include <vector>
#include <ctime>

int main() {
    std::vector<std::pair<std::string, std::string>> villains = {
        {"Joker", "Arkham Asylum"},
        {"Riddler", "Gotham Bank"},
        {"Penguin", "Iceberg Lounge"},
        {"Two-Face", "Gotham Courthouse"},
        {"Scarecrow", "Abandoned Warehouse"},
        {"Poison Ivy", "Gotham Botanical Gardens"},
        {"Bane", "Blackgate Prison"},
        {"Mr. Freeze", "Cryo Lab"},
        {"Harley Quinn", "Amusement Mile"}
    };
    
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Pick a random villain
    int randomIndex = std::rand() % villains.size();
    auto alert = villains[randomIndex];

    std::cout << alert.first << " spotted at " << alert.second << "!\n";
    return 0;
}
