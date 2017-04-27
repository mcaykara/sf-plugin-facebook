/*
 * SpBrDatabase.h
 *
 *  Created on: Jul 08, 2015
 *      Author: ademcayir
 */

#ifndef SPSQLITESHELL_H_
#define SPSQLITESHELL_H_
#include "SpDefs.h"
#include "DBInterface/Database.h"
#include "DBInterface/ResultSet.h"
#include "DBInterface/sqlite3.h"

#include <vector>
#include <list>
#include <map>
#include <string>

#ifdef TARGET_PLATFORM_ANDROID
#include <jni.h>
#endif


#define IsSpace(X)  isspace((unsigned char)X)
#define IsDigit(X)  isdigit((unsigned char)X)
#define ToLower(X)  (char)tolower((unsigned char)X)


/*
 ** These are the allowed modes.
 */
#define SqliteShell_MODE_Line     0  /* One column per line.  Blank line between records */
#define SqliteShell_MODE_Column   1  /* One record per line in neat columns */
#define SqliteShell_MODE_List     2  /* One record per line with a separator */
#define SqliteShell_MODE_Semi     3  /* Same as MODE_List but append ";" to each line */
#define SqliteShell_MODE_Html     4  /* Generate an XHTML table */
#define SqliteShell_MODE_Insert   5  /* Generate SQL "insert" statements */
#define SqliteShell_MODE_Tcl      6  /* Generate ANSI-C or TCL quoted elements */
#define SqliteShell_MODE_Csv      7  /* Quote strings, numbers are plain */
#define SqliteShell_MODE_Explain  8  /* Like MODE_Column, but do not truncate data */


class SqliteShellInput {
private:
    FILE* in;
    char* char_in;
    int char_in_current;
public:
    SqliteShellInput(FILE* in);
    SqliteShellInput(char* char_in);
    virtual ~SqliteShellInput();
    char* _fgets(char * output, int maxsize );
};

class SqliteShell {
private:
    volatile int seenInterrupt;
    int bail_on_error;
    
    sqlite3 *p__db;           /* The database */
    int p__echoOn;            /* True to echo input commands */
    int p__statsOn;           /* True to display memory stats before each finalize */
    int p__cnt;               /* Number of records displayed so far */
    FILE *p__out;             /* Write results here */
    FILE *p__traceOut;        /* Output for sqlite3_trace() */
    int p__nErr;              /* Number of errors seen */
    int p__mode;              /* An output mode setting */
    int p__writableSchema;    /* True if PRAGMA writable_schema=ON */
    int p__showHeader;        /* True to show column names in List or Column mode */
    char *p__zDestTable;      /* Name of destination table when MODE_Insert */
    char p__separator[20];    /* Separator character for MODE_List */
    int p__colWidth[100];     /* Requested width of each column when in column mode*/
    int p__actualWidth[100];  /* Actual width of each column */
    char p__nullvalue[20];    /* The text to print when a NULL comes back from
                            ** the database */
    
    /* Holds the mode information just before
     ** .explain ON */
    char p__outfile[FILENAME_MAX]; /* Filename for *out */
    const char *p__zDbFilename;    /* name of the database file */
    const char *p__zVfs;           /* Name of VFS to use */
    sqlite3_stmt *p__pStmt;   /* Current statement if any. */
    FILE *p__pLog;            /* Write log output here */
    
    
    int stdin_is_interactive;
    char mainPrompt[20];     /* First line prompt. default: "sqlite> "*/
    char continuePrompt[20]; /* Continuation prompt. default: "   ...> " */

private:
    char* local_getline(char *zPrompt, SqliteShellInput *in, int csvFlag);
    char* one_input_line(const char *zPrior, SqliteShellInput *in);
    int _all_whitespace(const char *z);
    int _is_command_terminator(const char *zLine);
    int _is_complete(char *zSql, int nSql);
    int strlen30(const char *z);
    int _contains_semicolon(const char *z, int N);
    int shell_exec(
                   sqlite3 *db,                                /* An open database */
                   const char *zSql,                           /* SQL to be evaluated */
                   char **pzErrMsg                             /* Error msg written here */ );
    char *save_err_msg(
                       sqlite3 *db            /* Database to query */  );
    int display_stats(
                      sqlite3 *db,                /* Database to query */
                      int bReset                  /* True to reset the stats */ );
    int shell_callback(int nArg, char **azArg, char **azCol, int *aiType);

public:
    SqliteShell(sqlite3 *p__db);
    virtual ~SqliteShell();
    int process_input(SqliteShellInput *in);
};

#endif /* SPBRDATABASEOPERATOR_H_ */
