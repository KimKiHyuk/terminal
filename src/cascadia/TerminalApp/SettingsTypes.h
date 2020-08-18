/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.

Module Name:
- SettingsTypes.h

Abstract:
- Types used in the settings model (non-exported)
--*/

#pragma once

namespace winrt::TerminalApp
{
    struct LaunchPosition
    {
        std::optional<int> x;
        std::optional<int> y;
    };
};
