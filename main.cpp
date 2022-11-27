#include "Persona.h"
#include "Reservacion.h"
#include "Crucero.h"
#include "CruceroCaribbean.h"
#include "CruceroMediterranean.h"

using namespace std;

int main()
{
    //Variable de opcion para el ciclo while
    int opcion;
    //Variable para salir del ciclo while
    bool rompewhile=true;

    //Clases definidas para crear 10 objetos
    Persona pasajeros[9];
    Reservacion reserva[9];
    Crucero barco[9];
    CruceroCaribbean b1[9];
    CruceroMediterranean b2[9];

    //Variable que nos ayudara a establecer y conocer la posicion del objeto con el cual estamos trabajando
    int numPasajero = -1;

    //Texto de bienvenida e informacion de como usar el programa
    cout<<"Bienvenido"<<endl;
    cout<<"Para reservar asegurate de crear una sesion primero y completar los siguientes pasos en orden."<<endl;
    cout<<"Nota: Una vez completado el paso 5 puedes registrar a otro pasajero."<<endl;

    //Inicio del ciclo while
    while (rompewhile){
        //Menu de opciones
        cout<<"\n\n1.Crear Sesion \n2.Registrar Pasajero\n3.Seleccionar Crucero \n4.Generar Reserva \n5.Mostrar Reserva \n6.Salir\n\n Inserta opcion: ";
        cin>>opcion;
        switch (opcion){
            case 1:
                //Se crea la sesion del pasajero
                if (numPasajero<9){
                        numPasajero = numPasajero +1;
                        cout<<"\nPasajero "<<(numPasajero+1)<<endl;
                        cout<<"(Sesion creada correctamente)"<<endl;
                }
                else
                    cout<<"\nMaximo numero de registros alcanzados.\n";
                break;
            case 2:
                //Se registran los datos del pasajero enviandolos a la clase persona
                if (numPasajero>=0){
                    cout<<"\nPasajero "<<(numPasajero+1)<<endl;

                    string nombre;
                    cout<<"\nREGISTRAR PASAJERO"<<"\nNombre: ";
                    cin>>nombre;
                    string edad;
                    cout <<"Edad: ";
                    cin>>edad;
                    string ciudadania;
                    cout <<"Ciudadania: ";
                    cin>>ciudadania;
                    string email;
                    cout <<"Email: ";
                    cin>>email;
                    string pasaporte;
                    cout <<"Pasaporte: ";
                    cin>>pasaporte;
                    pasajeros[numPasajero].setNombre(nombre);
                    reserva[numPasajero].guardarNomReserva(pasajeros[numPasajero]);
                    pasajeros[numPasajero].setEdad(edad);
                    pasajeros[numPasajero].setCiudadania(ciudadania);
                    pasajeros[numPasajero].setEmail(email);
                    pasajeros[numPasajero].setPasaporte(pasaporte);
                }
                else
                    cout<<"\nOpcion invalida, intenta de nuevo\n";
                break;
            case 3:
                {
                    /*Se muestran las ofertas del crucero enviando los datos de acuerdo a las
                    opciones selecionadas a la clase crucero y a sus clases hijas por medio
                    del metodo de herencia.*/
                    string lineaCrucero = "Royal Caribbean";
                    barco[numPasajero].setLineaCrucero(lineaCrucero);
                    b1[numPasajero].setLineaCrucero(lineaCrucero);
                    b2[numPasajero].setLineaCrucero(lineaCrucero);
                    reserva[numPasajero].guardarLineaCrucero(barco[numPasajero]);

                    //Menu opciones de crucero
                    int opcionC = 0;
                    cout << "Contamos con dos tipos de Cruceros:\n1.Crucero Caribbean\n2.Crucero Mediterranean\nIngresa la opcion deseada: ";
                    cin>>opcionC;
                    int costo = 0;
                    int camarote = 0;
                    string habitacion = "";
                    string ruta = "";
                    string fecha = "";

                    //Menu opciones habitacion
                    if(opcionC == 1){
                        cout <<"1.Camarotes Interiores\n2.Camarotes Vista Oceano\n3.Camarotes Balcon\n4.Camarotes Virtual\nIngresa la opcion deseada: ";
                        cin>>camarote;
                        if(camarote == 1){
                            costo = costo + 10;
                            habitacion = "Camarotes Interiores 102";
                            barco[numPasajero].setHabitacion(habitacion);
                            b1[numPasajero].setHabitacion(habitacion);
                        }
                        else if(camarote == 2){
                            costo = costo + 20;
                            habitacion = "Camarotes Vista Oceano 204";
                            barco[numPasajero].setHabitacion(habitacion);
                            b1[numPasajero].setHabitacion(habitacion);
                        }
                        else if(camarote == 3){
                            costo = costo + 30;
                            habitacion = "Camarotes Balcon 306";
                            barco[numPasajero].setHabitacion(habitacion);
                            b1[numPasajero].setHabitacion(habitacion);
                        }
                        else if(camarote == 4){
                            costo = costo + 40;
                            habitacion = "Camarotes Virtual 408";
                            barco[numPasajero].setHabitacion(habitacion);
                            b1[numPasajero].setHabitacion(habitacion);
                        }
                        else{
                            cout<<"Opcion no valida. Vea las ofertas de nuevo";
                        break;
                        }
                        //Datos del crucero selecionado
                        costo = (costo + 480)*7; //Son siete noches
                        barco[numPasajero].setCosto(costo);
                        b1[numPasajero].setCosto(costo);
                        ruta = "Puerto- Miami,Florida Destino- Costa Maya, Mexico";
                        barco[numPasajero].setRutaCrucero(ruta);
                        b1[numPasajero].setRutaCrucero(ruta);
                        fecha = " 2 - 9 de Abril del 2023";
                        barco[numPasajero].setFecha(fecha);
                        b1[numPasajero].setFecha(fecha);
                        string barco1 = "Crucero Caribbean";
                        reserva[numPasajero].setNomBarco(barco1);

                        //Caracteristicas del crucero seleccionado
                        string c1 = "Si buscas diversion extrema atrevete a conocer nuestros toboganes de tres pisos: Typhoon, Cyclone y Supercell. Las condiciones perfectas para The Perfect Storm.";
                        string c2 = "Combate con pistolas laser en un escenario que brilla en la oscuridad.";
                        string c3 = "Toma tu tabla y preparate para surfear en el simulador de surf de 12,1 metros de largo FlowRider.";
                        b1[numPasajero].setPerfectStorm(c1);
                        b1[numPasajero].setLaserTag(c2);
                        b1[numPasajero].setFlowRider(c3);

                        //Mostrar informacion del crucero seleccionado
                        b1[numPasajero].mostrarCaribbean();
                    }
                    else if(opcionC == 2){
                        //Menu opciones habitacion
                        cout <<"1.Camarotes Interiores\n2.Camarotes Vista Oceano\n3.Camarotes Balcon\n4.Camarotes Virtual\nIngresa la opcion deseada: "<<endl;
                        cin>>camarote;
                        if(camarote == 1){
                            costo = costo + 10;
                            habitacion = "Camarotes Interiores 102";
                            barco[numPasajero].setHabitacion(habitacion);
                            b2[numPasajero].setHabitacion(habitacion);
                        }
                        else if(camarote == 2){
                            costo = costo + 20;
                            habitacion = "Camarotes Vista Oceano 204";
                            barco[numPasajero].setHabitacion(habitacion);
                            b2[numPasajero].setHabitacion(habitacion);
                        }
                        else if(camarote == 3){
                            costo = costo + 30;
                            habitacion = "Camarotes Balcon 306";
                            barco[numPasajero].setHabitacion(habitacion);
                            b2[numPasajero].setHabitacion(habitacion);
                        }
                        else if(camarote == 4){
                            costo = costo + 40;
                            habitacion = "Camarotes Virtual 408";
                            barco[numPasajero].setHabitacion(habitacion);
                            b2[numPasajero].setHabitacion(habitacion);
                        }
                        else{
                            cout<<"Opcion no valida. Vea las ofertas de nuevo";
                        break;
                        }
                        //Datos del crucero selecionado
                        costo = (costo + 520)*7; //Son siete noches
                        barco[numPasajero].setCosto(costo);
                        b2[numPasajero].setCosto(costo);
                        ruta = "Puerto- Southampton,England Destino- Canarias, Espana";
                        barco[numPasajero].setRutaCrucero(ruta);
                        b2[numPasajero].setRutaCrucero(ruta);
                        fecha = " 9 - 16 de Julio del 2023";
                        barco[numPasajero].setFecha(fecha);
                        b2[numPasajero].setFecha(fecha);
                        string barco2 = "Crucero Mediterranean";
                        reserva[numPasajero].setNomBarco(barco2);

                        //Caracteristicas del crucero seleccionado
                        string c1 = "Agarrate del bolante y ven a disfrutar la rapidez de estos carritos chocones abordo.";
                        string c2 = "Un simulador de paracaidismo que te levantara del suelo y te permitira volar en el aire.";
                        string c3 = "Conoce la plataforma de observacion mas alta de un crucero con record Guinness y disfruta la vista.";
                        b2[numPasajero].setBumperCars(c1);
                        b2[numPasajero].setRipcord(c2);
                        b2[numPasajero].setNorthStar(c3);

                        //Mostrar informacion del crucero seleccionado
                        b2[numPasajero].mostrarMediterranean();
                    }
                    else
                        cout<<"Opcion no valida. Vea las ofertas de nuevo";
                    break;
                }
            case 4:
                {
                    //Se crea el numero de reserva y se guarda en la clase reservacion.
                    int numReserva;
                    numReserva = numPasajero +1476;
                    cout<<"\nPasajero "<<(numPasajero+1)<<endl;
                    cout<<"\nGENERAR RESERVA"<<endl;
                    reserva[numPasajero].setNumReserva(numReserva);
                    reserva[numPasajero].mostrarInfoReservacion();
                    break;
                }
            case 5:
                {
                    //Se muestra toda la informacion principal de la reservacion, el pasajero y el crucero.
                    int numRPasajero;
                    cout<<"\nIngrese el numero de pasajero: "<<endl;
                    cin>> numRPasajero;
                    cout<<"\nPasajero "<<(numRPasajero)<<endl;
                    cout <<"=========================================";
                    cout<<"\nRESERVA GENERADA"<<endl;
                    reserva[numRPasajero-1].mostrarInfoReservacion();
                    cout<<"\nINFORMACION PASAJERO"<<endl;
                    pasajeros[numRPasajero-1].mostrarInfoPasajero();
                    cout<<"\nINFORMACION CRUCERO"<<endl;
                    barco[numRPasajero-1].mostrarCrucero();
                    cout <<"=========================================";
                    break;
                }
            case 6:
                //Salir del ciclo while para terminar el programa
                rompewhile = false;
                break;
            default:
                cout<<"\nOpcion invalida, intenta de nuevo\n";
        }
    }
    cout<<"\n\nGracias por reservar con nosotros.";
    return 0;
}
