#include <fmt.h>

void setup()
{
    Serial.begin(115200);
}

int i = 0;

void loop()
{
    auto out = fmt::memory_buffer();
    fmt::format_to(std::back_inserter(out),
                   "A counter {}", i);
    Serial.println(out.data());
    i++;
}