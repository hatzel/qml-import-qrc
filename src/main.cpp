#include <QQmlApplicationEngine>
#include <QApplication>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl("qrc:/main.qml"));
    app.exec();
}
