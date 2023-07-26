//#include<iostream>
//using namespace std;
//
//
//
//	char Board[3][3] = { {'0','1','2'} ,  {'3','4','5'} , {'6','7','8'}};
//	
//	void drawboard()
//	{
//		cout << endl << endl;
//		cout << "                               " << "----------" << endl;
//		cout <<"                               "<<"|" << Board[0][0] << " " << "|" << Board[0][1] << " " << "|" << Board[0][2] << " " << "|" << endl;
//		cout <<"                               " <<"----------" << endl;;
//		cout <<"                               " << "|" << Board[1][0] << " " << "|" << Board[1][1] << " " << "|" << Board[1][2] << " " << "|" << endl;
//		cout <<"                               " << "----------" << endl;
//		cout <<"                               " << "|" << Board[2][0] << " " << "|" << Board[2][1] << " " << "|" << Board[2][2] << " " << "|" << endl;
//		cout <<"                               " << "----------" << endl;
//		cout << endl;
//		cout << endl;
//		cout << endl;
//		cout << "Player 1 : O" << endl;;
//		cout << "Player 2 : X" << endl;
//
//
//		
//	}
//
//	void Player1()
//	{
//		int P1;
//		
//
//		if (Board[0][0] == '0' || Board[0][1] == '1' || Board[0][2] == '2' || Board[1][0] == '3' || Board[1][1] == '4' || Board[1][2] == '5' || Board[2][0] == '6' || Board[2][1] == '7' || Board[2][2] == '8')
//		{
//			cout << "Player 1 Turn :";
//			cin >> P1;
//			cout << endl;
//			bool p1turn = false;
//			while (!p1turn)
//			{
//				if (P1 == 0 && Board[0][0] == '0')
//				{
//
//					Board[0][0] = 'O';
//					drawboard();
//					p1turn = true;		
//					
//				}
//				else if (P1 == 0 && Board[0][0] != '0')
//				{
//
//					cout << "Player 1 Select number from remaining numbers : ";
//					cin >> P1;
//					cout << endl;
//				}
//				else if (P1 == 1 && Board[0][1] == '1')
//				{
//					Board[0][1] = 'O';
//					drawboard();
//					p1turn = true;
//				
//				}
//				else if (P1 == 1 && Board[0][1] != '1')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//				}
//				else if (P1 == 2 && Board[0][2] == '2')
//				{
//
//					Board[0][2] = 'O';
//					drawboard();
//					p1turn = true;
//					
//				}
//				else if (P1 == 2 && Board[0][2] == '2')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//				}
//
//				else if (P1 == 3 && Board[1][0] == '3')
//				{
//					Board[1][0] = 'O';
//					drawboard();
//					p1turn = true;
//					
//				}
//				else if (P1 == 3 && Board[1][0] != '3')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//
//					cin >> P1;
//					cout << endl;
//				}
//				else if (P1 == 4 && Board[1][1] == '4')
//				{
//					Board[1][1] = 'O';
//					drawboard();
//					p1turn = true;
//					
//				}
//				else if (P1 == 4 && Board[1][1] != '4')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//				}
//				else if (P1 == 5 && Board[1][2] == '5')
//				{
//					Board[1][2] = 'O';
//					drawboard();
//					p1turn = true;
//					//checker();
//
//				}
//				else if (P1 == 5 && Board[1][2] != '5')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//				}
//				else if (P1 == 6 && Board[2][0] == '6')
//				{
//					Board[2][0] = 'O';
//					drawboard();
//					p1turn = true;
//				
//				}
//				else if (P1 == 6 && Board[2][0] != '6')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//				}
//				else if (P1 == 7 && Board[2][1] == '7')
//				{
//					Board[2][1] = 'O';
//					drawboard();
//					p1turn = true;
//				}
//				else if (P1 == 7 && Board[2][1] != '7')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//
//				}
//				else if (P1 == 8 && Board[2][2] == '8')
//				{
//					Board[2][2] = 'O';
//					drawboard();
//					p1turn = true;
//				
//
//				}
//				else if (P1 == 8 && Board[2][2] != '8')
//				{
//
//					cout << "Player 1 Select number from remaining numbers :";
//					cin >> P1;
//					cout << endl;
//
//				}
//				else if (P1 > 8 || P1 < 0)
//				{
//					cout << "Player 1 Enter number shows on Board :";
//					cin >> P1;
//					cout << endl;
//				}
//			}
//		}
//
//	}
//	void Player2()
//	{
//		int P2;
//
//		if (Board[0][0] == '0' || Board[0][1] == '1' || Board[0][2] == '2' || Board[1][0] == '3' || Board[1][1] == '4' || Board[1][2] == '5' || Board[2][0] == '6' || Board[2][1] == '7' || Board[2][2] == '8')
//		{
//			cout << "Player 2 Turn :";
//			cin >> P2;
//			cout << endl;
//			bool p2turn = false;
//			while (!p2turn)
//			{
//				if (P2 == 0 && Board[0][0] == '0')
//				{
//					Board[0][0] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 0 && Board[0][0] != '0')
//				{
//
//					cout << "Player 2 Select number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 1 && Board[0][1] == '1')
//				{
//					Board[0][1] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 1 && Board[0][1] != '1')
//				{
//
//					cout << "Player 2 Select number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 2 && Board[0][2] == '2')
//				{
//					Board[0][2] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 2 && Board[0][2] != '2')
//				{
//
//					cout << "Player 2 Select from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 3 && Board[1][0] == '3')
//				{
//					Board[1][0] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 3 && Board[1][0] != '3')
//				{
//
//					cout << "Player 2 Select  number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 4 && Board[1][1] == '4')
//				{
//					Board[1][1] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 4 && Board[1][1] != '4')
//				{
//
//					cout << "Player 2 Select number from remaining numbers :" << endl;
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 5 && Board[1][2] == '5')
//				{
//					Board[1][2] = 'X';
//					drawboard();
//					p2turn = true;
//
//				}
//				else if (P2 == 5 && Board[1][2] != '5')
//				{
//
//					cout << "Player 2 Select number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 6 && Board[2][0] == '6')
//				{
//					Board[2][0] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 6 && Board[2][0] != '6')
//				{
//
//					cout << "Player 2 Select number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 7 && Board[2][1] == '7')
//				{
//					Board[2][1] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 7 && Board[2][1] != 7)
//				{
//
//					cout << "Player 2 Select number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 == 8 && Board[2][2] == '8')
//				{
//					Board[2][2] = 'X';
//					drawboard();
//					p2turn = true;
//				}
//				else if (P2 == 8 && Board[2][2] != '8')
//				{
//
//					cout << "Player 2 Select number from remaining numbers :";
//					cin >> P2;
//					cout << endl;
//				}
//				else if (P2 > 8 || P2 < 0)
//				{
//					cout << "Player 2 Enter number shows on Board :";
//					cin >> P2;
//					cout << endl;
//				}
//			}
//		}
//	}
//	
//	int main()
//	{
//		drawboard();
//		cout << "                                          " << "GAME STARTS :)" << endl<<endl;
//		cout << "                      " << "Rule: Select any number from Board " << endl<<endl;
//		bool stop = false;
//		while (!stop)
//		{
//			if (Board[0][0] == '0' || Board[0][1] == '1' || Board[0][2] == '2' || Board[1][0] == '3' || Board[1][1] == '4' || Board[1][2] == '5' || Board[2][0] == '6' || Board[2][1] == '7' || Board[2][2] == '8')
//
//			{
//				Player1();
//				
//				
//					//player1
//					if (Board[0][0] == 'O' && Board[0][1] == 'O' && Board[0][2] == 'O') //R=1
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//
//						return 0;
//
//					}
//					if (Board[1][0] == 'O' && Board[1][1] == 'O' && Board[1][2] == 'O')   //R=2
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//					}
//					if (Board[2][0] == 'O' && Board[2][1] == 'O' && Board[2][2] == 'O')  //R=3
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//
//					}
//					if (Board[0][0] == 'O' && Board[1][0] == 'O' && Board[2][0] == 'O') //C=1
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//					}
//					if (Board[0][1] == 'O' && Board[1][1] == 'O' && Board[2][1] == 'O') //C=2
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//
//					}
//					if (Board[0][2] == 'O' && Board[1][2] == 'O' && Board[2][2] == 'O')  //C=3
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//
//					}
//					if (Board[0][0] == 'O' && Board[1][1] == 'O' && Board[2][2] == '0')
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//
//					}
//					if (Board[0][2] == 'O' && Board[1][1] == 'O' && Board[2][0] == 'O')
//					{
//						cout << "                                      " << "CONGRATULATIONS PLAYER 1 WINS  :)" << endl;
//						return 0;
//
//					}
//					//////////////////
//					
//
//				
//				if (Board[0][0] == '0' || Board[0][1] == '1' || Board[0][2] == '2' || Board[1][0] == '3' || Board[1][1] == '4' || Board[1][2] == '5' || Board[2][0] == '6' || Board[2][1] == '7' || Board[2][2] == '8')
//				{
//					Player2();
//					
//						//////////////////
//						///player2
//						if (Board[0][0] == 'X' && Board[0][1] == 'X' && Board[0][2] == 'X') //R=1
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//						if (Board[1][0] == 'X' && Board[1][1] == 'X' && Board[1][2] == 'X')   //R=2
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//						if (Board[2][0] == 'X' && Board[2][1] == 'X' && Board[2][2] == 'X')  //R=3
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//						if (Board[0][0] == 'X' && Board[1][0] == 'X' && Board[2][0] == 'X') //C=1
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//						if (Board[0][1] == 'X' && Board[1][1] == 'X' && Board[2][1] == 'X') //C=2
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//						if (Board[0][2] == 'X' && Board[1][2] == 'X' && Board[2][2] == 'X')  //C=3
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//						}
//						if (Board[0][0] == 'X' && Board[1][1] == 'X' && Board[2][2] == 'X')
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//						if (Board[0][2] == 'X' && Board[1][1] == 'X' && Board[2][0] == 'X')
//						{
//							cout << "                                      " << "CONGRATULATIONS PLAYER 2 WINS  :)" << endl;
//							return 0;
//
//						}
//
//					
//				}
//				else
//				{
//					stop = true;
//					cout <<"                                     " << "GAME ENDS NO ONES WINS :(" ;
//				}
//			}
//			else
//			{
//				stop = true;
//				cout << "                                       " << "GAME ENDS NO ONES WINS :(";
//			}
//
//		}
//	
//	}
	
