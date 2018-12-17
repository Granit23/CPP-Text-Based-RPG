
output: main.o Game.o Character.o Player.o validateInput.o Menu.o Monster.o TreasureSpace.o BossSpace.o NoAirSpace.o PoisonSpace.o FreezeSpace.o Space.o StartingSpace.o
	g++ -std=c++11 main.o Game.o Character.o Player.o validateInput.o Monster.o TreasureSpace.o BossSpace.o NoAirSpace.o PoisonSpace.o FreezeSpace.o Space.o StartingSpace.o Menu.o -o Diablo 

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Game.o: Game.cpp Game.hpp
	g++ -std=c++11 -c Game.cpp

Character.o: Character.cpp Character.hpp
	g++ -std=c++11 -c Character.cpp

Player.o: Player.cpp Player.hpp
	g++ -std=c++11 -c Player.cpp

validateInput.o: validateInput.cpp validateInput.hpp
	g++ -std=c++11 -c validateInput.cpp

Monster.o: Monster.cpp Monster.hpp
	g++ -std=c++11 -c Monster.cpp

PoisonSpace.o: PoisonSpace.cpp PoisonSpace.hpp
	g++ -std=c++11 -c PoisonSpace.cpp

TreasureSpace.o: TreasureSpace.cpp TreasureSpace.hpp
	g++ -std=c++11 -c TreasureSpace.cpp

BossSpace.o: BossSpace.cpp BossSpace.hpp
	g++ -std=c++11 -c BossSpace.cpp

FreezeSpace.o: FreezeSpace.cpp FreezeSpace.hpp
	g++ -std=c++11 -c FreezeSpace.cpp

NoAirSpace.o: NoAirSpace.cpp NoAirSpace.hpp
	g++ -std=c++11 -c NoAirSpace.cpp	

Space.o: Space.cpp Space.hpp
	g++ -std=c++11 -c Space.cpp

StartingSpace.o: StartingSpace.cpp StartingSpace.hpp
	g++ -std=c++11 -c StartingSpace.cpp

Menu.o: Menu.cpp Menu.hpp
	g++ -std=c++11 -c Menu.cpp

clean:
	rm *.o Diablo
