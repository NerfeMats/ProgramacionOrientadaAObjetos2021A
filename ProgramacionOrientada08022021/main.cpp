#include <iostream>

using namespace std;
//Hola estimados jovenes

//Quiero modelar la comunidad de la UAEM

//Alumnos
//Administrativos
//Profesores

//Para que? mm Quiero llevar un control sobre el personal
class Universidad{

private:

string ubicacion;
string campus[5];  // el numero es lo de menos
string nombre;


public:
void asignaNombre(string n)
{
this->nombre = n;
}

void asignaUbicacion(string n)
{
this->ubicacion=n;
}

void asignaCampus(string m) // ya me canse de  la n
{
this->campus[0] = m;
}

};

class Persona{
protected:
string nombre;
int edad; // automaticamente se va a alumno, admvos, profs
            // genial !!

string telefono; // es lo mismo

};


class Alumno: public Persona{
string matricula;

public:
void asignaMatricula(string m)
{
this->matricula = m;
}

void asignaNombre(string nom)
{
this->nombre = nom; // :(  que hago ?

   // siii, lo tenemos
}
//ya no es necesario string nombre;
};

class Administrativos : Persona{
//string nombre;
string numeroEcononomico;
};

class Profesor : Persona{
string numeroEcononomico;

};


int main()
{

// trabajemos con la clase alumno

Alumno alumno;
// y el nombre ?

alumno.asignaNombre("dasdasd dadasd dasdsa"); // este error esta bajo control
alumno.asignaMatricula("1111111"); // ya notaron los colores rojo y verde


// dejamos a la uni por un momento
Universidad uaemex; // les presento a un objeto :)
uaemex.asignaNombre("Universidad Autonoma del Estado de Mexico");
uaemex.asignaUbicacion("Av. Bordo de Xochiaca");
uaemex.asignaCampus("CU. Nezahualcoyotl");
// todo bien;

//Disculpen, pero mi origen es poliecnico

Universidad politecnico;

politecnico.asignaNombre("Instituto Politecnico Nacional");
politecnico.asignaUbicacion("Zacatenco"); //es suficiente
politecnico.asignaCampus("Escuela Superior de Fisica y Matematicas");

//Disculpen, pero nunca olvido la primera oportunidad

Universidad uam;

uam.asignaNombre("Universidad Autonoma Metropolitana");
uam.asignaUbicacion("Azcapotzalco");
uam.asignaCampus("UAM azc");

// jeje otro error, nos rendimos ? nooo
//error :(
//mmm compilemos
    cout << "Hello world!" << endl;
    return 0;
}
