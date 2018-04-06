#include<iostream>
#include<random>
#include<cstdlib>

namespace pd{
	struct Dice{
		std::mt19937 gen;
		std::uniform_int_distribution<int> dis;

	}
	set_dice
	roll
}



int main(void){
	
	pd::GameState gs;

	initialize_game ( gs );

	render_welcome_msg ( gs );

	while(not game_over ( gs )){

		process_events( gs );
		update( gs );
		render( gs );

	}

	render_winner( gs );

	return 0;
}
