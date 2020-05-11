#ifndef CLOCKS_CLOCK_12_HPP
#define CLOCKS_CLOCK_12_HPP

namespace clocks {

    struct clock_12
    {
        static constexpr int N = 12;
    };

    // We need to define this static constexpr, at least for gcc, see
    // https://gcc.gnu.org/wiki/VerboseDiagnostics#missing_static_const_definition
    const int clock_12::N;
}

#endif //!CLOCKS_CLOCK_12_HPP
