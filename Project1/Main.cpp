#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() { }
    ~Singleton() { }
    Singleton(const Singleton&) = delete;
    void operator=(const Singleton&) = delete;
public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton;
        }
        return instance;
    }
    void printMessage() {
        std::cout << "This is the Singleton instance." << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;

void main() {
    Singleton::getInstance()->printMessage();

}