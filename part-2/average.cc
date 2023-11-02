// Angel Medina Sandoval
// angmedina@csu.fullerton.edu
// @Tsugmii
// Partners: @Lupe1819

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  double sum{0.0};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  bool first{true};

  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double number{std::stod(argument)};
    sum += number;
  }
  double average{0.0};
  average = sum / static_cast<int>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
