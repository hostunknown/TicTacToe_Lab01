# Jurnal de Prompturi - Laboratorul 01

Acest fișier conține interacțiunile cu asistentul AI utilizate în cadrul efectuării și documentării primului laborator (Tic-Tac-Toe).

---

## Prompt 1: Configurarea repository-ului pe GitHub și curățarea codului vechi

**Întrebare:** 


**Răspuns:** 
Pentru a seta structura corectă pentru Lab 01 pe o ramură:
1. Deschide Git Bash în folderul proiectului tău din Visual Studio.
2. Scrie `git init`.
3. Adaugă fișierele de bază `.hpp` și cele Markdown, apoi rulează:
   `git add .`
   `git commit -m "Lab 01: Initial project structure and headers"`
   `git push -u origin lab01`
Astfel vei avea codul organizat curat pe ramura de laborator.

---

## Prompt 2: Clarificare despre directiva #pragma once

**Întrebare:** 
De ce folosim pragma once in hpp, e ca #include doar ca pentru hpp?

**Răspuns:** 
Cele două directive au scopuri complet diferite, deși colaborează în codul C++:
- `#include` are rolul de a **insera și citi conținutul** unui alt fișier (cum ar fi un alt header sau o bibliotecă) direct în locul în care este scris.
- `#pragma once` este o directivă pusă la începutul unui fișier header (`.hpp`) care îi spune compilatorului să **încarce fișierul o singură dată** în timpul compilării, prevenind erorile de redefinire în cazul în care același fișier este inclus de mai multe ori în locuri diferite din proiect.