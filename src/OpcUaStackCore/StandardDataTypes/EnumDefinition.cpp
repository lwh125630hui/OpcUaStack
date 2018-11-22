/*
    DataTypeClass: EnumDefinition

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackCore/StandardDataTypes/EnumDefinition.h"

namespace OpcUaStackCore
{
    
    EnumDefinition::EnumDefinition(void)
    : DataTypeDefinition()
    , fields_()
    {
    }
    
    EnumDefinition::~EnumDefinition(void)
    {
    }
    
    EnumFieldArray&
    EnumDefinition::fields(void)
    {
        return fields_;
    }
    
    bool
    EnumDefinition::operator==(const EnumDefinition& value)
    {
        EnumDefinition* dst = const_cast<EnumDefinition*>(&value);
        if (fields_ != dst->fields()) return false;
        return true;
    }
    
    bool
    EnumDefinition::operator!=(const EnumDefinition& value)
    {
        return !this->operator==(value);
    }
    
    void
    EnumDefinition::copyTo(EnumDefinition& value)
    {
        fields_.copyTo(value.fields());
    }
    
    EnumDefinition&
    EnumDefinition::operator=(const EnumDefinition& value)
    {
        const_cast<EnumDefinition*>(&value)->copyTo(*this);
        return *this;
    }
    
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    //
    // ExtensionObjectBase
    //
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    
    ExtensionObjectBase::SPtr
    EnumDefinition::factory(void)
    {
    	return constructSPtr<EnumDefinition>();
    }
    
    std::string
    EnumDefinition::namespaceName(void)
    {
    	return "http://opcfoundation.org/UA/";
    }
    
    std::string
    EnumDefinition::typeName(void)
    {
    	return "EnumDefinition";
    }
    
    OpcUaNodeId
    EnumDefinition::typeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)100,0);
    }
    
    OpcUaNodeId
    EnumDefinition::binaryTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)123, 0);
    }
    
    OpcUaNodeId
    EnumDefinition::xmlTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)14799, 0);
    }
    
    OpcUaNodeId
    EnumDefinition::jsonTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)15067, 0);
    }
    
    void
    EnumDefinition::opcUaBinaryEncode(std::ostream& os) const
    {
        fields_.opcUaBinaryEncode(os);
    }
    
    void
    EnumDefinition::opcUaBinaryDecode(std::istream& is)
    {
        fields_.opcUaBinaryDecode(is);
    }
    
    bool
    EnumDefinition::encode(boost::property_tree::ptree& pt, Xmlns& xmlns) const
    {
    }
    
    bool
    EnumDefinition::decode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    bool
    EnumDefinition::xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
        if (!xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair(element, elementTree));
        return true;
    }
    
    bool
    EnumDefinition::xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
    
        elementTree.clear();
        if (!fields_.xmlEncode(elementTree, "EnumField", xmlns)) return false;
        pt.push_back(std::make_pair("Fields", elementTree));
    
        return true;
    }
    
    bool
    EnumDefinition::xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree = pt.get_child_optional(element);
        if (!tree) return false;
        return xmlDecode(*tree, xmlns);
    }
    
    bool
    EnumDefinition::xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree;
    
        tree = pt.get_child_optional("Fields");
        if (!tree) return false;
        if (!fields_.xmlDecode(*tree, "EnumField", xmlns)) return false;
    
        return true;
    }
    
    bool
    EnumDefinition::jsonEncode(boost::property_tree::ptree& pt, const std::string& element)
    {
        return true;
    }
    
    bool
    EnumDefinition::jsonEncode(boost::property_tree::ptree& pt)
    {
        return true;
    }
    
    bool
    EnumDefinition::jsonDecode(boost::property_tree::ptree& pt, const std::string& element)
    {
    }
    
    bool
    EnumDefinition::jsonDecode(boost::property_tree::ptree& pt)
    {
    }
    
    void
    EnumDefinition::copyTo(ExtensionObjectBase& extensionObjectBase)
    {
    	EnumDefinition* dst = dynamic_cast<EnumDefinition*>(&extensionObjectBase);
    	copyTo(*dst);
    }
    
    bool
    EnumDefinition::equal(ExtensionObjectBase& extensionObjectBase) const
    {
    	EnumDefinition* dst = dynamic_cast<EnumDefinition*>(&extensionObjectBase);
    	return *const_cast<EnumDefinition*>(this) == *dst;
    }
    
    void
    EnumDefinition::out(std::ostream& os)
    {
        os << "Fields="; fields_.out(os);
    }

}