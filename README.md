<!--
SPDX-FileCopyrightText: 2021 Belcan Advanced Solutions
SPDX-FileCopyrightText: 2021 Kaelan Thijs Fouwels <kaelan.thijs@fouwels.com>

SPDX-License-Identifier: Apache-2.0
-->

### Forte - Open PLC runtime

Containerised deployment of the [FORTE](https://www.eclipse.org/4diac/index.php) IEC 61499 open PLC runtime.

Built with support for the the following IO drivers:

- MQTT 
- OPC (via open62541)

### Versioning

Tracked against unstream, see package tags

### Building

See makefile

### Ports

- 4840 (OPC-UA server)
- 61499 (IEC-61499, distributed logic, programming interface)

### Licensing

Apache-2.0, see SPDX tags for file level tracking
