//----------------------------------------------------------------------------
void showgameover() {
  gb.display.clear();
  gb.display.setColor(0);
  gb.display.fillRect(22,16,39,9);
  gb.display.setColor(1);
  gb.display.cursorX=24;
  gb.display.cursorY=18;
  gb.display.print("GAME OVER");
  gb.display.drawRect(22,16,39,9);
  gb.display.cursorX=4;
  gb.display.cursorY=42;
  gb.display.print("PRESS B TO CONTINUE");
  if (gb.buttons.pressed(BUTTON_B)) {
    gamestatus="title";
    gb.sound.playOK();
  }      
}
//----------------------------------------------------------------------------
void showtitle() {
  gb.display.clear();
  gb.display.setColor(WHITE);
  if (score > highscore) { highscore = score; }
  gb.display.cursorX=0;
  gb.display.cursorY=0;   
  gb.display.print("  LAST         HIGH");
  gb.display.cursorX=14-2*(score>9)-2*(score>99)-2*(score>999);
  gb.display.cursorY=6;
  gb.display.print(score);
  gb.display.cursorX=66-2*(highscore>9)-2*(highscore>99)-2*(highscore>999);
  gb.display.cursorY=6;
  gb.display.print(highscore);
  gb.display.setColor(YELLOW);
  gb.display.drawBitmap(10,20,gamelogo);
  gb.display.cursorX=0;
  gb.display.cursorY=56;
  gb.display.setColor(WHITE);
  gb.display.print(" A:PLAY   MENU:QUIT");
  if (gb.buttons.pressed(BUTTON_A)) {
    gamestatus="newgame";
    gb.sound.playOK();
  }
  if (gb.buttons.pressed(BUTTON_MENU)) {
    // Menu: Pause / Retour à l'écran de titre
  }
}


