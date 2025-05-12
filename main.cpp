//
//  main.cpp
//  ClassesTestCpp
//
//  Created by Oswin Joseph Ziervogel on 07.05.25.
//

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(std::string n) : name(n) {};
    
    void speak() const {
        std::cout << name << " makes a sound." << std::endl;
    }
    std::string getName() const {
        return name;
    }
};

class Snake : public Animal {
public:
    int size;
    
    Snake(std::string n, int s) : Animal(n), size(s) {}
    
    void hiss() const {
        std::cout << name << " hisses." << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Snake kaa("kaa", 120);
    std::cout << kaa.getName();
    std::cout << kaa.size;
    kaa.hiss();
    return 0;
}
