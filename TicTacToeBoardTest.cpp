/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"

class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};


TEST(TicTacToeBoardTest, sanityCheck)
{
  TicTacToeBoard t;
	ASSERT_TRUE(true);
}


TEST(TicTacToeBoardTest, toggleTurnFirst)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.toggleTurn(), O);
}

TEST(TicTacToeBoardTest, toggleTurnTwice)
{
  TicTacToeBoard t;
  t.toggleTurn();
	ASSERT_EQ(t.toggleTurn(), X);
}

TEST(TicTacToeBoardTest, toggleTurnThree)
{
  TicTacToeBoard t;
  t.toggleTurn();
  t.toggleTurn();
	ASSERT_EQ(t.toggleTurn(), O);
}

TEST(TicTacToeBoardTest, PlaceOnePiece)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.placePiece(0, 0), X);
}

TEST(TicTacToeBoardTest, PlaceTwoPieces)
{
  TicTacToeBoard t;
  t.placePiece(0,0);
  ASSERT_EQ(t.placePiece(0, 1), O);
}

TEST(TicTacToeBoardTest, PlacePieceSamePlace)
{
  TicTacToeBoard t;
  t.placePiece(0,0);
	ASSERT_EQ(t.placePiece(0, 0), X);
}

TEST(TicTacToeBoardTest, PlacePieceColumnInvalid)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.placePiece(0, 3), Invalid);
}

TEST(TicTacToeBoardTest, PlacePieceRowInvalid)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.placePiece(3, 0), Invalid);
}

TEST(TicTacToeBoardTest, PlacePieceRowNegative)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.placePiece(-1, 0), Invalid);
}

TEST(TicTacToeBoardTest, PlacePieceColumnNegative)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.placePiece(0, -1), Invalid);
}

TEST(TicTacToeBoardTest, GetPieceColumnInvalid)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.getPiece(0, 3), Invalid);
}

TEST(TicTacToeBoardTest, GetPieceRowInvalid)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.getPiece(3, 0), Invalid);
}

TEST(TicTacToeBoardTest, GetPieceRowNegative)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.getPiece(-1, 0), Invalid);
}

TEST(TicTacToeBoardTest, GetPieceColumnNegative)
{
  TicTacToeBoard t;
	ASSERT_EQ(t.getPiece(0, -1), Invalid);
}

TEST(TicTacToeBoardTest, GetPieceFirst)
{
  TicTacToeBoard t;
  t.placePiece(0, 0);
	ASSERT_EQ(t.getPiece(0, 0), X);
}
