#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

using namespace std;

int clean() {
struct winsize w;
ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

std::cin.clear();
std::cin.ignore(1, '\n');

int i = 0;
while (w.ws_row > i){
  printf ("\n");
  i++;
}
return 0;
}

int cf() {
  int n;

  srand (time(NULL));
  n = rand() % 2;

  if (n == 0) cout << "It's Heads!\n";
  else cout << "It's Tails! \n";
  system("sleep 2");

return 0;
}

int rps() {
  clean();
  int pc; // Player Choice
  int cc; // Computer Choice

  srand(time(NULL));
  cc = rand() % 3; // 0 - 2
    
  do {
  cout << "Enter choice (0-2): ";
  if (!(cin >> pc)) {
    cout << "You entered a non-numeric, or an invalid number..." << endl;
    break;
  }
  if (pc > 2) {
    cout << "You entered a non-numeric, or an invalid number..." << endl;
    break;
  }

  if (cc == 0){
    cout << "Computer: Rock\n";
  } else if (cc == 1) {
    cout << "Computer: Paper\n";
  } else {
    cout << "Computer: Scissors\n";
  }

  if (pc == 0){
    cout << "Player: Rock\n";
  } else if (pc == 1) {
    cout << "Player: Paper\n";
  } else {
    cout << "Player: Scissors\n";
  }

  pc += 1; // BORROWED FROM DISCORD BOT THAT HAD 1 - 3 
  cc += 1;
  if (pc > 0) {
    if(cc == pc){
      cout << "It's a Tie.\n";
      break;
  }else if(cc + pc == 4){
  if(cc - pc == 2){
    cout << "Player won\n";
    break;
  }else{
    cout << "Computer won\n";
    break;
  }    
  }else if(cc < pc){
    cout << "Player won\n";
    break;
  }else if(cc > pc);
    cout << "Computer won\n";
    break;
  }else{
    cout << "ERROR\n";
    break;
  }

  } while (pc != -1);


  system("sleep 3");

return 0;
}

int main() {
int c;
int r = -1;

cout << "\tKurokodairu's arcade\n";
cout << "1. Coinflip\n";
cout << "2. Rock, Paper, Scissors\n";
cout << "> ";
cin >> r;



switch (r)
{
    // Random Num, 0 - 1
    case 1:
      cf();
      clean();
    break;
    // ROCK PAPER SCISSORS
    case 2:
      rps();
      clean();
    break;

    default:
      clean();
    break;
}

return main();

}
