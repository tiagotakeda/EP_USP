x = [0 0.25 0.5 1 2 5 10];
y = sqrt((1)./((2*(x.^2) - 1).^2 + 16*(x.^2)));
plot(x, y) 
%hold on

title('Módulo da Resposta em Frequência')
xlabel('Frequência (\omega) = [0  0,25  0,50  1,00  2,00  5,00  10,00], (rad, s)')
ylabel('|F(j\omega)|')

a = text(4, 0.90, ['$$|F(j*0,00)| = 1,0000$$'])
b = text(4, 0.85, ['$$|F(j*0,25)| = 0,7526$$'])
c = text(4, 0.80, ['$$|F(j*0,50)| = 0,4851$$'])
d = text(4, 0.75, ['$$|F(j*1,00)| = 0,2425$$'])
e = text(4, 0.70, ['$$|F(j*2,00)| = 0,0941$$'])
f = text(4, 0.65, ['$$|F(j*5,00)| = 0,0189$$'])
g = text(4, 0.60, ['$$|F(j*10,0)| = 0,0049$$'])
set(a, 'Interpreter', 'latex', 'fontsize', 13)
set(b, 'Interpreter', 'latex', 'fontsize', 13)
set(c, 'Interpreter', 'latex', 'fontsize', 13)
set(d, 'Interpreter', 'latex', 'fontsize', 13)
set(e, 'Interpreter', 'latex', 'fontsize', 13)
set(f, 'Interpreter', 'latex', 'fontsize', 13)
set(g, 'Interpreter', 'latex', 'fontsize', 13)


h = text(4, 0.45, ['$$|F(j\omega)| = \sqrt{\frac{1}{(2{\omega}^2 - 1)^2 + 16{\omega}^2}}$$'])
set(h, 'Interpreter', 'latex', 'fontsize', 13)