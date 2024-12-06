#include <rev/CANSparkMax.h>

struct TestConfig
{
    double speedMultiplier;
};

class Test
{
public:
    Test() = default;
    ~Test() = default;
    void Configure(TestConfig config);
    void Operation(double inputSpeed);

private:
    double speedMultiplier;
    rev::CANSparkMax motor{0, rev::CANSparkMax::MotorType::kBrushless};
};