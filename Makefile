# Правильные переменные для компилятора и флагов
CXX = C:\Users\AniDictor\gcc\bin\g++
CXXFLAGS = -Wall -O2 -std=c++17  # Важно! Укажите стандарт C++

# Файл исходного кода
SOURCE = Chuck-a-luck_C++.cpp

# Имя исполняемого файла
EXECUTABLE = cal

# Правило для компиляции (исправлено!)
$(EXECUTABLE): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(EXECUTABLE)

# Правило для очистки
clean:
	rm -f $(EXECUTABLE)
