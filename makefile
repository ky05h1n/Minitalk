SSRC = server.c ft_printf.c zy_putchar.c zy_putstr.c  zy_argscheck.c  zy_puthexa.c zy_putnbru.c zy_putnbr.c

SSRCB = server_bonus.c ft_printf.c zy_putchar.c zy_putstr.c  zy_argscheck.c  zy_puthexa.c zy_putnbru.c zy_putnbr.c

CSRC = client.c ft_printf.c zy_putchar.c zy_putstr.c  zy_argscheck.c  zy_puthexa.c zy_putnbru.c zy_putnbr.c
 	   
CSRCB = client_bonus.c ft_printf.c zy_putchar.c zy_putstr.c  zy_argscheck.c  zy_puthexa.c zy_putnbru.c zy_putnbr.c

GCC = cc

SNAME = server

SNAMEB = server_bonus

CNAME = client

CNAMEB = client_bonus


all: $(SNAME) $(CNAME) 

$(SNAME): $(SSRC)
	@gcc $(SSRC) -Wall -Werror -Wextra -o $(SNAME)
	@echo "\033[1;32m server is ready !"

$(CNAME): $(CSRC)
	@gcc $(CSRC) -Wall -Werror -Wextra -o $(CNAME)
	@echo "\033[1;32m client is ready !"

bonus: $(SNAMEB) $(CNAMEB)

$(SNAMEB): $(SSRCB) 
	@gcc $(SSRCB) -Wall -Werror -Wextra -o $(SNAMEB)
	@echo "\033[1;32m server bonus is ready !"

$(CNAMEB): $(CSRCB)
	@gcc $(CSRCB) -Wall -Werror -Wextra -o $(CNAMEB)
	@echo "\033[1;32m client bonus is ready !"

clean: 
	@rm -f $(SNAMEB) $(CNAMEB)

fclean: clean
	@rm -f $(SNAME) $(CNAME) $(SNAMEB) $(CNAMEB)
re: fclean all bonus