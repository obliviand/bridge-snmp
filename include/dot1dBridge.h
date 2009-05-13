/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.scalar.conf,v 1.9 2005/01/07 09:37:18 dts12 Exp $
 */
#ifndef DOT1DBRIDGE_H
#define DOT1DBRIDGE_H

/* function declarations */
void init_dot1dBridge(void);
Netsnmp_Node_Handler handle_dot1dBaseBridgeAddress;
Netsnmp_Node_Handler handle_dot1dBaseNumPorts;
Netsnmp_Node_Handler handle_dot1dBaseType;
Netsnmp_Node_Handler handle_dot1dStpProtocolSpecification;
Netsnmp_Node_Handler handle_dot1dStpPriority;
Netsnmp_Node_Handler handle_dot1dStpTimeSinceTopologyChange;
Netsnmp_Node_Handler handle_dot1dStpTopChanges;
Netsnmp_Node_Handler handle_dot1dStpDesignatedRoot;
Netsnmp_Node_Handler handle_dot1dStpRootCost;
Netsnmp_Node_Handler handle_dot1dStpRootPort;
Netsnmp_Node_Handler handle_dot1dStpMaxAge;
Netsnmp_Node_Handler handle_dot1dStpHelloTime;
Netsnmp_Node_Handler handle_dot1dStpHoldTime;
Netsnmp_Node_Handler handle_dot1dStpForwardDelay;
Netsnmp_Node_Handler handle_dot1dStpBridgeMaxAge;
Netsnmp_Node_Handler handle_dot1dStpBridgeHelloTime;
Netsnmp_Node_Handler handle_dot1dStpBridgeForwardDelay;
Netsnmp_Node_Handler handle_dot1dStpVersion;
Netsnmp_Node_Handler handle_dot1dStpTxHoldCount;
Netsnmp_Node_Handler handle_dot1dTpLearnedEntryDiscards;
Netsnmp_Node_Handler handle_dot1dTpAgingTime;

#endif /* DOT1DBRIDGE_H */
