////////////////////IP-BINARY-CONVERSION///////////////
#include <iostream>

using std:: cin;
using std:: cout;
using std:: to_string;

int main() {

  std::ios::sync_with_stdio (false);

  int list, Ioctet = 0, i;

  std::string ip, Soctet, binary;

  while (1) {

      binary = "";

      ip = "";

      cout << "1. IP TO BINARY\n2. BINARY TO IP\n3. OCTET TO BINARY\n4. OCTET "
              "TO IP\n0. EXIT\n\n-ENTER: ";

      cin >> list;

      switch (list) {

        case 1:

          cout << "-ENTER IP: ";

          cin >> ip;

          for (i = 1; i <= 4; ++i) {

              Ioctet = stoi (ip);

              Soctet = to_string (Ioctet);

              if ((Ioctet < 0) || (255 < Ioctet)) {

                  cout << "-INVALID_INPUT-\n\n";

                  i = -1;

                  break;

                }

              if (128 <= Ioctet) {

                  Ioctet -= 128;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (64 <= Ioctet) {

                  Ioctet -= 64;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (32 <= Ioctet) {

                  Ioctet -= 32;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (16 <= Ioctet) {

                  Ioctet -= 16;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (8 <= Ioctet) {

                  Ioctet -= 8;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (4 <= Ioctet) {

                  Ioctet -= 4;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (2 <= Ioctet) {

                  Ioctet -= 2;

                  binary += '1';
                }

              else {

                  binary += '0';
                }

              if (1 <= Ioctet) {

                  Ioctet -= 1;

                  binary += "1.";
                }

              else {

                  binary += "0.";
                }

              ip = ip.erase (0, 1 + Soctet.length ());

          }

          if (i == -1) {

              break;
            }

          cout << "-BINARY: " << binary.erase (binary.length () - 1, 1) << '\n' << '\n';

          break;

        case 2:

          cout << "-ENTER BINARY: ";

          cin >> binary;

          if (binary.length () != 35) {

              cout << "-INVALID INPUT\n";

              break;
            }

          for (i = 1; i <= 4; ++i) {

              Ioctet = 0;

              if (binary[0] == '1') {

                  Ioctet += 128;
                }

              if (binary[1] == '1') {

                  Ioctet += 64;
                }

              if (binary[2] == '1') {

                  Ioctet += 32;
                }

              if (binary[3] == '1') {

                  Ioctet += 16;
                }

              if (binary[4] == '1') {

                  Ioctet += 8;
                }

              if (binary[5] == '1') {

                  Ioctet += 4;
                }

              if (binary[6] == '1') {

                  Ioctet += 2;
                }

              if (binary[7] == '1') {

                  Ioctet += 1;
                }

              binary = binary.erase (0, 9);

              ip += to_string (Ioctet);

              ip += '.';
            }

          cout << "-IP: " << ip.erase (ip.length () - 1, 1) << '\n' << '\n';

          break;

        case 3:

          cout << "-ENTER IP Octet: ";

          cin >> ip;

          Ioctet = stoi (ip);

          if ((Ioctet < 0) || (255 < Ioctet)) {

              cout << "-INVALID_INPUT-";

              break;
            }

          if (128 <= Ioctet) {

              Ioctet -= 128;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (64 <= Ioctet) {

              Ioctet -= 64;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (32 <= Ioctet) {

              Ioctet -= 32;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (16 <= Ioctet) {

              Ioctet -= 16;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (8 <= Ioctet) {

              Ioctet -= 8;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (4 <= Ioctet) {

              Ioctet -= 4;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (2 <= Ioctet) {

              Ioctet -= 2;

              binary += '1';
            }

          else {

              binary += '0';
            }

          if (1 <= Ioctet) {

              Ioctet -= 1;

              binary += "1";
            }

          else {

              binary += "0";
            }

          cout << "-BINARY: " << binary << '\n' << '\n';

          break;

        case 4:

          cout << "-ENTER BINARY Octet: ";

          cin >> binary;

          if (binary.length () != 8) {

              cout << "-INVALID INPUT\n";

              break;
            }

          if (binary[0] == '1') {

              Ioctet += 128;
            }

          if (binary[1] == '1') {

              Ioctet += 64;
            }

          if (binary[2] == '1') {

              Ioctet += 32;
            }

          if (binary[3] == '1') {

              Ioctet += 16;
            }

          if (binary[4] == '1') {

              Ioctet += 8;
            }

          if (binary[5] == '1') {

              Ioctet += 4;
            }

          if (binary[6] == '1') {

              Ioctet += 2;
            }

          if (binary[7] == '1') {

              Ioctet += 1;
            }

          cout << "-IP: " << to_string (Ioctet) << '\n' << '\n';

          break;

        case 0:

          break;

        default:

          cout << "-INVALID INPUT-" << '\n';

          break;

        }

      if (list == 0) {

          break;

        }

    }

  return 0;
}
