x = [0:0.25:10];
y = sqrt((1)./((2*(x.^2) - 1).^2 + 16*(x.^2)));

plot(x, y, 'r')
title('Módulo da Resposta em Frequência')
xlabel('Frequência (\omega), (rad, s)')
ylabel('|F(j\omega)|')

h = text(4, 0.7, ['$$|F(j\omega)| = \sqrt{\frac{1}{(2{\omega}^2 - 1)^2 + 16{\omega}^2}}$$'])
set(h, 'Interpreter', 'latex', 'fontsize', 13)