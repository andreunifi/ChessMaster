#include "chessboard.h"
#include "pngparser.h"
#include <QApplication>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	ChessBoard chessboard;
	chessboard.show();

	app.exec();
	return 0;
}
