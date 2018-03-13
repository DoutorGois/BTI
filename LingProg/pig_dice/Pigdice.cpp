#include<iostream>
#include<cstdlib>
#include<fstream>

class Player(){
	private:
		name		
	public:
		
}

class RandomPlayer(){

}

class BernouliePlayer(){

}

class GoPlayer(){

}

class Piggame(){
	private:
		void roll_dice();
		std::array<Player> players;
		std::array<std::array<int>> record;
		bool status;
		std::string log_filename;

		
	public:
		//Score
		void getScore(void);
		void setScore(void);
		std::array<Player> getPlayers(void);

		//Player
		void addPlayer(Player newPlayer);
		void rmPlayer(Player oldPlayer);
		
		//Gameplay
		void start(void);
		void setup(void);
		int roll_dice(void);

		//Logging
		void record(void);
		void saveState(void);

}

void Piggame::setStatus(bool new_status){
	status = new_status;
}

void Piggame::getStatus(){
	return status;
}

void Piggame::display(){
	std::cout<<"Diplay\n";
}

void Piggame::addRecord(){
		
}

void Piggame::saveState(){
	ofstream log_file;

	//opening file
	logfile.open(log_filename);

	//write to file
	

	//close file
	logfile.close()
}

void Piggame::start(){
	
	setStatus(True);
	
	while(getStatus()){
		
		for(auto &player : getPlayers()){
			
			getBehavior(player.behave());
			
			if(getStatus()){
				break;
			}
			
		}
		
		display();
		saveState();
		
	}
	
}
