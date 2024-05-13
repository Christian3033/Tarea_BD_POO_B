
#include <iostream>
#include "Cliente.h"

using namespace std;
int main(){

    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;

    cout << "Ingrese nit: ";
    getline(cin, nit);

    cout << "Ingrese nombres: ";
    getline(cin, nombres);

    cout << "Ingrese apellidos: ";
    getline(cin, apellidos);

    cout << "Ingrese direccion: ";
    getline(cin, direccion);

    cout << "Ingrese telefono: ";
    cin>>telefono;

    cout << "Ingrese fecha de nacimiento: ";
    cin>>fecha_nacimiento;
    /*
    MYSQL* conectar;
    MYSQL_ROW fila;
    MYSQL_RES* resultado;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "usr_empresa", "Empres@123", "db_empresa", 3306, NULL, 0);
    if (conectar) {

        cout << "conexion exitosa..." << endl;
        string puesto;
        cout << "Ingrese puesto: ";
        cin >> puesto;
        string insert = "insert into puestos(puesto) values('" + puesto + "')";
        const char* i = insert.c_str();
        q_estado = mysql_query(conectar, i);
        if (!q_estado) {

            cout << "ingreso exitoso..." << endl;

        }
        else {
            cout << "xxxx Error al ingresar xxxx" << endl;

        }

        string consulta = "select * from puestos";
        const char* c = consulta.c_str();
        q_estado = mysql_query(conectar, c);

        if (!q_estado) {

            resultado = mysql_store_result(conectar);
            while (fila = mysql_fetch_row(resultado)) {

                cout << fila[0] << ", " << fila[1] << endl;
            }

        }
        else {
            cout << "xxxx Error al consultar xxxx" << endl;
        }

    }else {

        cout << "Error en la conexion..."<<endl;
    };*/

    Cliente c = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
    c.crear();
    c.leer();
    system("pause");
    return 0;
}

