#include<iostream>
#include<cstdlib>
#include<fstream>
#include<vector>

typedef size_t face_t;
typedef std::vector<Player>;


struct

class Dice(){
	private:
		size_t n_faces;
		face_t[] faces;
	public:
		face_t roll(void);
		void Dice();
}





class Player(){
	private:
		name		
	public:
		
}

class RandomPlayer(){
	public:
		int action(void);
}

class BernouliePlayer(){

}

class GoPlayer(){

}

// Main game definition
class Piggame(){
	private:
		void roll_dice();
		
		player_list_t players;

		bool status;
		std::string log_filename;
		

		//Game State
		// + current player
		Player current_player;
		// + log jogadas
		std::array<std::array<int>> record;
		// + score do jogo
		

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
