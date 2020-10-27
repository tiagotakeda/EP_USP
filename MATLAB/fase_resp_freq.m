x = [0:0.01:10];
y = atan((-4*x)./(1 - 2*x.^2));

plot(x, y, 'r')
title('Fase do Módulo da Resposta em Frequência')
xlabel('Frequência (\omega), (rad, s)')
ylabel(['\phi = arg(F(j\omega)), (rad)'])

h = text(3, -0.5, ['$$\phi_{jw} = arctan(\frac{-4\omega}{1 - 2{\omega}^2})$$'])
set(h, 'Interpreter', 'latex', 'fontsize', 11.5)