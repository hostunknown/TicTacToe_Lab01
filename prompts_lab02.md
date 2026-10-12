---1---
PROMPT:
GameEngine.obj : error LNK2005: "public: __cdecl GameEngine::GameEngine(void)" (??0GameEngine@@QEAA@XZ) already defined
 in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
GameEngine.obj : error LNK2005: "public: void __cdecl GameEngine::Init(void)" (?Init@GameEngine@@QEAAXXZ) already defin
ed in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
GameEngine.obj : error LNK2005: "public: void __cdecl GameEngine::Run(void)" (?Run@GameEngine@@QEAAXXZ) already defined
 in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
Listener.obj : error LNK2005: "public: bool __cdecl Listener::AskPlayAgain(void)" (?AskPlayAgain@Listener@@QEAA_NXZ) al
ready defined in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
Listener.obj : error LNK2005: "public: void __cdecl Listener::GetPlayerMove(void)" (?GetPlayerMove@Listener@@QEAAXXZ) a
lready defined in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
Painter.obj : error LNK2005: "public: void __cdecl Painter::ClearScreen(void)" (?ClearScreen@Painter@@QEAAXXZ) already
defined in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
Painter.obj : error LNK2005: "public: void __cdecl Painter::DisplayMessage(char const *)" (?DisplayMessage@Painter@@QEA
AXPEBD@Z) already defined in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
Painter.obj : error LNK2005: "public: void __cdecl Painter::DrawBoard(void)" (?DrawBoard@Painter@@QEAAXXZ) already defi
ned in main.obj [C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]
C:\ProjectsCPP\TicTacToe\build\Release\TicTacToe.exe : fatal error LNK1169: one or more multiply defined symbols found
[C:\ProjectsCPP\TicTacToe\build\TicTacToe.vcxproj]

RASPUNS:
Această eroare de linker (LNK2005: already defined in main.obj) înseamnă că metodele claselor tale au fost definite de două ori: o dată în fișierele .cpp noi pe care le-ai creat (GameEngine.cpp, Listener.cpp, Painter.cpp) și încă o dată (probabil) direct în fișierele .hpp sau în main.cpp.

În C++, regulile de linkare spun că o funcție sau metodă poate fi definită (să aibă corp { ... }) o singură dată în întregul proiect.

Cum rezolvi rapid eroarea:
Verifică fișierele tale header (GameEngine.hpp, Listener.hpp, Painter.hpp). Asigură-te că în ele ai doar declarațiile (fără acolade sau cod în interior), exact așa:

Exemplu corect pentru Painter.hpp:

C++
#pragma once

class Painter {
public:
    void DrawBoard();
    void DisplayMessage(const char* message);
    void ClearScreen();
};
(Dacă în .hpp aveai scrise și acoladele { ... } pentru metode, șterge-le de acolo, deoarece corpul lor trebuie să existe doar în fișierele .cpp corespunzătoare).

De asemenea, asigură-te că în main.cpp nu ai copiat din greșeală funcțiile claselor, ci ai lăsat doar apelul lor (cum ar fi painter.DrawBoard();).

După ce ai verificat că metodele sunt definite doar în fișierele .cpp, recompilează proiectul curat:

DOS
cmake --build . --config Release --clean-first
Această comandă va șterge fișierele obiect vechi și va compila corect proiectul fără nicio eroare!









---2---
PROMPT: 
scrie scurt comenzile cu care construiesc build-ul prin developer command prompt for VS ( doar comenzile pe scurt la rand )

RASPUNS:
mkdir build
cd build
cmake -A x64 ..
cmake --build . --config Release