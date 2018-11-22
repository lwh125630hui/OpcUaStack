/*
    DataTypeClass: RolePermissionType

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackCore/StandardDataTypes/RolePermissionType.h"

namespace OpcUaStackCore
{
    
    RolePermissionType::RolePermissionType(void)
    : Object()
    , ExtensionObjectBase()
    , roleId_()
    , permissions_()
    {
    }
    
    RolePermissionType::~RolePermissionType(void)
    {
    }
    
    OpcUaNodeId&
    RolePermissionType::roleId(void)
    {
        return roleId_;
    }
    
    OpcUaPermissionType&
    RolePermissionType::permissions(void)
    {
        return permissions_;
    }
    
    bool
    RolePermissionType::operator==(const RolePermissionType& value)
    {
        RolePermissionType* dst = const_cast<RolePermissionType*>(&value);
        if (roleId_ != dst->roleId()) return false;
        if (permissions_ != dst->permissions()) return false;
        return true;
    }
    
    bool
    RolePermissionType::operator!=(const RolePermissionType& value)
    {
        return !this->operator==(value);
    }
    
    void
    RolePermissionType::copyTo(RolePermissionType& value)
    {
        roleId_.copyTo(value.roleId());
        value.permissions_ = permissions_;
    }
    
    RolePermissionType&
    RolePermissionType::operator=(const RolePermissionType& value)
    {
        const_cast<RolePermissionType*>(&value)->copyTo(*this);
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
    RolePermissionType::factory(void)
    {
    	return constructSPtr<RolePermissionType>();
    }
    
    std::string
    RolePermissionType::namespaceName(void)
    {
    	return "http://opcfoundation.org/UA/";
    }
    
    std::string
    RolePermissionType::typeName(void)
    {
    	return "RolePermissionType";
    }
    
    OpcUaNodeId
    RolePermissionType::typeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)96,0);
    }
    
    OpcUaNodeId
    RolePermissionType::binaryTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)128, 0);
    }
    
    OpcUaNodeId
    RolePermissionType::xmlTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)16126, 0);
    }
    
    OpcUaNodeId
    RolePermissionType::jsonTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)15062, 0);
    }
    
    void
    RolePermissionType::opcUaBinaryEncode(std::ostream& os) const
    {
        roleId_.opcUaBinaryEncode(os);
        OpcUaNumber::opcUaBinaryEncode(os,permissions_);
    }
    
    void
    RolePermissionType::opcUaBinaryDecode(std::istream& is)
    {
        roleId_.opcUaBinaryDecode(is);
        OpcUaNumber::opcUaBinaryDecode(is,permissions_);
    }
    
    bool
    RolePermissionType::encode(boost::property_tree::ptree& pt, Xmlns& xmlns) const
    {
    }
    
    bool
    RolePermissionType::decode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    bool
    RolePermissionType::xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
        if (!xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair(element, elementTree));
        return true;
    }
    
    bool
    RolePermissionType::xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
    
        elementTree.clear();
        if (!roleId_.xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair("RoleId", elementTree));
    
        elementTree.clear();
        if(!XmlNumber::xmlEncode(elementTree, permissions_)) return false;
        pt.push_back(std::make_pair("Permissions", elementTree));
    
        return true;
    }
    
    bool
    RolePermissionType::xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree = pt.get_child_optional(element);
        if (!tree) return false;
        return xmlDecode(*tree, xmlns);
    }
    
    bool
    RolePermissionType::xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree;
    
        tree = pt.get_child_optional("RoleId");
        if (!tree) return false;
        if (!roleId_.xmlDecode(*tree, xmlns)) return false;
    
        tree = pt.get_child_optional("Permissions");
        if (!tree) return false;
        if(!XmlNumber::xmlDecode(*tree, permissions_)) return false;
    
        return true;
    }
    
    bool
    RolePermissionType::jsonEncode(boost::property_tree::ptree& pt, const std::string& element)
    {
        return true;
    }
    
    bool
    RolePermissionType::jsonEncode(boost::property_tree::ptree& pt)
    {
        return true;
    }
    
    bool
    RolePermissionType::jsonDecode(boost::property_tree::ptree& pt, const std::string& element)
    {
    }
    
    bool
    RolePermissionType::jsonDecode(boost::property_tree::ptree& pt)
    {
    }
    
    void
    RolePermissionType::copyTo(ExtensionObjectBase& extensionObjectBase)
    {
    	RolePermissionType* dst = dynamic_cast<RolePermissionType*>(&extensionObjectBase);
    	copyTo(*dst);
    }
    
    bool
    RolePermissionType::equal(ExtensionObjectBase& extensionObjectBase) const
    {
    	RolePermissionType* dst = dynamic_cast<RolePermissionType*>(&extensionObjectBase);
    	return *const_cast<RolePermissionType*>(this) == *dst;
    }
    
    void
    RolePermissionType::out(std::ostream& os)
    {
        os << "RoleId="; roleId_.out(os);
        os << ", Permissions=" << permissions_;
    }

}