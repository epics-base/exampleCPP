TOP=../..
include $(TOP)/configure/CONFIG

LIBRARY_IOC += example

# create DBRecord types
DBD += exampleDatabase.dbd
DBDINC += simpleBusyRecord
DBDINC += charoutRecord
DBDINC += shortoutRecord
DBDINC += ucharoutRecord
DBDINC += ushortoutRecord
DBDINC += ulongoutRecord
DBDINC += floatoutRecord
example_SRCS += simpleBusyRecord.c
example_SRCS += charoutRecord.c
example_SRCS += shortoutRecord.c
example_SRCS += ucharoutRecord.c
example_SRCS += ushortoutRecord.c
example_SRCS += ulongoutRecord.c
example_SRCS += floatoutRecord.c
example_LIBS += $(EPICS_BASE_IOC_LIBS)

USR_CPPFLAGS += -DUSE_TYPED_RSET

#=============================
# build an ioc application
PROD_IOC += exampleDatabase
# <name>_registerRecordDeviceDriver.cpp will be created from <name>.dbd
exampleDatabase_SRCS += exampleDatabase_registerRecordDeviceDriver.cpp
exampleDatabase_SRCS_DEFAULT += exampleDatabaseMain.cpp

exampleDatabase_LIBS += exampleDatabase
exampleDatabase_LIBS += example
exampleDatabase_LIBS += scalarLimitRecord
exampleDatabase_LIBS += powerSupplyRecord
exampleDatabase_LIBS += linkRecord
exampleDatabase_LIBS += helloPutGetRecord
exampleDatabase_LIBS += helloRPCRecord
exampleDatabase_LIBS += controlRecord

exampleDatabase_LIBS += pvaClient pvDatabase qsrv pvAccessIOC pvAccess pvAccessCA nt pvData
exampleDatabase_LIBS += $(EPICS_BASE_IOC_LIBS)

# needed for Windows
LIB_SYS_LIBS_WIN32 += netapi32 ws2_32

include $(TOP)/configure/RULES
