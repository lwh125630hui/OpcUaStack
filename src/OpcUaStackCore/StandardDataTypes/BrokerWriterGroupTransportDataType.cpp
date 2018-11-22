/*
    DataTypeClass: BrokerWriterGroupTransportDataType

    Generated Source Code - please do not change this source code

    DataTypeCodeGenerator Version:
        OpcUaStackCore - 4.1.0

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackCore/StandardDataTypes/BrokerWriterGroupTransportDataType.h"

namespace OpcUaStackCore
{
    
    BrokerWriterGroupTransportDataType::BrokerWriterGroupTransportDataType(void)
    : WriterGroupTransportDataType()
    , queueName_()
    , resourceUri_()
    , authenticationProfileUri_()
    , requestedDeliveryGuarantee_()
    {
    }
    
    BrokerWriterGroupTransportDataType::~BrokerWriterGroupTransportDataType(void)
    {
    }
    
    OpcUaString&
    BrokerWriterGroupTransportDataType::queueName(void)
    {
        return queueName_;
    }
    
    OpcUaString&
    BrokerWriterGroupTransportDataType::resourceUri(void)
    {
        return resourceUri_;
    }
    
    OpcUaString&
    BrokerWriterGroupTransportDataType::authenticationProfileUri(void)
    {
        return authenticationProfileUri_;
    }
    
    BrokerTransportQualityOfService&
    BrokerWriterGroupTransportDataType::requestedDeliveryGuarantee(void)
    {
        return requestedDeliveryGuarantee_;
    }
    
    bool
    BrokerWriterGroupTransportDataType::operator==(const BrokerWriterGroupTransportDataType& value)
    {
        BrokerWriterGroupTransportDataType* dst = const_cast<BrokerWriterGroupTransportDataType*>(&value);
        if (queueName_ != dst->queueName()) return false;
        if (resourceUri_ != dst->resourceUri()) return false;
        if (authenticationProfileUri_ != dst->authenticationProfileUri()) return false;
        if (requestedDeliveryGuarantee_ != dst->requestedDeliveryGuarantee()) return false;
        return true;
    }
    
    bool
    BrokerWriterGroupTransportDataType::operator!=(const BrokerWriterGroupTransportDataType& value)
    {
        return !this->operator==(value);
    }
    
    void
    BrokerWriterGroupTransportDataType::copyTo(BrokerWriterGroupTransportDataType& value)
    {
        queueName_.copyTo(value.queueName());
        resourceUri_.copyTo(value.resourceUri());
        authenticationProfileUri_.copyTo(value.authenticationProfileUri());
        requestedDeliveryGuarantee_.copyTo(value.requestedDeliveryGuarantee());
    }
    
    BrokerWriterGroupTransportDataType&
    BrokerWriterGroupTransportDataType::operator=(const BrokerWriterGroupTransportDataType& value)
    {
        const_cast<BrokerWriterGroupTransportDataType*>(&value)->copyTo(*this);
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
    BrokerWriterGroupTransportDataType::factory(void)
    {
    	return constructSPtr<BrokerWriterGroupTransportDataType>();
    }
    
    std::string
    BrokerWriterGroupTransportDataType::namespaceName(void)
    {
    	return "http://opcfoundation.org/UA/";
    }
    
    std::string
    BrokerWriterGroupTransportDataType::typeName(void)
    {
    	return "BrokerWriterGroupTransportDataType";
    }
    
    OpcUaNodeId
    BrokerWriterGroupTransportDataType::typeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)15667,0);
    }
    
    OpcUaNodeId
    BrokerWriterGroupTransportDataType::binaryTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)15727, 0);
    }
    
    OpcUaNodeId
    BrokerWriterGroupTransportDataType::xmlTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)16021, 0);
    }
    
    OpcUaNodeId
    BrokerWriterGroupTransportDataType::jsonTypeId(void)
    {
    	return OpcUaNodeId((OpcUaUInt32)16524, 0);
    }
    
    void
    BrokerWriterGroupTransportDataType::opcUaBinaryEncode(std::ostream& os) const
    {
        WriterGroupTransportDataType::opcUaBinaryEncode(os);
        queueName_.opcUaBinaryEncode(os);
        resourceUri_.opcUaBinaryEncode(os);
        authenticationProfileUri_.opcUaBinaryEncode(os);
        requestedDeliveryGuarantee_.opcUaBinaryEncode(os);
    }
    
    void
    BrokerWriterGroupTransportDataType::opcUaBinaryDecode(std::istream& is)
    {
        WriterGroupTransportDataType::opcUaBinaryDecode(is);
        queueName_.opcUaBinaryDecode(is);
        resourceUri_.opcUaBinaryDecode(is);
        authenticationProfileUri_.opcUaBinaryDecode(is);
        requestedDeliveryGuarantee_.opcUaBinaryDecode(is);
    }
    
    bool
    BrokerWriterGroupTransportDataType::encode(boost::property_tree::ptree& pt, Xmlns& xmlns) const
    {
    }
    
    bool
    BrokerWriterGroupTransportDataType::decode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    bool
    BrokerWriterGroupTransportDataType::xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
        if (!xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair(element, elementTree));
        return true;
    }
    
    bool
    BrokerWriterGroupTransportDataType::xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::property_tree::ptree elementTree;
    
        elementTree.clear();
        if (!queueName_.xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair("QueueName", elementTree));
    
        elementTree.clear();
        if (!resourceUri_.xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair("ResourceUri", elementTree));
    
        elementTree.clear();
        if (!authenticationProfileUri_.xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair("AuthenticationProfileUri", elementTree));
    
        elementTree.clear();
        if (!requestedDeliveryGuarantee_.xmlEncode(elementTree, xmlns)) return false;
        pt.push_back(std::make_pair("RequestedDeliveryGuarantee", elementTree));
    
        return true;
    }
    
    bool
    BrokerWriterGroupTransportDataType::xmlDecode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree = pt.get_child_optional(element);
        if (!tree) return false;
        return xmlDecode(*tree, xmlns);
    }
    
    bool
    BrokerWriterGroupTransportDataType::xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
        boost::optional<boost::property_tree::ptree&> tree;
    
        tree = pt.get_child_optional("QueueName");
        if (!tree) return false;
        if (!queueName_.xmlDecode(*tree, xmlns)) return false;
    
        tree = pt.get_child_optional("ResourceUri");
        if (!tree) return false;
        if (!resourceUri_.xmlDecode(*tree, xmlns)) return false;
    
        tree = pt.get_child_optional("AuthenticationProfileUri");
        if (!tree) return false;
        if (!authenticationProfileUri_.xmlDecode(*tree, xmlns)) return false;
    
        tree = pt.get_child_optional("RequestedDeliveryGuarantee");
        if (!tree) return false;
        if (!requestedDeliveryGuarantee_.xmlDecode(*tree, xmlns)) return false;
    
        return true;
    }
    
    bool
    BrokerWriterGroupTransportDataType::jsonEncode(boost::property_tree::ptree& pt, const std::string& element)
    {
        return true;
    }
    
    bool
    BrokerWriterGroupTransportDataType::jsonEncode(boost::property_tree::ptree& pt)
    {
        return true;
    }
    
    bool
    BrokerWriterGroupTransportDataType::jsonDecode(boost::property_tree::ptree& pt, const std::string& element)
    {
    }
    
    bool
    BrokerWriterGroupTransportDataType::jsonDecode(boost::property_tree::ptree& pt)
    {
    }
    
    void
    BrokerWriterGroupTransportDataType::copyTo(ExtensionObjectBase& extensionObjectBase)
    {
    	BrokerWriterGroupTransportDataType* dst = dynamic_cast<BrokerWriterGroupTransportDataType*>(&extensionObjectBase);
    	copyTo(*dst);
    }
    
    bool
    BrokerWriterGroupTransportDataType::equal(ExtensionObjectBase& extensionObjectBase) const
    {
    	BrokerWriterGroupTransportDataType* dst = dynamic_cast<BrokerWriterGroupTransportDataType*>(&extensionObjectBase);
    	return *const_cast<BrokerWriterGroupTransportDataType*>(this) == *dst;
    }
    
    void
    BrokerWriterGroupTransportDataType::out(std::ostream& os)
    {
        os << "QueueName="; queueName_.out(os);
        os << ", ResourceUri="; resourceUri_.out(os);
        os << ", AuthenticationProfileUri="; authenticationProfileUri_.out(os);
        os << ", RequestedDeliveryGuarantee="; requestedDeliveryGuarantee_.out(os);
    }

}