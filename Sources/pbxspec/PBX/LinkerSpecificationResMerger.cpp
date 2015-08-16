// Copyright 2013-present Facebook. All Rights Reserved.

#include <pbxspec/PBX/LinkerSpecificationResMerger.h>

using pbxspec::PBX::LinkerSpecificationResMerger;

LinkerSpecificationResMerger::LinkerSpecificationResMerger(bool isDefault) :
    Linker(isDefault, ISA::PBXLinkerSpecificationResMerger)
{
}