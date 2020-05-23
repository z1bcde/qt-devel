#include <QApplication>
#include <QtWidgets/QLabel>
#include <QtGui>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QLabel *hello = new QLabel("Hello");
	hello->setGeometry(0,0,500,500);
	hello->show();
	return app.exec();
}

