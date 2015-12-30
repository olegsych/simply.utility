#pragma once

namespace simply
{
    template<typename t> class temporary
    {
    public:
        temporary(t& target, const t& value)
            : target { &target }, original { target }
        {
            target = value;
        }

        ~temporary()
        {
            *target = original;
        }
    private:
        t* target;
        t original;
    };
}
