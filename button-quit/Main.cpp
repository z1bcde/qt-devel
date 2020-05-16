#include <QApplication>
#include <QtWidgets/QPushButton>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QPushButton *quit = new QPushButton("Quit");
	quit->show();
	return app.exec();
}

