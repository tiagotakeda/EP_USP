x = [0 0.25 0.5 1 2 5 10];
y = atan((-4*x)./(1 - 2*x.^2));


plot(x, y)
title('Fase do Módulo da Resposta em Frequência')
xlabel('Frequência (\omega) = [0  0,25  0,50  1,00  2,00  5,00  10,00], (rad, s)')
ylabel(['\phi_{j\omega} = arg(F(j\omega)), (rad)'])

a = text(2, 0.20, ['$$arg[F(j*0,00)] = 0,0000$$'])
b = text(2, 0.05, ['$$arg[F(j*0,25)] = -0,8520$$'])
c = text(2, -0.10, ['$$arg[F(j*0,50)] = -1,3258$$'])
d = text(2, -0.25, ['$$arg[F(j*1,00)] = 1,3258$$'])
e = text(2, -0.40, ['$$arg[F(j*2,00)] = 0,8520$$'])
f = text(2, -0.55, ['$$arg[F(j*5,00)] = 0,3875$$'])
g = text(2, -0.70, ['$$arg[F(j*10,0)] = 0,1984$$'])
set(a, 'Interpreter', 'latex', 'fontsize', 13)
set(b, 'Interpreter', 'latex', 'fontsize', 13)
set(c, 'Interpreter', 'latex', 'fontsize', 13)
set(d, 'Interpreter', 'latex', 'fontsize', 13)
set(e, 'Interpreter', 'latex', 'fontsize', 13)
set(f, 'Interpreter', 'latex', 'fontsize', 13)
set(g, 'Interpreter', 'latex', 'fontsize', 13)

h = text(2, -1, ['$$\phi_{jw} = arctan(\frac{-4\omega}{1 - 2{\omega}^2})$$'])
set(h, 'Interpreter', 'latex', 'fontsize', 11.5)