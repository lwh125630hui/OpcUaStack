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

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#ifndef __OpcUaStackServer_VariableBase_h__
#define __OpcUaStackServer_VariableBase_h__

#include <boost/shared_ptr.hpp>
#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackCore/BuildInTypes/BuildInTypes.h"
#include "OpcUaStackCore/ServiceSetApplication/ApplicationServiceTransaction.h"
#include "OpcUaStackServer/VariableType/VariableResult.h"
#include "OpcUaStackServer/VariableType/ServerVariables.h"
#include "OpcUaStackServer/Application/ApplicationIf.h"

using namespace OpcUaStackCore;

namespace OpcUaStackServer
{

	class DLLEXPORT VariableBase
	{
	  public:
		typedef boost::shared_ptr<VariableBase> SPtr;

		VariableBase(void);
		virtual ~VariableBase(void);

		void applicationServiceIf(ApplicationServiceIf* applicationServiceIf);
		ServerVariables& serverVariables(void);
		bool linkInstanceWithModel(const OpcUaNodeId& nodeId);
		bool getNamespaceIndexFromNamespaceName(const std::string& namespaceName, uint32_t& namespaceIndex);

		void variableType(const OpcUaNodeId& variableType);
		OpcUaNodeId& variableType(void);

	  private:
		bool getNodeIdFromResponse(BrowsePathToNodeIdResponse::SPtr& res, uint32_t idx, OpcUaNodeId::SPtr& nodeId);

		ApplicationServiceIf* applicationServiceIf_;

		OpcUaNodeId variableType_;

		ServerVariables serverVariables_;
	};


}

#endif
