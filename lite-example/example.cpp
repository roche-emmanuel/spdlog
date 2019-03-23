#include "spdlite.h"

int main()
{
    auto l = spdlog::create_lite();
    l.set_level(spdlog::lite::level::trace);

    l.trace_printf("Hello %s ", "GABI");
    l.info_printf("Hello %d", 12346);
    l.warn_printf("Hello %f", 12346.5656);
    l.warn("Hello {}", "LITE :) ");

    auto l2 = l.clone("logger2");
    l2.debug("HELLO");

}