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
   - Przygotowanie automatycznych testów funkcjonalnych.
   - Walidacja poprawności działania algorytmu dla różnych przypadków testowych.

### Wykorzystywane technologie
- System kontroli wersji: Subversion (SVN).
- Środowisko pracy: `stud.iem.pw.edu.pl` z dostępem przez SSH.
- Język programowania: C.
- Kompilator: GCC.

### Instrukcje dla użytkownika
1. **Logowanie**: Zaloguj się na serwer `stud.iem.pw.edu.pl` za pomocą SSH.
2. **Pobranie szkieletu projektu**: Skorzystaj z komendy `svn checkout` w celu pobrania kodu źródłowego.
3. **Kompilacja**: W katalogu głównym projektu uruchom `make` w celu zbudowania aplikacji.
4. **Uruchamianie programu**: Wykorzystaj przygotowane pliki testowe lub własne dane w formacie zgodnym z opisem w plikach nagłówkowych projektu.

### Dokumentacja

Projekt korzysta z następujących plików źródłowych:
- `main.c`: Główny plik programu.
- `gauss.c`, `gauss.h`: Implementacja algorytmu eliminacji Gaussa.
- `backsubst.c`, `backsubst.h`: Implementacja wstecznego podstawienia.
- `mat_io.c`, `mat_io.h`: Obsługa wejścia/wyjścia dla macierzy oraz zarządzanie pamięcią.

Dodatkowe szczegóły dotyczące implementacji poszczególnych modułów oraz przygotowania testów znajdują się w plikach projektu.

### Źródła

- [Dokumentacja SVN](http://svnbook.red-bean.com/en/1.5/svn.branchmerge.html)
- [Opis metody Gaussa](http://edu.i-lo.tarnow.pl/inf/alg/005_root/0006.php)

---

Projekt zrealizowany w ramach Programu Rozwojowego Politechniki Warszawskiej, współfinansowanego przez Unię Europejską w ramach Europejskiego Funduszu Społecznego.