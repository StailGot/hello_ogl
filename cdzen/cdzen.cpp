#include <array>
#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{
  ::glfwInit();
  auto window = ::glfwCreateWindow( 800, 600, "", {}, {} );
  ::glfwMakeContextCurrent( window );
  ::gladLoadGL();
  ::glfwSetWindowSizeCallback( window, []( auto _, auto... args ) { ::glViewport( 0, 0, args... ); } );

  while ( !::glfwWindowShouldClose( window ) )
  {
    ::glfwPollEvents();
    void draw();
    draw();
    ::glfwSwapBuffers( window );
  }
}

void draw()
{
  glRotatef( 0.01f, 0.f, 0.f, 1.f );
  glClearColor( 0.5f, 0.f, 0.f, 0.f );
  glClear( GL_COLOR_BUFFER_BIT );
  glBegin( GL_TRIANGLES );
  glVertex2f( -1.f, -1.f );
  glColor3f( 1.f, 0.f, 0.f );
  glVertex2f( 0.f, 1.f );
  glColor3f( 0.f, 1.f, 0.f );
  glVertex2f( 1.f, 0.f );
  glColor3f( 0.f, 0.f, 1.f );
  glEnd();
}