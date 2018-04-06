#include<iostream>
#include<cstdlib>

int main(void){
	
	GameState gs;

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
