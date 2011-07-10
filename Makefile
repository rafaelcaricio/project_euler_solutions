run:
	@gcc -o aqui problem_$(so)/solution.c && ./aqui && rm aqui

next:
	@mkdir problem_$(so)/ && touch problem_$(so)/solution.c
