#pragma once

namespace module1
{

    class Base1
    {
    public:
        Base1();
        virtual ~Base1();

        virtual int doCalc1() const = 0;
    };


}