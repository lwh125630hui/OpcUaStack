/*
    DataTypeClass: RelativePath

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor:     Kai Huebl (kai@huebl-sgh.de)
*/

#ifndef __OpcUaStackCore_RelativePath_h__
#define __OpcUaStackCore_RelativePath_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/Base/ObjectPool.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/StandardDataTypes/RelativePathElement.h"

namespace OpcUaStackCore
{
    
    class DLLEXPORT RelativePath
    : public Object
    , public ExtensionObjectBase
    {
      public:
        typedef boost::shared_ptr<RelativePath> SPtr;
        typedef std::vector<RelativePath::SPtr> Vec;
    
        RelativePath(void);
        virtual ~RelativePath(void);
        
        RelativePathElementArray& elements(void);
        
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
        
        void copyTo(RelativePath& value);
        bool operator==(const RelativePath& value);
        bool operator!=(const RelativePath& value);
        RelativePath& operator=(const RelativePath& value);
    
      private:
        RelativePathElementArray elements_; //!< A list of elements in the path.
    
    };
    
    class RelativePathArray
    : public OpcUaArray<RelativePath::SPtr, SPtrTypeCoder<RelativePath> >
    , public Object
    {
      public:
    	   typedef boost::shared_ptr<RelativePathArray> SPtr;
    };

}

#endif
