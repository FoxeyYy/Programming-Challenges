/*
 * @author Héctor Del Campo
 * Problem ID 11586 - Train Tracks
 */

#include <cstdio>

int main(){
  using namespace std;

  int casesNum, connectedNum, piecesNum;
  char c;

  scanf("%d", &casesNum);
  getchar();

  while(casesNum--){

    connectedNum = 0;
    piecesNum = 0;

    while((c = getchar()) != '\n'){
      if(c == 'F'){ connectedNum++; piecesNum++; }
      else if(c == 'M'){ connectedNum--; piecesNum++; }
	
    }

    if(connectedNum == 0 && piecesNum > 3) printf("LOOP\n");
    else printf("NO LOOP\n");

  }

  return 0;

}
