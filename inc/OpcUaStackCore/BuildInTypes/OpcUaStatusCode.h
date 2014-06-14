#ifndef __OpcUaStackCore_OpcUaStatusCode_h__
#define __OpcUaStackCore_OpcUaStatusCode_h__

#include <iostream>
#include "OpcUaStackCore/Base/os.h"

namespace OpcUaStackCore
{

	typedef enum {
		x = 0
#if 0
BadUnexpectedError,0x80010000,An unexpected error occurred.
BadInternalError,0x80020000,An internal error occurred as a result of a programming or configuration error.
BadOutOfMemory,0x80030000,Not enough memory to complete the operation.
BadResourceUnavailable,0x80040000,An operating system resource is not available.
BadCommunicationError,0x80050000,A low level communication error occurred.
BadEncodingError,0x80060000,Encoding halted because of invalid data in the objects being serialized.
BadDecodingError,0x80070000,Decoding halted because of invalid data in the stream.
BadEncodingLimitsExceeded,0x80080000,The message encoding/decoding limits imposed by the stack have been exceeded.
BadRequestTooLarge,0x80B80000,The request message size exceeds limits set by the server.
BadResponseTooLarge,0x80B90000,The response message size exceeds limits set by the client.
BadUnknownResponse,0x80090000,An unrecognized response was received from the server.
BadTimeout,0x800A0000,The operation timed out.
BadServiceUnsupported,0x800B0000,The server does not support the requested service.
BadShutdown,0x800C0000,The operation was cancelled because the application is shutting down.
BadServerNotConnected,0x800D0000,The operation could not complete because the client is not connected to the server.
BadServerHalted,0x800E0000,The server has stopped and cannot process any requests.
BadNothingToDo,0x800F0000,There was nothing to do because the client passed a list of operations with no elements.
BadTooManyOperations,0x80100000,The request could not be processed because it specified too many operations.
BadTooManyMonitoredItems,0x80DB0000,The request could not be processed because there are too many monitored items in the subscription.
BadDataTypeIdUnknown,0x80110000,The extension object cannot be (de)serialized because the data type id is not recognized.
BadCertificateInvalid,0x80120000,The certificate provided as a parameter is not valid.
BadSecurityChecksFailed,0x80130000,An error occurred verifying security.
BadCertificateTimeInvalid,0x80140000,The Certificate has expired or is not yet valid.
BadCertificateIssuerTimeInvalid,0x80150000,An Issuer Certificate has expired or is not yet valid.
BadCertificateHostNameInvalid,0x80160000,The HostName used to connect to a Server does not match a HostName in the Certificate.
BadCertificateUriInvalid,0x80170000,The URI specified in the ApplicationDescription does not match the URI in the Certificate.
BadCertificateUseNotAllowed,0x80180000,The Certificate may not be used for the requested operation.
BadCertificateIssuerUseNotAllowed,0x80190000,The Issuer Certificate may not be used for the requested operation.
BadCertificateUntrusted,0x801A0000,The Certificate is not trusted.
BadCertificateRevocationUnknown,0x801B0000,It was not possible to determine if the Certificate has been revoked.
BadCertificateIssuerRevocationUnknown,0x801C0000,It was not possible to determine if the Issuer Certificate has been revoked.
BadCertificateRevoked,0x801D0000,The Certificate has been revoked.
BadCertificateIssuerRevoked,0x801E0000,The Issuer Certificate has been revoked.
BadUserAccessDenied,0x801F0000,User does not have permission to perform the requested operation.
BadIdentityTokenInvalid,0x80200000,The user identity token is not valid.
BadIdentityTokenRejected,0x80210000,The user identity token is valid but the server has rejected it.
BadSecureChannelIdInvalid,0x80220000,The specified secure channel is no longer valid.
BadInvalidTimestamp,0x80230000,The timestamp is outside the range allowed by the server.
BadNonceInvalid,0x80240000,The nonce does appear to be not a random value or it is not the correct length.
BadSessionIdInvalid,0x80250000,The session id is not valid.
BadSessionClosed,0x80260000,The session was closed by the client.
BadSessionNotActivated,0x80270000,The session cannot be used because ActivateSession has not been called.
BadSubscriptionIdInvalid,0x80280000,The subscription id is not valid.
BadRequestHeaderInvalid,0x802A0000,The header for the request is missing or invalid.
BadTimestampsToReturnInvalid,0x802B0000,The timestamps to return parameter is invalid.
BadRequestCancelledByClient,0x802C0000,The request was cancelled by the client.
GoodSubscriptionTransferred,0x002D0000,The subscription was transferred to another session.
GoodCompletesAsynchronously,0x002E0000,The processing will complete asynchronously.
GoodOverload,0x002F0000,Sampling has slowed down due to resource limitations.
GoodClamped,0x00300000,The value written was accepted but was clamped.
BadNoCommunication,0x80310000,Communication with the data source is defined, but not established, and there is no last known value available.
BadWaitingForInitialData,0x80320000,Waiting for the server to obtain values from the underlying data source.
BadNodeIdInvalid,0x80330000,The syntax of the node id is not valid.
BadNodeIdUnknown,0x80340000,The node id refers to a node that does not exist in the server address space.
BadAttributeIdInvalid,0x80350000,The attribute is not supported for the specified Node.
BadIndexRangeInvalid,0x80360000,The syntax of the index range parameter is invalid.
BadIndexRangeNoData,0x80370000,No data exists within the range of indexes specified.
BadDataEncodingInvalid,0x80380000,The data encoding is invalid.
BadDataEncodingUnsupported,0x80390000,The server does not support the requested data encoding for the node.
BadNotReadable,0x803A0000,The access level does not allow reading or subscribing to the Node.
BadNotWritable,0x803B0000,The access level does not allow writing to the Node.
BadOutOfRange,0x803C0000,The value was out of range.
BadNotSupported,0x803D0000,The requested operation is not supported.
BadNotFound,0x803E0000,A requested item was not found or a search operation ended without success.
BadObjectDeleted,0x803F0000,The object cannot be used because it has been deleted.
BadNotImplemented,0x80400000,Requested operation is not implemented.
BadMonitoringModeInvalid,0x80410000,The monitoring mode is invalid.
BadMonitoredItemIdInvalid,0x80420000,The monitoring item id does not refer to a valid monitored item.
BadMonitoredItemFilterInvalid,0x80430000,The monitored item filter parameter is not valid.
BadMonitoredItemFilterUnsupported,0x80440000,The server does not support the requested monitored item filter.
BadFilterNotAllowed,0x80450000,A monitoring filter cannot be used in combination with the attribute specified.
BadStructureMissing,0x80460000,A mandatory structured parameter was missing or null.
BadEventFilterInvalid,0x80470000,The event filter is not valid.
BadContentFilterInvalid,0x80480000,The content filter is not valid.
BadFilterOperatorInvalid,0x80C10000,An unregognized operator was provided in a filter.
BadFilterOperatorUnsupported,0x80C20000,A valid operator was provided, but the server does not provide support for this filter operator.
BadFilterOperandCountMismatch,0x80C30000,The number of operands provided for the filter operator was less then expected for the operand provided.
BadFilterOperandInvalid,0x80490000,The operand used in a content filter is not valid.
BadFilterElementInvalid,0x80C40000,The referenced element is not a valid element in the content filter.
BadFilterLiteralInvalid,0x80C50000,The referenced literal is not a valid value.
BadContinuationPointInvalid,0x804A0000,The continuation point provide is longer valid.
BadNoContinuationPoints,0x804B0000,The operation could not be processed because all continuation points have been allocated.
BadReferenceTypeIdInvalid,0x804C0000,The operation could not be processed because all continuation points have been allocated.
BadBrowseDirectionInvalid,0x804D0000,The browse direction is not valid.
BadNodeNotInView,0x804E0000,The node is not part of the view.
BadServerUriInvalid,0x804F0000,The ServerUri is not a valid URI.
BadServerNameMissing,0x80500000,No ServerName was specified.
BadDiscoveryUrlMissing,0x80510000,No DiscoveryUrl was specified.
BadSempahoreFileMissing,0x80520000,The semaphore file specified by the client is not valid.
BadRequestTypeInvalid,0x80530000,The security token request type is not valid.
BadSecurityModeRejected,0x80540000,The security mode does not meet the requirements set by the Server.
BadSecurityPolicyRejected,0x80550000,The security policy does not meet the requirements set by the Server.
BadTooManySessions,0x80560000,The server has reached its maximum number of sessions.
BadUserSignatureInvalid,0x80570000,The user token signature is missing or invalid.
BadApplicationSignatureInvalid,0x80580000,The signature generated with the client certificate is missing or invalid.
BadNoValidCertificates,0x80590000,The client did not provide at least one software certificate that is valid and meets the profile requirements for the server.
BadIdentityChangeNotSupported,0x80C60000,The Server does not support changing the user identity assigned to the session.
BadRequestCancelledByRequest,0x805A0000,The request was cancelled by the client with the Cancel service.
BadParentNodeIdInvalid,0x805B0000,The parent node id does not to refer to a valid node.
BadReferenceNotAllowed,0x805C0000,The reference could not be created because it violates constraints imposed by the data model.
BadNodeIdRejected,0x805D0000,The requested node id was reject because it was either invalid or server does not allow node ids to be specified by the client.
BadNodeIdExists,0x805E0000,The requested node id is already used by another node.
BadNodeClassInvalid,0x805F0000,The node class is not valid.
BadBrowseNameInvalid,0x80600000,The browse name is invalid.
BadBrowseNameDuplicated,0x80610000,The browse name is not unique among nodes that share the same relationship with the parent.
BadNodeAttributesInvalid,0x80620000,The node attributes are not valid for the node class.
BadTypeDefinitionInvalid,0x80630000,The type definition node id does not reference an appropriate type node.
BadSourceNodeIdInvalid,0x80640000,The source node id does not reference a valid node.
BadTargetNodeIdInvalid,0x80650000,The target node id does not reference a valid node.
BadDuplicateReferenceNotAllowed,0x80660000,The reference type between the nodes is already defined.
BadInvalidSelfReference,0x80670000,The server does not allow this type of self reference on this node.
BadReferenceLocalOnly,0x80680000,The reference type is not valid for a reference to a remote server.
BadNoDeleteRights,0x80690000,The server will not allow the node to be deleted.
UncertainReferenceNotDeleted,0x40BC0000,The server was not able to delete all target references.
BadServerIndexInvalid,0x806A0000,The server index is not valid.
BadViewIdUnknown,0x806B0000,The view id does not refer to a valid view node.
BadViewTimestampInvalid,0x80C90000,The view timestamp is not available or not supported.
BadViewParameterMismatch,0x80CA0000,The view parameters are not consistent with each other.
BadViewVersionInvalid,0x80CB0000,The view version is not available or not supported.
UncertainNotAllNodesAvailable,0x40C00000,The list of references may not be complete because the underlying system is not available.
GoodResultsMayBeIncomplete,0x00BA0000,The server should have followed a reference to a node in a remote server but did not. The result set may be incomplete.
BadNotTypeDefinition,0x80C80000,The provided Nodeid was not a type definition nodeid.
UncertainReferenceOutOfServer,0x406C0000,One of the references to follow in the relative path references to a node in the address space in another server.
BadTooManyMatches,0x806D0000,The requested operation has too many matches to return.
BadQueryTooComplex,0x806E0000,The requested operation requires too many resources in the server.
BadNoMatch,0x806F0000,The requested operation has no match to return.
BadMaxAgeInvalid,0x80700000,The max age parameter is invalid.
BadHistoryOperationInvalid,0x80710000,The history details parameter is not valid.
BadHistoryOperationUnsupported,0x80720000,The server does not support the requested operation.
BadInvalidTimestampArgument,0x80BD0000,The defined timestamp to return was invalid.
BadWriteNotSupported,0x80730000,The server not does support writing the combination of value, status and timestamps provided.
BadTypeMismatch,0x80740000,The value supplied for the attribute is not of the same type as the attribute's value.
BadMethodInvalid,0x80750000,The method id does not refer to a method for the specified object.
BadArgumentsMissing,0x80760000,The client did not specify all of the input arguments for the method.
BadTooManySubscriptions,0x80770000,The server has reached its  maximum number of subscriptions.
BadTooManyPublishRequests,0x80780000,The server has reached the maximum number of queued publish requests.
BadNoSubscription,0x80790000,There is no subscription available for this session.
BadSequenceNumberUnknown,0x807A0000,The sequence number is unknown to the server.
BadMessageNotAvailable,0x807B0000,The requested notification message is no longer available.
BadInsufficientClientProfile,0x807C0000,The Client of the current Session does not support one or more Profiles that are necessary for the Subscription.
BadStateNotActive,0x80BF0000,The sub-state machine is not currently active.
BadTcpServerTooBusy,0x807D0000,The server cannot process the request because it is too busy.
BadTcpMessageTypeInvalid,0x807E0000,The type of the message specified in the header invalid.
BadTcpSecureChannelUnknown,0x807F0000,The SecureChannelId and/or TokenId are not currently in use.
BadTcpMessageTooLarge,0x80800000,The size of the message specified in the header is too large.
BadTcpNotEnoughResources,0x80810000,There are not enough resources to process the request.
BadTcpInternalError,0x80820000,An internal error occurred.
BadTcpEndpointUrlInvalid,0x80830000,The Server does not recognize the QueryString specified.
BadRequestInterrupted,0x80840000,The request could not be sent because of a network interruption.
BadRequestTimeout,0x80850000,Timeout occurred while processing the request.
BadSecureChannelClosed,0x80860000,The secure channel has been closed.
BadSecureChannelTokenUnknown,0x80870000,The token has expired or is not recognized.
BadSequenceNumberInvalid,0x80880000,The sequence number is not valid.
BadProtocolVersionUnsupported,0x80BE0000,The applications do not have compatible protocol versions.
BadConfigurationError,0x80890000,There is a problem with the configuration that affects the usefulness of the value.
BadNotConnected,0x808A0000,The variable should receive its value from another variable, but has never been configured to do so.
BadDeviceFailure,0x808B0000,There has been a failure in the device/data source that generates the value that has affected the value.
BadSensorFailure,0x808C0000,There has been a failure in the sensor from which the value is derived by the device/data source.
BadOutOfService,0x808D0000,The source of the data is not operational.
BadDeadbandFilterInvalid,0x808E0000,The deadband filter is not valid.
UncertainNoCommunicationLastUsableValue,0x408F0000,Communication to the data source has failed. The variable value is the last value that had a good quality.
UncertainLastUsableValue,0x40900000,Whatever was updating this value has stopped doing so.
UncertainSubstituteValue,0x40910000,The value is an operational value that was manually overwritten.
UncertainInitialValue,0x40920000,The value is an initial value for a variable that normally receives its value from another variable.
UncertainSensorNotAccurate,0x40930000,The value is at one of the sensor limits.
UncertainEngineeringUnitsExceeded,0x40940000,The value is outside of the range of values defined for this parameter.
UncertainSubNormal,0x40950000,The value is derived from multiple sources and has less than the required number of Good sources.
GoodLocalOverride,0x00960000,The value has been overridden.
BadRefreshInProgress,0x80970000,This Condition refresh failed, a Condition refresh operation is already in progress.
BadConditionAlreadyDisabled,0x80980000,This condition has already been disabled.
BadConditionAlreadyEnabled,0x80CC0000,This condition has already been enabled.
BadConditionDisabled,0x80990000,Property not available, this condition is disabled.
BadEventIdUnknown,0x809A0000,The specified event id is not recognized.
BadEventNotAcknowledgeable,0x80BB0000,The event cannot be acknowledged.
BadDialogNotActive,0x80CD0000,The dialog condition is not active.
BadDialogResponseInvalid,0x80CE0000,The response is not valid for the dialog.
BadConditionBranchAlreadyAcked,0x80CF0000,The condition branch has already been acknowledged.
BadConditionBranchAlreadyConfirmed,0x80D00000,The condition branch has already been confirmed.
BadConditionAlreadyShelved,0x80D10000,The condition has already been shelved.
BadConditionNotShelved,0x80D20000,The condition is not currently shelved.
BadShelvingTimeOutOfRange,0x80D30000,The shelving time not within an acceptable range.
BadNoData,0x809B0000,No data exists for the requested time range or event filter.
BadBoundNotFound,0x80D70000,No data found to provide upper or lower bound value.
BadBoundNotSupported,0x80D80000,The server cannot retrieve a bound for the variable.
BadDataLost,0x809D0000,Data is missing due to collection started/stopped/lost.
BadDataUnavailable,0x809E0000,Expected data is unavailable for the requested time range due to an un-mounted volume, an off-line archive or tape, or similar reason for temporary unavailability.
BadEntryExists,0x809F0000,The data or event was not successfully inserted because a matching entry exists.
BadNoEntryExists,0x80A00000,The data or event was not successfully updated because no matching entry exists.
BadTimestampNotSupported,0x80A10000,The client requested history using a timestamp format the server does not support (i.e requested ServerTimestamp when server only supports SourceTimestamp).
GoodEntryInserted,0x00A20000,The data or event was successfully inserted into the historical database.
GoodEntryReplaced,0x00A30000,The data or event field was successfully replaced in the historical database.
UncertainDataSubNormal,0x40A40000,The value is derived from multiple values and has less than the required number of Good values.
GoodNoData,0x00A50000,No data exists for the requested time range or event filter.
GoodMoreData,0x00A60000,The data or event field was successfully replaced in the historical database.
BadAggregateListMismatch,0x80D40000,The requested number of Aggregates does not match the requested number of NodeIds.
BadAggregateNotSupported,0x80D50000,The requested Aggregate is not support by the server.
BadAggregateInvalidInputs,0x80D60000,The aggregate value could not be derived due to invalid data inputs.
BadAggregateConfigurationRejected,0x80DA0000,The aggregate configuration is not valid for specified node.
GoodDataIgnored,0x00D90000,The request pecifies fields which are not valid for the EventType or cannot be saved by the historian.
GoodCommunicationEvent,0x00A70000,The communication layer has raised an event.
GoodShutdownEvent,0x00A80000,The system is shutting down.
GoodCallAgain,0x00A90000,The operation is not finished and needs to be called again.
GoodNonCriticalTimeout,0x00AA0000,A non-critical timeout occurred.
BadInvalidArgument,0x80AB0000,One or more arguments are invalid.
BadConnectionRejected,0x80AC0000,Could not establish a network connection to remote server.
BadDisconnect,0x80AD0000,The server has disconnected from the client.
BadConnectionClosed,0x80AE0000,The network connection has been closed.
BadInvalidState,0x80AF0000,The operation cannot be completed because the object is closed, uninitialized or in some other invalid state.
BadEndOfStream,0x80B00000,Cannot move beyond end of the stream.
BadNoDataAvailable,0x80B10000,No data is currently available for reading from a non-blocking stream.
BadWaitingForResponse,0x80B20000,The asynchronous operation is waiting for a response.
BadOperationAbandoned,0x80B30000,The asynchronous operation was abandoned by the caller.
BadExpectedStreamToBlock,0x80B40000,The stream did not return all data requested (possibly because it is a non-blocking stream).
BadWouldBlock,0x80B50000,Non blocking behaviour is required and the operation would block.
BadSyntaxError,0x80B60000,A value had an invalid syntax.
BadMaxConnectionsReached,0x80B70000,The operation could not be finished because all available connections are in use.
#endif


	} OpcUaStatusCode;

	DLLEXPORT  void opcUaBinaryEncode(std::ostream& os, const OpcUaStatusCode& value);
	DLLEXPORT  void opcUaBinaryDecode(std::istream& is, OpcUaStatusCode& value);

};

#endif