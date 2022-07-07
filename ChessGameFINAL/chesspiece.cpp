#include "chesspiece.h"
//#include <QVariant>

ChessPiece::ChessPiece(int piecetype, int piececolor, const QString& pieceName, const char* icon, QLabel* label)
    :mPieceType(piecetype),mPieceColor(piececolor),mIconPath(icon),mContainerBox(label)
{
    mPieceName = pieceName;

    mContainerBox->setText(icon);
    mContainerBox->setFont(QFont("Helvetica",35));
    mContainerBox->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter );
}

void ChessPiece:: setPieceType(int pieceType)
{
	mPieceType = pieceType;
}

int ChessPiece:: pieceType() const
{
	return mPieceType;
}

void ChessPiece:: setPieceColor(int pieceColor)
{
    mPieceColor = pieceColor;
}

int ChessPiece:: pieceColor() const
{
    return mPieceColor;
}

void ChessPiece::setPieceName(const QString &pieceName)
{
    mPieceName = pieceName;
}

QString ChessPiece::icon() const
{
    return mIconPath;
}

void ChessPiece::setIcon(const QString &str)
{
    mIconPath = str;
}

QString ChessPiece::pieceName() const
{
    return mPieceName;
}

void ChessPiece:: setContainerBox (QLabel* label)
{
    mContainerBox = label;
}

bool ChessPiece::move(QLabel *destLabel)
{
    if ( !destLabel)
        return false;

    mContainerBox->setText("");

    mContainerBox = destLabel;

    mContainerBox->setText(mIconPath);
    mContainerBox->setFont(QFont("Helvetica",35));
    mContainerBox->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter );

    return true;
}

QLabel* ChessPiece::containerBox() const
{
    return mContainerBox;
}
