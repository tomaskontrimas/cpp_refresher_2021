
#include <gtest/gtest.h>

#include <particle.hpp>

// The Particle test fixture
class ParticleTest : public ::testing::Test {
 protected:
  ParticleTest() {}
  ~ParticleTest() override {}
  void SetUp() override {}
  void TearDown() override {}

  // Class members declared here can be used by all tests in the test suite
  // for Particle.
};

TEST_F(ParticleTest, Instantiation){
  Particle p;
}
