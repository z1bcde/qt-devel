#include <QApplication>
#include <QtWidgets/QLabel>
#include <QtGui>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QMainWindow *main = new QMainWindow();
	main->setGeometry(0,0,500,500);
	main->show();
	return app.exec();
}
