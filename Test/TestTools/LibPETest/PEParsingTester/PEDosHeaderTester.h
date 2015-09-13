#pragma once

#include "PEElementTester.h"

class PEDosHeaderTester :
    public PEElementTester
{
public:
    PEDosHeaderTester() : PEElementTester("DosHeader") {}

protected:
    void DoTest() override;
    
private:
    void TestDosHeader(IPEDosHeader *dosHeader);
};