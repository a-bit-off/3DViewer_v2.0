#ifndef CPP4_3DVIEWER_V2_0_2_SRC_MODEL_MODEL_H_
#define CPP4_3DVIEWER_V2_0_2_SRC_MODEL_MODEL_H_
#include <string.h>

#include <cmath>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

#include "../Affine/affine.h"
#include "../Parser/parser.h"
namespace s21 {
class Facade {
 public:
  //  Parser
  void Parse(const std::string& fileName);

  // Affine
  void Move(double move, int coordinate);
  void Transform(double angle, int coordinate);
  void Scale(double scale, int coordinate);

  // Figure
  void Clear();

  std::vector<double> getVertexes() const;
  std::vector<int> getFacets() const;
  int getCountVertexes() const;
  int getCountEdges() const;
  int getCountPolygons() const;
  double getMaxCoordinate() const;

  void setVertexes(std::vector<double>& vertexes);
  void setFacets(std::vector<int>& facets);
  void setCountVertexes(int countVertexes);
  void setCountEdges(int countEdges);
  void setCountPolygons(int countPolygons);
  void setMaxCoordinate(double maxCoordinate);

 private:
  Parser parser_;
  Affine affine_;
  Figure figure_;
};
}  // namespace s21
#endif  // CPP4_3DVIEWER_V2_0_2_SRC_MODEL_MODEL_H_