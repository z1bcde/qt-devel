#include <QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtGui>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QTextEdit *edit_hello = new QTextEdit();
	QMainWindow *window_top = new QMainWindow();
	window_top->setCentralWidget(edit_hello);
	window_top->setGeometry(0,0,500,500);
	window_top->show();
	return app.exec();
}
