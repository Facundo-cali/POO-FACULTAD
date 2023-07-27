#include "lista.h"

Lista::Lista(int dato)
{
    this->dato = dato;
}

bool Lista::add(int dato)
{
    if (this->sig == 0) {// si el siguiente nodo es 0, significa que el nodo actual es el último de la lista y queremos agregar otro con el dato dado.
        this->sig = new Lista(dato);//se agrega un nuevo nodo donde antes habia un 0, Esto significa que el nuevo nodo se convierte en el siguiente nodo después del nodo actual.
    } else {//si el siguiente nodo no es 0, significa que no es el ultimo y hay que seguir recorriendo la lista.
        this->sig->add(dato);
    }
    return true;
}

int Lista::get(int indice)
{
    if (indice == 0) {//el indice solo le dice al programa que siga preguntando al nodo siguiente, por ejemplo, si le pasamos 2, el metodo se fija si el indice es igual a 0, si no lo es, usa un nuevo indice (indice - 1) y se pregunta lo mismo pero en el nodo siguiente (return this->sig->get(indice - 1)). Y asi sucesivamente hasta que el indice sea 0 y nos de el dato.
        return this->dato;
    } else {
        return this->sig->get(indice - 1);//el nuevo indice que usa para el metodo get
    }
}

int Lista::size()
{
    if (this->sig == 0) {
        return 1;
    } else {
        return this->sig->size() + 1;
    }
}

Lista Lista::operator+(int dato)
{
    this->add(dato);
    return *this;
}

Lista* Lista::remove(int indice)
{
    if (indice == 0) {
        return this->sig;
    } else {
        if (indice == 1) {//este seria el caso en el que encontremos el nodo que queremos eliminar, que sea 1 significa que es el numero anterior al nodo que queremos eliminar.Desde este nodo podemos guardar el nodo siguiente en un auxiliar y borrarlo.
            auto aux = this->sig;//auto permite deducir automáticamente el tipo de una variable en función del valor al que se está asignando.
            this->sig = this->sig->sig;
            delete aux;//borramos el puntero que almacena el nodo que queremos borrar y asi borramos el nodo.
            return this;
        } else {//si el nodo actual no es el nodo que queremos eliminar, se realiza una llamada recursiva al método remove en el siguiente nodo.
            this->sig = (this->sig->remove(indice - 1));
            return this;
        }

    }
}

bool Lista::contiene(int dato)
{
    if (dato == this->dato) return true;
    if (this->sig == 0) return false;
    return this->sig->contiene(dato);
}

std::ostream& operator<<(std::ostream& os, const Lista& obj) {
    os << obj.dato;
    if (obj.sig != 0){
        os << ", "<< *(obj.sig);
    }
    return os;
}
