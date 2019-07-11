double pi = 4*atan(1);
double r, theta, phi;
r = sqrt(x*x+y*y+z*z);
theta = acos(z/r) * 180.0/pi;
phi = atan2(y,x) * 180.0/pi;
printf("%f %f %f", r, theta, phi);
