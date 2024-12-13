
CXX = C:\Users\AniDictor\gcc\bin\g++
CXXFLAGS = -Wall -O2 -std=c++17  


SOURCE = Chuck-a-luck_C++.cpp


EXECUTABLE = cal


$(EXECUTABLE): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(EXECUTABLE)


clean:
	rm -f $(EXECUTABLE)
