g++ -w Main2.cpp -o $1 -fPIC $(pkg-config --cflags --libs Qt5Core Qt5Widgets)
