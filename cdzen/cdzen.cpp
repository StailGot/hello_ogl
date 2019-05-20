#include <array>
#include <iostream>

#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include <glm/gtc/type_ptr.hpp>

#include <gl/GL.h>
#pragma comment( lib, "opengl32.lib" )

//find_package( boost REQUIRED )
//#include <boost/range/combine.hpp>


int main()
{
  ::glfwInit();
  auto window = ::glfwCreateWindow( 800, 600, "", {}, {} );
  ::glfwMakeContextCurrent( window );
  ::glfwSwapInterval( 0 );

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

  //constexpr std::array vertices = {glm::vec2{-1.f, -1.f}, glm::vec2{0.f, 1.f}, glm::vec2{1.f, 0.f}};
  //constexpr std::array colors   = {glm::vec3{1.f, 0.f, 0.f}, glm::vec3{0.f, 1.f, 0.f}, glm::vec3{0.f, 0.f, 1.f}};

  //for ( auto [v, c] : boost::range::combine( vertices, colors ) )
  //{
  //  glVertex2fv( glm::value_ptr(v) );
  //  glColor3fv( glm::value_ptr(c.get_head()) );
  //}

  glVertex2f( -1.f, -1.f );
  glColor3f( 1.f, 0.f, 0.f );
  glVertex2f( 0.f, 1.f );
  glColor3f( 0.f, 1.f, 0.f );
  glVertex2f( 1.f, 0.f );
  glColor3f( 0.f, 0.f, 1.f );

  glEnd();
}