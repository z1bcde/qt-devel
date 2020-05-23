#include <QtGui>
int main(int argc, char **argv)

{

    QApplication app(argc, argv);


    QTextDocument sharedDocument;


    QTextEdit *te1 = new QTextEdit;

    QTextEdit *te2 = new QTextEdit;

    QTextEdit *te3 = new QTextEdit;

    te1->setLineWrapMode(QTextEdit::NoWrap);

    te2->setLineWrapMode(QTextEdit::NoWrap);

    te3->setLineWrapMode(QTextEdit::NoWrap);


    te1->setDocument(&sharedDocument);

    te2->setDocument(&sharedDocument);

    te3->setDocument(&sharedDocument);


    sharedDocument.setPlainText("Edit me! ");


    QMainWindow mw;

    QSplitter *verticalSplitter = new QSplitter(Qt::Vertical);

    QSplitter *horizontalSplitter = new QSplitter;

    horizontalSplitter->addWidget(te1);

    horizontalSplitter->addWidget(te2);


    verticalSplitter->addWidget(horizontalSplitter);

    verticalSplitter->addWidget(te3);


    mw.setCentralWidget(verticalSplitter);

    mw.show();


    return app.exec();

}


