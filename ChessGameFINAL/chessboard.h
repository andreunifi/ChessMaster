#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include "pngparser.h"
#include <QFileDialog>
#include <QHash>
#include <QVector>
#include <QWidget>

class QLabel;
class QMouseEvent;
class ChessPiece;

class ChessBoard: public QWidget
{
    Q_OBJECT

public:
    ChessBoard(QWidget* parent=0);
    ChessBoard(const ChessBoard&)=delete;
    bool isGameOn                            = false;
    virtual ~ChessBoard();

private:
    ChessPiece* mPieceInFocus = Q_NULLPTR;

    QHash<ChessPiece*, QLabel*> mPiecePositionHash;

    bool isBlackTurn          = false;
    static const int BoxCount = 8;

    QLabel*** mChessBoxes ;
    QLabel* mLastMoveLabel;
    QVector<ChessPiece*> mChessPiece;

    void funcCreateChessPieces();
    bool funcValidatePieceMove( QLabel*, bool toKill=false);
    void mousePressEvent(QMouseEvent*) Q_DECL_OVERRIDE;
    void handleLoadOpeningButton();
    void loadfromdisk();
};

#endif
