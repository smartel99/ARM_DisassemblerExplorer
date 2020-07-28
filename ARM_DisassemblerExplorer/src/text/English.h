﻿/**
 ******************************************************************************
 * @addtogroup English
 * @{
 * @file    English
 * @author  Samuel Martel
 * @brief   Header for the English module.
 *
 * @date 7/23/2020 3:15:52 PM
 *
 ******************************************************************************
 */
#ifndef _English
#define _English

/*****************************************************************************/
/* Includes */

/************************************************************************/
/* SECTION: NewProjectLayer                                             */
/************************************************************************/
constexpr const char* TEXT_NEW_PROJECT_LAYER_WINDOW_NAME = "New Project";

/************************************************************************/
/* SECTION: ApplicationLayer                                            */
/************************************************************************/
constexpr const char* TEXT_APPLICATION_LAYER_FILE = "File";
constexpr const char* TEXT_APPLICATION_LAYER_NEW  = "New";
constexpr const char* TEXT_APPLICATION_LAYER_EXIT = "Exit";

/************************************************************************/
/* SECTION: ObjdumpConfigUI                                             */
/************************************************************************/
constexpr const char* TEXT_HINT_FILE_TYPE_HANDLER        = "The type of file that is to be disassembled";
constexpr const char* TEXT_FILE_TYPE_HANDLER_TYPE_ALL    = "Automatic";
constexpr const char* TEXT_FILE_TYPE_HANDLER_TYPE_ELF    = "Elf";
constexpr const char* TEXT_FILE_TYPE_HANDLER_INPUT_LABEL = "File Type";

constexpr const char* TEXT_PROJECT_SETTINGS_HANDLER_SHOULD_SAVE_HINT =
  "Check this box to save the project into a file";
constexpr const char* TEXT_PROJECT_SETTINGS_HANDLER_PRJ_PATH_HINT =
  "The path where the project should be saved. This option is disabled if the Should Save option "
  "is not enabled";
constexpr const char* TEXT_PROJECT_SETTINGS_HANDLER_FILE_PATH_HINT =
  "The path to the file to disassemble";

#endif
/* Have a wonderful day :) */
/**
 * @}
 */
/****** END OF FILE ******/
