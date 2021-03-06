/*
 * Copyright information and license terms for this software can be
 * found in the file LICENSE that is included with the distribution
 */

/**
 * @author mrk
 * @date 2021.04.20
 */
#ifndef HELLOPUTGETRECORD_H
#define HELLOPUTGETRECORD_H

#include <pv/pvDatabase.h>
#include <pv/timeStamp.h>
#include <pv/pvTimeStamp.h>

#include <shareLib.h>


namespace epics { namespace example { namespace helloPutGet { 


class HelloPutGetRecord;
typedef std::tr1::shared_ptr<HelloPutGetRecord> HelloPutGetRecordPtr;

class epicsShareClass HelloPutGetRecord :
    public epics::pvDatabase::PVRecord
{
public:
    POINTER_DEFINITIONS(HelloPutGetRecord);
    static HelloPutGetRecordPtr create(
        std::string const & recordName);
    virtual ~HelloPutGetRecord() {}
    virtual bool init() {return false;}
    virtual void process();
private:
    HelloPutGetRecord(std::string const & recordName,
        epics::pvData::PVStructurePtr const & pvStructure);

    void initPvt();

    epics::pvData::PVStringPtr pvArgumentValue;
    epics::pvData::PVStringPtr pvResultValue;
};


}}}

#endif  /* HELLOPUTGETRECORD_H */
