#include <fmt.h>

void setup()
{
    Serial.begin(115200);
}

int i = 0;

void loop()
{
    Serial.println(fmt::format("A counter {}", i).c_str());
    i++;
}
