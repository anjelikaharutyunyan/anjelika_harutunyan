#include <iostream>
#include <string>
class Chair
{
public:
    virtual ~Chair(){};
    virtual std::string toSitDown() const = 0;
};

class ArtDeco1 : public Chair
{
public:
    std::string toSitDown() const override
    {
        return "The result of the product Art Deco 1";
    }
};

class Victorian1 : public Chair
{
    std::string toSitDown() const override
    {
        return "The result of the product Victorian 1.";
    }
};
class Modern1 : public Chair
{
    std::string toSitDown() const override
    {
        return "The result of the product Modern 1.";
    }
};
class Sofa
{
public:
    virtual ~Sofa(){};
    virtual std::string ToLay() const = 0;
    virtual std::string AnotherFunc(const Chair &collaborator) const = 0;
};
class ArtDeco2 : public Sofa
{
public:
    std::string ToLay() const override
    {
        return "The result of the product Art Deco2.";
    }
    std::string AnotherFunc(const Chair &collaborator) const override
    {
        const std::string result = collaborator.toSitDown();
        return "The result of the Art Deco2 collaborating with ( " + result + " )";
    }
};

class Victorian2 : public Sofa
{
public:
    std::string ToLay() const override
    {
        return "The result of the product Victorian2.";
    }

    std::string AnotherFunc(const Chair &collaborator) const override
    {
        const std::string result = collaborator.toSitDown();
        return "The result of the Victorian2 collaborating with ( " + result + " )";
    }
};
class Modern2 : public Sofa
{
public:
    std::string ToLay() const override
    {
        return "The result of the product Modern2.";
    }

    std::string AnotherFunc(const Chair &collaborator) const override
    {
        const std::string result = collaborator.toSitDown();
        return "The result of the Modern2 collaborating with ( " + result + " )";
    }
};

class CoffeeTable
{
public:
    virtual ~CoffeeTable(){};
    virtual std::string toDoSmth() const = 0;
};

class ArtDeco3 : public CoffeeTable
{
public:
    std::string toDoSmth() const override
    {
        return "The result of the product Art Deco3.";
    }
};
class Victorian3 : public CoffeeTable
{
    std::string toDoSmth() const override
    {
        return "The result of the product Victorian3.";
    }
};
class Modern3 : public CoffeeTable
{
    std::string toDoSmth() const override
    {
        return "The result of the product Modern3.";
    }
};

class AbstractFactory
{
public:
    virtual Chair *CreateChair() const = 0;
    virtual Sofa *CreateSofa() const = 0;
    virtual CoffeeTable *CreateCoffeeTable() const = 0;
};

class Factory1 : public AbstractFactory
{
public:
    Chair *CreateChair() const override
    {
        return new ArtDeco1();
    }
    Sofa *CreateSofa() const override
    {
        return new ArtDeco2();
    }
   CoffeeTable *CreateCoffeeTable() const override
    {
        return new ArtDeco3();
    }
};

class Factory2 : public AbstractFactory
{
public:
    Chair *CreateChair() const override
    {
        return new Victorian1();
    }
    Sofa *CreateSofa() const override
    {
        return new Victorian2();
    }
    CoffeeTable *CreateCoffeeTable() const override
    {
        return new Victorian3();
    }
};
class Factory3 : public AbstractFactory
{
public:
    Chair *CreateChair() const override
    {
        return new Modern1();
    }
    Sofa *CreateSofa() const override
    {
        return new Modern2();
    }
    CoffeeTable *CreateCoffeeTable() const override
    {
        return new Modern3();
    }
};
void ClientCode(const AbstractFactory &factory)
{
    const Chair *product_a = factory.CreateChair();
    const Sofa *product_b = factory.CreateSofa();
    const CoffeeTable *product_c = factory.CreateCoffeeTable();
    std::cout << product_b->ToLay() << "\n";
    std::cout << product_b->AnotherFunc(*product_a) << "\n";
    std::cout << product_c->toDoSmth() << "\n";
    delete product_a;
    delete product_b;
    delete product_c;
}

int main()
{
    std::cout << "Client: Testing client code with the first factory type:\n";
    Factory1 *f1 = new Factory1();
    ClientCode(*f1);
    delete f1;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the second factory type:\n";
   Factory2 *f2 = new Factory2();
    ClientCode(*f2);
    delete f2;
    std::cout << std::endl;
    std::cout << "Client: Testing the same client code with the third factory type:\n";
   Factory3 *f3 = new Factory3();
    ClientCode(*f3);
    delete f3;
    return 0;
}