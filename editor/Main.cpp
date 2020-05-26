#include <QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <fstream>
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	ifstream ifs("../Main.cpp");
	if(ifs)
	{
		string data;
		//ifs >> data;
		string buf;
		while(!ifs.eof())
		{
			getline(ifs, buf);
			data += buf + "\n";
		}
		const char *cdata = data.c_str();
		QLabel *label = new QLabel(cdata);
		label->setGeometry(0,0,500,500);
		label->show();
	}

	return app.exec();

}

