#include <iostream>
#include "lista.h"
#include "conjunto.h"

using namespace std;

int main()
{
    Conjunto lista(10);
    (((lista + 20) + 30));
    cout << lista.size() << endl;
    cout << lista.get(2) << endl;
    cout << lista << endl;
    lista.remove(2);
    cout << lista << endl;
    return 0;
}
