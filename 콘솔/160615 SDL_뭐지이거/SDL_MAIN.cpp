#include <SDL.h>

SDL_Window* window;
SDL_Renderer* renderer;
SDL_Event event;



int main(int argc, char **argv)
{
	int quit = 0;

	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow("Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, 0);

	while (!quit)
	{
		while (SDL_PollEvent(&event)){
			switch (event.type){
			case SDL_QUIT:
				quit = 1;
				break;
			}
		}

		SDL_RenderClear(renderer);

		//render

		SDL_RenderPresent(renderer);
		SDL_Delay(20);
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	SDL_Quit();
	return 0;
}
