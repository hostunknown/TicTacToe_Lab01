# Tic-Tac-Toe (X și O)

## Denumirea proiectului
Tic-Tac-Toe Console Game în C++

## Descrierea proiectului / reguli de joc
Jocul clasic X și O (Tic-Tac-Toe) jucat pe o tablă de 3x3. Doi jucători (X și O) plasează alternativ simbolurile pe tablă. Câștigătorul este primul jucător care reușește să plaseze 3 simboluri consecutive pe o linie orizontală, verticală sau diagonală.

## Structuri de date și descrierea lor
- **CellState (enum class):** Reprezintă starea unei celule de pe tablă (Empty, X sau O).
- **Point (struct):** Reține coordonatele (rând și coloană) pentru mutarea jucătorului.
- **Board (clasă):** Gestionează matricea de joc și verifică starea tablei / câștigătorul.
- **GameEngine (clasă):** Motorul principal care controlează fluxul jocului.
- **Painter (clasă):** Responsabil de afișarea tablei și a mesajelor în consolă.
- **Listener (clasă):** Preluarea input-ului de la tastatură de la utilizator.


## Instrucțiuni de construcție și rulare (Build)
Pentru a compila și rula proiectul manual folosind CMake:

1. Deschide terminalul în folderul rădăcină al proiectului.
2. Creează un director pentru build și intră în el:
   ```powershell
   mkdir build
   cd build
   cmake ..
   cmake --build . --config Release
   .\Release\TicTacToe.exe