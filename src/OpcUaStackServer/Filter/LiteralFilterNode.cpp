/*
   Copyright 2017 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Aleksey Timin (timin-ayu@nefteavtomatika.ru)
 */

#include "OpcUaStackServer/Filter/LiteralFilterNode.h"

namespace OpcUaStackServer
{
    LiteralFilterNode::LiteralFilterNode(const OpcUaVariant& value)
    {
        value_ = value;
    }

    LiteralFilterNode::~LiteralFilterNode()
    {

    }

    OpcUaVariant LiteralFilterNode::evaluate()
    {
        return value_;
    }
}
