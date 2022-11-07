#include "canvas.h"
#include <iostream>

Canvas::Canvas(size_t row, size_t col) { 
    _row = col; _col = row;
    _canv = new char*[_row];
    for (int i=0; i<_row; i++) _canv[i] = new char[_col];
}

Canvas::~Canvas() {
    for (int i=0; i<_row; i++) delete _canv[i];
    delete _canv;
}

void Canvas::Resize(size_t w, size_t h) {
    for (int i=0; i<_row; i++) delete _canv[i];
    delete _canv;
    _row = h; _col = w;
    _canv = new char*[_row];
    for (int i=0; i<_row; i++) _canv[i] = new char[_col];
}

bool Canvas::DrawPixel(int x, int y, char brush) {
    if (x < _row && 0 <= x && y < _col && 0 <= y) _canv[x][y] = brush;
    return true;
}

void Canvas::Print() {
    cout << " ";
    for (int i=0; i<_col; i++) cout << i%10;
    cout << endl;
    for (int i=0; i<_row; i++) {
        cout << i%10;
        for (int j=0; j<_col; j++) cout << _canv[i][j];
        cout << endl;
    }
}

void Canvas::Clear() {
    for (int i=0; i<_row; i++) {
        for (int j=0; j<_col; j++) _canv[i][j] = '.';
    }
}

Shape::Shape(int fx, int fy, char brush) { _fx = fx; _fy = fy; _brush = brush; }
Rectangle::Rectangle(int fx, int fy, char brush, int w, int h) : Shape(fx, fy, brush) { _w = w; _h = h; }
UpTriangle::UpTriangle(int fx, int fy, char brush, int h) : Shape(fx, fy, brush) { _h = h; }
DownTriangle::DownTriangle(int fx, int fy, char brush, int h) : Shape(fx, fy, brush) { _h = h; }
Diamond::Diamond(int fx, int fy, char brush, int d) : Shape(fx, fy, brush) { _d = d; }

void Rectangle::Draw(Canvas* canvas) {
    for (int x=_fx; x<_fx+_w; x++) {
        for (int y=_fy; y<_fy+_h; y++) canvas->DrawPixel(y, x, _brush);
    }
}

void Rectangle::Print() {
    cout << "rect " << _fx << " " << _fy << " " << _w << " " << _h << " " << _brush << endl;
}

void UpTriangle::Draw(Canvas* canvas) {
    for (int y=_fy; y<_fy+_h; y++) {
        for (int x=_fx-(y-_fy); x<_fx+(y-_fy)+1; x++) canvas->DrawPixel(y, x, _brush);
    }
}

void UpTriangle::Print() {
    cout << "tri_up " << _fx << " " << _fy << " " << _h << " " << _brush << endl;
}

void DownTriangle::Draw(Canvas* canvas) {
    for (int y=_fy; y>_fy-_h; y--) {
        for (int x=_fx-(_fy-y); x<_fx+(_fy-y)+1; x++) canvas->DrawPixel(y, x, _brush);
    }
}

void DownTriangle::Print() {
    cout << "tri_down " << _fx << " " << _fy << " " << _h << " " << _brush << endl;
}

void Diamond::Draw(Canvas* canvas) {
    for (int y=_fy; y<_fy+_d+_d+1; y++) {
        for (int x=_fx-_d+abs(y-_fy-_d); x<_fx+1+_d-abs(y-_fy-_d); x++) canvas->DrawPixel(y, x, _brush);
    }
}

void Diamond::Print() {
    cout << "diamond " << _fx << " " << _fy << " " << _d << " " << _brush << endl;
}