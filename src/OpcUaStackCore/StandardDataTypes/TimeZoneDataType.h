/*
    DataTypeClass: TimeZoneDataType

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_TimeZoneDataType_h__
#define __OpcUaStackCore_TimeZoneDataType_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT TimeZoneDataType
    : public Object
    , public ExtensionObjectBase
    {
      public:
        typedef boost::shared_ptr<TimeZoneDataType> SPtr;
        typedef std::vector<TimeZoneDataType::SPtr> Vec;
    
        TimeZoneDataType(void);
        virtual ~TimeZoneDataType(void);
        
        OpcUaInt16& offset(void);
        OpcUaBoolean& daylightSavingInOffset(void);
        
        //- ExtensionObjectBase -----------------------------------------------
        virtual ExtensionObjectBase::SPtr factory(void);
        virtual std::string namespaceName(void);
        virtual std::string typeName(void);
        virtual OpcUaNodeId typeId(void);
        virtual OpcUaNodeId binaryTypeId(void);
        virtual OpcUaNodeId xmlTypeId(void);
        virtual OpcUaNodeId jsonTypeId(void);
        virtual void opcUaBinaryEncode(std::ostream& os) const;
        virtual void opcUaBinaryDecode(std::istream& is);
        virtual bool encode(boost::property_tree::ptree& pt, Xmlns& xmlns) const;
        virtual bool decode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual bool xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns);
        virtual bool xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual bool xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns);
        virtual bool xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns);
        virtual bool jsonEncode(boost::property_tree::ptree& pt, const std::string& element);
        virtual bool jsonEncode(boost::property_tree::ptree& pt);
        virtual bool jsonDecode(boost::property_tree::ptree& pt, const std::string& element);
        virtual bool jsonDecode(boost::property_tree::ptree& pt);
        virtual void copyTo(ExtensionObjectBase& extensionObjectBase);
        virtual bool equal(ExtensionObjectBase& extensionObjectBase) const;
        virtual void out(std::ostream& os);
        //- ExtensionObjectBase -----------------------------------------------
        
        void copyTo(TimeZoneDataType& value);
        bool operator==(const TimeZoneDataType& value);
        bool operator!=(const TimeZoneDataType& value);
        TimeZoneDataType& operator=(const TimeZoneDataType& value);
    
      private:
        OpcUaInt16 offset_;
        OpcUaBoolean daylightSavingInOffset_;
    
    };
    
    class TimeZoneDataTypeArray
    : public OpcUaArray<TimeZoneDataType::SPtr, SPtrTypeCoder<TimeZoneDataType> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<TimeZoneDataTypeArray> SPtr;
    };

}

#endif