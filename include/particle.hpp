#include <vector>

enum class ParticleType{electron};

struct Position
{
  double x;
  double y;
  double z;
};

struct Direction
{
  double x;
  double y;
  double z;
};

class Particle{
public:
  Particle() = default;
  ~Particle() = default;
  Particle(const Particle&) = default;
  Particle& operator=(const Particle&) = default;
  Particle(Particle&&) = default;
  Particle& operator=(Particle&&) = default;
  
private:
  double energy_;
  double mass_;
  double momentum_;
  double time_;
  int charge_;
  ParticleType type_;
  Position position_;
  Direction direction_;
};



