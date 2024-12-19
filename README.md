# Laboratorium Metodyki Programowania

## Ćwiczenie 9: Zarządzanie wersjami oprogramowania

### Opis projektu
Celem laboratorium jest zapoznanie się z podstawowymi narzędziami do zarządzania wersjami oprogramowania na przykładzie systemu Subversion (SVN). W ramach ćwiczenia realizowane są następujące etapy:

1. **Przygotowanie szkieletu projektu**: Utworzenie struktury katalogów oraz zatwierdzenie jej w repozytorium SVN.
2. **Implementacja eliminacji Gaussa**: Wdrożenie algorytmu eliminacji Gaussa do rozwiązywania układów równań liniowych.
3. **Rozszerzenie funkcjonalności algorytmu**: Dodanie selekcji elementu diagonalnego w procesie eliminacji.
4. **Testowanie i scalanie**: Przygotowanie testów funkcjonalnych, scalanie gałęzi oraz integracja końcowej wersji projektu.

### Struktura katalogów projektu
Projekt wykorzystuje następującą strukturę katalogów:

- `trunk/`
  - `src/` - Pliki źródłowe i nagłówkowe.
  - `bin/` - Pliki wykonywalne.
  - `dane/` - Pliki z danymi testowymi.
  - `Makefile` - Plik konfiguracyjny dla kompilacji projektu.
- `branches/` - Gałęzie rozwojowe projektu.

### Główne cele realizacji

1. **Rozwiązanie układów równań liniowych**
   - Implementacja algorytmu eliminacji Gaussa.
   - Wsteczne podstawienie do wyznaczenia wektora wynikowego.
2. **Wersjonowanie kodu**
   - Zarządzanie wersjami przy użyciu SVN.
   - Rozwiązywanie konfliktów i scalanie zmian.
3. **Testowanie**
   - Walidacja poprawności działania algorytmu dla różnych przypadków testowych.

### Instrukcje dla użytkownika
1. **Kompilacja**: W katalogu głównym projektu uruchom `make` w celu zbudowania aplikacji.
2. **Uruchamianie programu**: Wykorzystaj przygotowane pliki testowe lub własne dane.

### Dokumentacja

Projekt korzysta z następujących plików źródłowych:
- `main.c`: Główny plik programu.
- `gauss.c`, `gauss.h`: Implementacja algorytmu eliminacji Gaussa.
- `backsubst.c`, `backsubst.h`: Implementacja wstecznego podstawienia.
- `mat_io.c`, `mat_io.h`: Obsługa wejścia/wyjścia dla macierzy oraz zarządzanie pamięcią.

Dodatkowe szczegóły dotyczące implementacji poszczególnych modułów znajdują się w plikach projektu.

### Źródła

- Materiały do laboratorium + ISOD
- [Dokumentacja SVN](http://svnbook.red-bean.com/en/1.5/svn.branchmerge.html)
- [Opis metody Gaussa](http://edu.i-lo.tarnow.pl/inf/alg/005_root/0006.php)