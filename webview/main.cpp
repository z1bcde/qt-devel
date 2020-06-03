#include <QApplication>
#include <QWebView>
#include <QUrl>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QWebView *web_view = new QWebView();
	web_view -> setGeometry(0,0,500,500);
	web_view -> load(QUrl("http://hirotakeakesi.work"));
	web_view -> show();
	return app.exec();
}

