#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TRACK_LENGTH = 80; // Largo de la pista
const int CYCLISTS = 2;      // 2 ciclistas

// Figuras de la bicicleta con diferentes frames (ruedas girando)
string bike[4][3] = {
    { "   _o", " _`\\<,", " (|)/ (|)" },
    { "   __o", " _`/>  ", " (-)\\ (-)" },
    { "   _o", " _`\\<,", " (|)\\ (|)" },
    { "   __o", " _`/>  ", " (-)/ (-)" }
};

struct Cyclist {
    string name;
    int pos;
    bool finished;
};

// Limpia pantalla
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Dibuja la pista y los ciclistas
void drawRace(const vector<Cyclist> &cyclists, int frame) {
    for (const auto &c : cyclists) {
        // Espacios para posicionar ciclista en la pista
        string spaces(c.pos, ' ');
        string line(TRACK_LENGTH, '.'); // pista
        line[TRACK_LENGTH - 1] = '|';   // meta

        cout << spaces << bike[frame][0] << endl;
        cout << spaces << bike[frame][1] << endl;
        cout << spaces << bike[frame][2] << endl;
        cout << line << "\n" << endl;
    }
}

int main() {
    srand(time(0));

    // Inicializar ciclistas
    vector<Cyclist> cyclists = {
        {"Ciclista 1", 0, false},
        {"Ciclista 2", 0, false}
    };

    bool raceFinished = false;
    string winner = "";

    int frame = 0;

    while (!raceFinished) {
        clearScreen();

        // Mover ciclistas
        for (auto &c : cyclists) {
            if (!c.finished) {
                int step = 1 + rand() % 3; // avanza entre 1 y 3
                c.pos += step;

                if (c.pos >= TRACK_LENGTH - 8) { // llega a meta
                    c.finished = true;
                    if (!raceFinished) {
                        winner = c.name;
                        raceFinished = true;
                    }
                }
            }
        }

        // Dibujar
        drawRace(cyclists, frame);
        frame = (frame + 1) % 4; // cambiar frame ruedas

        this_thread::sleep_for(chrono::milliseconds(200));
    }

    cout << "\n🏆 El ganador es: " << winner << " 🏆" << endl;
    return 0;
}