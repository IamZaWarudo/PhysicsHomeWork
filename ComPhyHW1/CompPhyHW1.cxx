
#include <cstdio>
#include <matplot/matplot.h>
#include <string>
#include <vector>

void Stuff(int Num);

int main(){
  Stuff(20);
  return 0;
}


void Stuff(int Num) {
  
  std::vector<double> x = matplot::linspace(0.0, 1.0, Num);
  matplot::hold(matplot::on);

  for(int n = 0; n <= 10; n++) {
    std::vector<double> F;

    for(double X : x) {
      F.push_back(n * (X + (X * X)));
    }
  
  auto Plot = matplot::plot(x, F, "-o"); 
  Plot->line_width(2.5);                
  Plot->marker_size(4);
  Plot->display_name("n=" + std::to_string(n));
  }

 matplot::legend();
 matplot::title(" f(n,x) plot for n = 1 to 10 ");
 matplot::xlabel("x");
 matplot::ylabel(" F = n(x + x^2) ");
 matplot::grid(matplot::on);
 matplot::hold(matplot::off);
 matplot::show();
}


