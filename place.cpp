#include "view.h"
using namespace s21;
void Vision::resizeGL(int w, int h) {
  select->move(width() - 140, 10);
  title->move(width() - 175, 45);
  vertNum->move(width() - 175, 70);
  faceNum->move(width() - 175, 95);
  color->move(width() - 160, 140);
  rF->move(width() - 178, 170);
  gF->move(width() - 178, 200);
  bF->move(width() - 178, 230);
  rFront->move(width() - 165, 170);
  gFront->move(width() - 165, 200);
  bFront->move(width() - 165, 230);
  rB->move(width() - 80, 170);
  gB->move(width() - 80, 200);
  bB->move(width() - 80, 230);
  rBack->move(width() - 67, 170);
  gBack->move(width() - 67, 200);
  bBack->move(width() - 67, 230);
  shape->move(width() - 160, 270);
  circle->move(width() - 168, 300);
  square->move(width() - 85, 300);
  point->move(width() - 140, 330);
  lineConf->move(width() - 160, 370);
  dashed->move(width() - 160, 400);
  solid->move(width() - 75, 400);
  thicking->move(width() - 140, 430);
  translate->move(width() - 160, 470);
  mX->move(width() - 175, 500);
  moveX->move(width() - 160, 495);
  mY->move(width() - 175, 530);
  moveY->move(width() - 160, 525);
  mZ->move(width() - 175, 560);
  moveZ->move(width() - 160, 555);
  rotate->move(width() - 160, 600);
  rX->move(width() - 175, 630);
  rotateX->move(width() - 160, 625);
  rY->move(width() - 175, 660);
  rotateY->move(width() - 160, 655);
  rZ->move(width() - 175, 690);
  rotateZ->move(width() - 160, 685);
  scale->move(width() - 160, 730);
  scaler->move(width() - 160, 755);
  settings->move(width()-160, 810);
  saving->move(width() - 172, 845);
  recovery->move(width() - 77, 845);
  picture->move(width()-160, 900);
  bmp->move(width() - 159, 930), jpeg->move(width() - 74, 930);
  img->move(width() - 120, 960);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
}
