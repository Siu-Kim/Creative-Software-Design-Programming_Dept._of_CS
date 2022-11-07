#include <stdio.h>

using namespace std;

class Canvas {
    public:
        Canvas(size_t row, size_t col);
        ~Canvas();
        // Change this canvas size to w x h. Preserve already existing shapes on the canvas.
        void Resize(size_t w, size_t h);
        // Dot with the brush at (x,y). If (x,y) is outside the canvas, just ignore it.
        bool DrawPixel(int x, int y, char brush);
        //Print out the canvas
        void Print();
        // Erase all (initialize with '.')
        void Clear();
    private:
        int _row, _col;
        char** _canv;
};

class Shape {
    public:
        Shape(int fx, int fy, char brush);
        virtual ~Shape() {};
        virtual void Draw(Canvas* canvas) {};
        virtual void Print() {};
    protected:
        int _fx, _fy;
        char _brush;
};

class Rectangle : public Shape { 
    public:
        Rectangle(int fx, int fy, char brush, int w, int h);
        ~Rectangle() {};
        void Draw(Canvas* canvas);
        void Print();
    private:
        int _w, _h;
};

class UpTriangle : public Shape { 
    public:
        UpTriangle(int fx, int fy, char brush, int h);
        ~UpTriangle() {};
        void Draw(Canvas* canvas);
        void Print();
    private:
        int _h;
};

class DownTriangle : public Shape { 
    public:
        DownTriangle(int fx, int fy, char brush, int h);
        ~DownTriangle() {};
        void Draw(Canvas* canvas);
        void Print();
    private:
        int _h;
};

class Diamond : public Shape {
    public:
        Diamond(int fx, int fy, char brush, int d);
        ~Diamond() {};
        void Draw(Canvas* canvas);
        void Print();
    private:
        int _d;
};