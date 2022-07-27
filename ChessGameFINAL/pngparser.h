#ifndef PNGPARSER_H
#define PNGPARSER_H
#include "chesspiece.h"

class PNGParser
{
public:
    PNGParser();
    static ChessPiece::PieceType convertQStringToPieceEnum(QString q){

    };
    static ChessPiece::PieceColor convertQStringToColorEnum(QString p)
    {
        if (p == "White")
            return ChessPiece::PieceColor::White;
        else
            return ChessPiece::PieceColor::Black;
    };

    static char *returnCorrectUnicode(ChessPiece::PieceType t)
    {
        switch (t) {
        case ChessPiece::Rook:
            return "\u265C";
            break;

        case ChessPiece::Pawn:
            return "\u265F";
            break;

        case ChessPiece::Knight:
            return "\u265E";
            break;

        case ChessPiece::Queen:
            return "\u265B";
            break;

        case ChessPiece::King:
            return "\u265A";
            break;

        case ChessPiece::Bishop:
            return "\u265D";
            break;

        default:
            return "";
        }
    }
};

#endif // PNGPARSER_H
