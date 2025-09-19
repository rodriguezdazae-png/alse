#include <iostream>
#include <cmath>
#include <cctype>

struct Point
{
    double x, y;
};

double calcularDistancia(const Point &p1, const Point &p2)
{
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

void leerPuntos(Point puntos[], int n)
{
    char respuesta;
    std::cout << "¿Desea ingresar los puntos manualmente? (s/n): ";
    std::cin >> respuesta;
    respuesta = std::tolower(respuesta);

    if (respuesta == 's')
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "Ingrese las coordenadas del punto " << i + 1 << " (x y): ";
            std::cin >> puntos[i].x >> puntos[i].y;
        }
    }
    else
    {
        std::cout << "Usando puntos predeterminados...\n";
        Point predeterminados[4] = {{0, 0}, {3, 4}, {6, 8}, {9, 12}};
        for (int i = 0; i < n && i < 4; i++)
        {
            puntos[i] = predeterminados[i];
        }
    }
}

double calcularDistanciaMasCercana(Point puntos[], int n, const Point &pUsuario, int &indiceMasCercano)
{
    double distanciaMinima = calcularDistancia(pUsuario, puntos[0]);
    indiceMasCercano = 0;
    for (int i = 1; i < n; i++)
    {
        double distanciaActual = calcularDistancia(pUsuario, puntos[i]);
        if (distanciaActual < distanciaMinima)
        {
            distanciaMinima = distanciaActual;
            indiceMasCercano = i;
        }
    }
    return distanciaMinima;
}

double calcularDistanciaTotal(Point puntos[], int n)
{
    double distanciaTotal = 0.0;
    for (int i = 0; i < n - 1; i++)
    {
        distanciaTotal += calcularDistancia(puntos[i], puntos[i + 1]);
    }
    return distanciaTotal;
}

void mostrarResultado(Point puntos[], int indiceMasCercano, double distancia)
{
    std::cout << "El punto más cercano es: (" 
              << puntos[indiceMasCercano].x << ", " 
              << puntos[indiceMasCercano].y << ")\n";
    std::cout << "La distancia al punto más cercano es: " 
              << distancia << std::endl;
}

int main()
{
    int n;
    std::cout << "Ingrese el número de puntos (mínimo 2): ";
    std::cin >> n;

    if (n < 2)
    {
        std::cout << "Se necesitan al menos 2 puntos para calcular las distancias.\n";
        return 1;
    }

    Point puntos[n];
    leerPuntos(puntos, n);

    Point pUsuario;
    std::cout << "Ingrese las coordenadas del punto desde el que calcular la distancia (x y): ";
    std::cin >> pUsuario.x >> pUsuario.y;

    int indiceMasCercano;
    double distancia = calcularDistanciaMasCercana(puntos, n, pUsuario, indiceMasCercano);

    mostrarResultado(puntos, indiceMasCercano, distancia);

    std::cout << "La distancia total recorrida pasando por todos los puntos es: " 
              << calcularDistanciaTotal(puntos, n) << std::endl;

    return 0;
}
