#ifndef SQLPARSER_CREATE_STATEMENT_H
#define SQLPARSER_CREATE_STATEMENT_H

#include "SQLStatement.h"
#include "ColumnType.h"

#include <ostream>

// Note: Implementations of constructors and destructors can be found in statements.cpp.
namespace hsql {
  struct SelectStatement;

  struct KeyDefinition {//unused
    KeyDefinition(char* name,bool  isunique):keyname(name),isunique(isunique){};
    virtual ~KeyDefinition();

    char* keyname;
    bool  isunique;
    std::vector<char*>* keyColumns;
  };
  // Represents definition of a table column
  struct ColumnDefinition {
    ColumnDefinition(char* name, ColumnType type, bool nullable);
    virtual ~ColumnDefinition();

    char* name;//column or key name
    ColumnType type;
    bool nullable;

    bool iskey;
    bool  isuniquekey;
    bool  isprivakey;
    std::vector<char*>* keyColumns;
  };

  enum CreateType {
    kCreateTable,
    kCreateTableFromTbl, // Hyrise file format
    kCreateView,
    kCreateDatabase
  };

  // Represents SQL Create statements.
  // Example: "CREATE TABLE students (name TEXT, student_number INTEGER, city TEXT, grade DOUBLE)"
  struct CreateStatement : SQLStatement {
    CreateStatement(CreateType type);
    virtual ~CreateStatement();

    CreateType type;
    bool ifNotExists; // default: false
    char* filePath;   // default: nullptr
    char* schema;     // default: nullptr
    char* tableName;  // default: nullptr
    std::vector<ColumnDefinition*>* columns; // default: nullptr
    std::vector<char*>* viewColumns;
    SelectStatement* select;
  };

} // namespace hsql

#endif
