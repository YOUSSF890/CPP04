#include <iostream>

class Parent
{
    private:
        int parent;
    public:
        virtual void print()
        {
            std::cout << "print Parent\n";
        }  
        virtual void aya()
        {
            std::cout << "aya Parent\n";
        }
};


class child0 : public Parent
{
    private:
        int parent;
    public:
        void print()
        {
            std::cout << "print child0\n";
        }  
        void aya()
        {
            std::cout << "aya child0\n";
        }
        virtual void youssef()
        {
            std::cout << "aya child0\n";
        }
};

class child1 : public child0
{
    private:
        int parent;
    public:
        void print()
        {
            std::cout << "print child1\n";
        }  

};

class child2 : public child1
{
    private:
        int parent;
    public:
        void youssef()
        {
            std::cout << "aya child02\n";
        }
};

int main()
{
    child0 *pr = new child2();

    pr->print();
    pr->aya();
    pr->youssef();
}