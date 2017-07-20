#include <GL/glut.h>

void display(void)
{
  // ウィンドウを塗りつぶす
  glClear(GL_COLOR_BUFFER_BIT);

  // 命令を一括実行(命令がすぐに実行されるわけではないため)
  glFlush();
}

void init(void)
{
  // glClear(Gl_COLOR_BUFFER_BIT)でウィンドウを塗りつぶす色を指定
  glClearColor(0.0, 0.0, 1.0, 1.0);
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);

  // ディスプレイの表示モードを設定
  glutInitDisplayMode(GLUT_RGBA);
  
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  init();
  glutMainLoop();
  return 0;
}
