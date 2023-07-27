#include "basicos.h"

clase clase::operator+(clase other)
{
    clase result;
    result.a = this->a + other.a;
    result.b = this->b + other.b;
    return result;
}

clase clase::operator-(clase other)
{
    clase result;
    result.a = this->a - other.a;
    result.b = this->b - other.b;
    return result;
}

clase clase::operator*(clase other)
{
    clase result;
    result.a = this->a * other.a;
    result.b = this->b * other.b;
    return result;
}

clase clase::operator/(clase other)
{
    clase result;
    result.a = this->a / other.a;
    result.b = this->b / other.b;
    return result;
}

bool clase::operator==(clase other)
{
    bool result;
    if (this->a == other.a && this->b == other.b ) {
        result = true;
    } else {
        result = false;
    }

    return result;
}

std::ostream& operator<<(std::ostream& cout, const clase& obj){
    cout << obj.a <<" - "<< obj.b<<std::endl;
    return cout;
}
