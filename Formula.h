//
// Created by SINGER on 02-Sep-22.
//

#ifndef FORMULA_FORMULA_H
#define FORMULA_FORMULA_H

#include <string>
#include "CommonIncludes.h"
#include "ExecutionContext.h"
#include "Entity.h"
#include "json.hpp"

using json = nlohmann::json;

class Formula {

public:
    Formula();

    json EntityToJson(MULONG e);

    json PEntityToJson(PENTITY e);

    json ListOfCommandToJson(LST_COMMANDPTR lc);

    json CommandToJson(Command c);

    std::string ConvertExecutionTemplateToJSON(ExecutionTemplateList *f);

    std::string BuildExecutionTemplateJSONString(MSTRING defFilePath, MSTRING queryString);

    std::string ExecutionTemplateToJSON(ExecutionTemplateList *ec);

    json ExecutionTemplateToJSON(ExecutionTemplate *ec);

};


#endif //FORMULA_FORMULA_H
