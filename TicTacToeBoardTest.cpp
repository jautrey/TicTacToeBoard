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
