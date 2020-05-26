#include <QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	const char *message = "hello window.";
	QLabel *hello = new QLabel(message);
	hello->setGeometry(0,0,500,500);
	hello->show();
	return app.exec();
}

