/**************************************************************************************************
 * @addtogroup  Parser
 * {
 * @file        ARM_Instruction
 * @author      Pascal-Emmanuel Lachance
 * @date        2020/07/24  -  19:51
 * @brief       Base pure virtual class onto which all ARM assembly instructions are based.
 **************************************************************************************************
 *   Copyright (C) 2020  Samuel Martel - Pascal-Emmanuel Lachance
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *************************************************************************************************/
#pragma once
/*************************************************************************************************/
/* Includes ------------------------------------------------------------------------------------ */
#include "parser/ARM/ARM_InstructionSyntax.h"
#include "parser/Instruction.h"

#include <string_view>


namespace Parser
{


/*************************************************************************************************/
/* Classes ------------------------------------------------------------------------------------- */
class ARM_Instruction : public Instruction
{
public:
    ARM_Instruction(ARM_InstructionSyntax* syntax, const std::string_view lineOfCode)
    : Instruction{syntax, lineOfCode}
    {
    }

    ARM_InstructionSyntax& GetSyntax() { return *dynamic_cast<ARM_InstructionSyntax*>(m_syntax); }
};


/*************************************************************************************************/
}    // namespace Parser
/**
 * @}
 */
/* ----- END OF FILE ----- */
