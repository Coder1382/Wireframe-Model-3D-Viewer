#include "view.h"
using namespace s21;
void Vision::declarating() {
  select = new QPushButton(this);
  select->setText("Open File");
  select->setStyleSheet("width:100;height:30;background:lime;border-radius:10;");
  title = new QLabel(this);
  vertNum = new QLabel(this);
  faceNum = new QLabel(this);
  rF = new QLabel(this), gF = new QLabel(this), bF = new QLabel(this);
  rB = new QLabel(this), gB = new QLabel(this), bB = new QLabel(this);
  rF->setStyleSheet("color:lime;");
  gF->setStyleSheet("color:lime;");
  bF->setStyleSheet("color:lime;");
  rB->setStyleSheet("color:lime;");
  gB->setStyleSheet("color:lime;");
  bB->setStyleSheet("color:lime;");
  rFront = new QSlider(Qt::Horizontal, this);
  gFront = new QSlider(Qt::Horizontal, this);
  bFront = new QSlider(Qt::Horizontal, this);
  rBack = new QSlider(Qt::Horizontal, this);
  gBack = new QSlider(Qt::Horizontal, this);
  bBack = new QSlider(Qt::Horizontal, this);
  rF->setText("r"), gF->setText("g"), bF->setText("b");
  rB->setText("r"), gB->setText("g"), bB->setText("b");
  rFront->resize(65, 20), gFront->resize(65, 20), bFront->resize(65, 20);
  rBack->resize(65, 20), gBack->resize(65, 20), bBack->resize(65, 20);
  rFront->setRange(0, 100), gFront->setRange(0, 100), bFront->setRange(0, 100);
  rBack->setRange(0, 100), gBack->setRange(0, 100), bBack->setRange(0, 100);
  color = new QLabel(this);
  color->setText("Color Picker"), labeling(color);
  shape = new QLabel(this);
  shape->setText("Point Shape"), labeling(shape);
  circle = new QCheckBox(this);
  square = new QCheckBox(this);
  circle->setText("round"), square->setText("square");
  circle->setStyleSheet("color:lime");
  square->setStyleSheet("color:lime");
  point = new QSlider(Qt::Horizontal, this);
  lineConf = new QLabel(this);
  lineConf->setText("Line Shape"), labeling(lineConf);
  dashed = new QCheckBox(this), solid = new QCheckBox(this);
  dashed->setText("dash"), solid->setText("solid");
  dashed->setStyleSheet("color:lime; border-color:lime");
  solid->setStyleSheet("color:lime; border-color:lime");
  thicking = new QSlider(Qt::Horizontal, this);
  point->resize(100, 20), thicking->resize(100, 20);
  point->setRange(0, 10), thicking->setRange(0, 10);
  translate = new QLabel(this);
  labeling(title), labeling(vertNum), labeling(faceNum);
  translate->setText("Translate"), labeling(translate);
  mX = new QLabel(this);
  mX->setText("X"), mX->setStyleSheet("color:lime;");
  moveX = new QSlider(Qt::Horizontal, this);
  moveX->resize(155, 25), moveX->setRange(-width() / 6.2, width() / 10);
  connect(moveX, &QSlider::valueChanged, this, &Vision::translating);
  mY = new QLabel(this);
  mY->setText("Y"), mY->setStyleSheet("color:lime;");
  moveY = new QSlider(Qt::Horizontal, this);
  moveY->resize(155, 25), moveY->setRange(-height() / 3.8, height() / 10);
  connect(moveY, &QSlider::valueChanged, this, &Vision::translating);
  mZ = new QLabel(this);
  mZ->setText("Z"), mZ->setStyleSheet("color:lime");
  moveZ = new QSlider(Qt::Horizontal, this);
  moveZ->resize(155, 25), moveZ->setRange(0, 10);
  connect(moveZ, &QSlider::valueChanged, this, &Vision::scalingZ);
  rotate = new QLabel(this);
  rotate->setText("Rotate"), labeling(rotate);
  rX = new QLabel(this);
  rX->setText("X"), rX->setStyleSheet("color:lime");
  rotateX = new QSlider(Qt::Horizontal, this);
  rotateX->resize(155, 25), rotateX->setRange(0, 360);
  connect(rotateX, &QSlider::valueChanged, this, &Vision::rotating);
  rY = new QLabel(this);
  rY->setText("Y"), rY->setStyleSheet("color:lime");
  rotateY = new QSlider(Qt::Horizontal, this);
  rotateY->resize(155, 25), rotateY->setRange(0, 360);
  connect(rotateY, &QSlider::valueChanged, this, &Vision::rotating);
  rZ = new QLabel(this);
  rZ->setText("Z"), rZ->setStyleSheet("color:lime");
  rotateZ = new QSlider(Qt::Horizontal, this);
  rotateZ->resize(155, 25), rotateZ->setRange(0, 360);
  connect(rotateZ, &QSlider::valueChanged, this, &Vision::rotating);
  scale = new QLabel(this);
  scale->setText("Scale"), labeling(scale);
  scaler = new QSlider(Qt::Horizontal, this);
  scaler->resize(155, 25), scaler->setRange(0, 10);
  settings = new QLabel(this), labeling(settings);
  settings->setText("Save Settings"), settings->setStyleSheet("color:lime");
  saving = new QPushButton(this);
  saving->setText("Save");
  saving->setStyleSheet("width:70;height:26;background:lime;border-radius:10");
  recovery = new QPushButton(this);
  recovery->setText("Load");
  recovery->setStyleSheet("width:70;height:26;background:lime;border-radius:10");
  picture = new QLabel(this), labeling(picture);
  picture->setText("Screenshot"), picture->setStyleSheet("color:lime");
  bmp = new QCheckBox(this);
  jpeg = new QCheckBox(this);
  bmp->setText("bmp"), jpeg->setText("jpeg");
  bmp->setStyleSheet("color:lime");
  jpeg->setStyleSheet("color:lime");
  img = new QPushButton(this);
  img->setText("Foto");
  img->setStyleSheet("width:70;height:26;background:lime;border-radius:10");
}
