
# ROS 2 Rover Control and Navigation

A ROS 2-based rover control and navigation project developed as part of the **Mars Rover Team (MRT), IIT Bombay** induction project.

The project explores fundamental robotics software concepts through a simulated rover, covering ROS 2 communication mechanisms, power and health monitoring, odometry, autonomous navigation, mission control, and multi-rover operation.

It provides practical experience with ROS 2 nodes, topics, services, actions, custom messages, parameters, launch files, and ROS 2 bag recording.

---

## Overview

The project progressively develops a rover software system through multiple tasks, starting with basic ROS 2 workspace setup and building toward autonomous mission execution.

The rover system includes:

- **Power Monitoring:** Publishes rover battery and temperature information.
- **Health Monitoring:** Monitors rover status and reports its health.
- **Odometry:** Estimates rover position and orientation using motion information.
- **Autonomous Navigation:** Controls rover movement toward a specified destination.
- **Mission Control:** Coordinates navigation and rover operations through ROS 2 communication mechanisms.
- **Multi-Rover Support:** Allows multiple rover instances to operate simultaneously using ROS 2 namespaces.
- **Data Recording:** Records rover telemetry and control information using ROS 2 bags.

## Key Features

- **Modular ROS 2 Architecture:** Implements functionality through independent ROS 2 nodes.
- **Power Publisher:** Publishes battery and temperature information using `Float32MultiArray`.
- **Health Monitoring:** Uses a dedicated health node to monitor rover status.
- **Custom Messages:** Defines custom message interfaces for rover-related information.
- **Odometry:** Implements rover position and orientation estimation.
- **Parameter Management:** Uses ROS 2 parameters and YAML configuration files.
- **Launch Files:** Simplifies starting and managing multiple ROS 2 nodes.
- **Service-Based Control:** Implements request-response communication for changing rover operating modes.
- **Autonomous Navigation:** Uses straight-line navigation and heading correction to reach a target.
- **Battery-Aware Movement:** Considers rover power consumption during navigation.
- **Multi-Rover Operation:** Supports simultaneous rover instances using namespaces.
- **ROS 2 Bag Recording:** Records telemetry and control topics for later analysis.

## System Architecture

The project follows a modular ROS 2 architecture in which individual nodes handle different aspects of rover operation.

### Major Components

| Component | Responsibility |
|---|---|
| Power Publisher | Publishes rover battery and temperature information. |
| Health Node | Monitors rover health and publishes status information. |
| Monitor Node | Subscribes to rover telemetry and monitors its operating condition. |
| Odometry Node | Estimates rover position and orientation. |
| Drive Node | Handles rover movement and operating-mode changes. |
| Navigator Node | Coordinates autonomous navigation and mission execution. |

The nodes communicate using ROS 2 topics, services, and actions, allowing individual components to operate independently.

## ROS 2 Concepts Implemented

### 1. Topics

Topics provide asynchronous publish-subscribe communication between ROS 2 nodes.

They are used for continuous information exchange, including:

- Rover battery and temperature.
- Rover health status.
- Odometry information.
- Velocity commands.
- Monitoring information.

The publisher and subscriber do not need to communicate directly or wait for a response.

### 2. Services

Services implement synchronous request-response communication.

For example, the `/rover/set_mode` service allows a client to request a change in the rover's operating mode.

The service interaction follows this sequence:

1. `drive_node` creates and advertises the service.
2. `navigator_node` sends a mode-change request.
3. The server validates and processes the request.
4. The rover's operating mode is updated if the request is valid.
5. The server returns a response indicating success or failure.
6. The client receives the response and continues execution accordingly.

### 3. Actions

Actions are used for long-running operations that require feedback during execution.

Unlike services, actions support:

- Sending navigation goals.
- Receiving continuous execution feedback.
- Obtaining a final result.
- Cancelling goals while they are executing.

These capabilities make actions particularly useful for autonomous navigation and mission control.

## Rover Navigation

The navigation system allows the rover to travel toward a specified destination.

### Straight-Line Navigation

The navigator calculates a direct path toward the destination instead of moving independently along the horizontal and vertical axes.

This reduces unnecessary movement and helps conserve battery power.

### Heading Correction

The rover continuously checks its orientation while moving toward the destination.

Heading corrections are applied during navigation to reduce deviations caused by errors in the initial heading estimate and the finite interval between successive control updates.

### Adaptive Speed Control

When the rover approaches its destination, its speed is reduced.

This prevents overshooting the target and avoids repeated turning and overshooting behavior near the destination.

The navigation system therefore incorporates:

- Destination-based movement.
- Heading correction.
- Distance-based speed adjustment.
- Battery-aware navigation.

## Power and Health Monitoring

### Power Publisher

The power publisher provides information about the rover's operating state.

It publishes:

- Battery level.
- Temperature.

The values are transmitted using the ROS 2 `Float32MultiArray` message type.

### Health Monitoring

The health node publishes rover health information, while the monitor node subscribes to the relevant status topics.

This establishes a basic monitoring pipeline in which rover operating information can be continuously observed by other ROS 2 components.

## Odometry

The odometry component estimates the rover's movement and orientation.

It uses velocity information to calculate changes in position and heading over time.

For a differential-drive rover, the basic motion model can be expressed as:

\[
v = \frac{v_r+v_l}{2}
\]

\[
\omega = \frac{v_r-v_l}{L}
\]

where:

- \(v_r\) is the right wheel's linear velocity.
- \(v_l\) is the left wheel's linear velocity.
- \(L\) is the distance between the wheels.
- \(v\) is the rover's linear velocity.
- \(\omega\) is its angular velocity.

The implementation also handles the zero-angular-velocity case to avoid division-by-zero errors during odometry calculations.

## Parameters and Configuration

The project uses ROS 2 parameters to configure node behavior.

Parameters can be defined in YAML configuration files and declared within individual nodes before being accessed.

This makes it possible to adjust node behavior without modifying the underlying implementation.

## Launch Files

ROS 2 launch files are used to start and configure multiple nodes together.

They provide a convenient way to:

- Start the rover's software components.
- Configure node parameters.
- Control node output.
- Manage the execution of multiple nodes.

Node-specific logging can also be filtered using ROS 2 command-line arguments.

## Multi-Rover Operation

The project extends the rover architecture to support two rovers running simultaneously.

A major consideration in multi-rover operation is avoiding conflicts between topic, service, and action names.

This is handled through ROS 2 namespaces and relative naming.

For example, instead of using absolute topic names, nodes use relative names so that their interfaces are resolved within their respective namespaces.

This allows multiple rover instances to maintain independent communication interfaces.

## ROS 2 Bag Recording

The project uses ROS 2 bag recording to capture rover telemetry and control information.

The following topics are recorded:

- `/cmd_vel`
- `/rover/health`
- `/rover/monitor`
- `/rover/odom`
- `/rover/power`

Recording these topics makes it possible to inspect rover behavior and analyze its operation after execution.

## Installation and Setup

### Prerequisites

- Ubuntu Linux.
- ROS 2 installation.
- Python 3.
- `colcon` build tools.
- Required ROS 2 message and package dependencies.

Ensure that ROS 2 is installed and sourced before building the workspace.

### 1. Clone the Repository

```bash
git clone https://github.com/pranav398/rover_ws.git
cd rover_ws
```

### 2. Source ROS 2

Replace `<ros2-distro>` with your installed ROS 2 distribution.

```bash
source /opt/ros/<ros2-distro>/setup.bash
```

### 3. Install Dependencies

From the workspace root:

```bash
rosdep install --from-paths src --ignore-src -r -y
```

### 4. Build the Workspace

```bash
colcon build --symlink-install
```

### 5. Source the Workspace

```bash
source install/setup.bash
```

## Running the Project

The workspace contains multiple ROS 2 packages and nodes developed across the assignment tasks.

After building and sourcing the workspace, individual nodes can be executed using:

```bash
ros2 run <package_name> <executable_name>
```

To launch a configured group of nodes:

```bash
ros2 launch <package_name> <launch_file>
```

To inspect available packages:

```bash
ros2 pkg list
```

To inspect active nodes:

```bash
ros2 node list
```

To inspect active topics:

```bash
ros2 topic list
```

To inspect available services:

```bash
ros2 service list
```

## Project Structure

```text
rover_ws/
│
├── src/
│   └── ROS 2 packages and node implementations
│
├── rover_bag/
│   └── Recorded rover telemetry
│
├── build/
│   └── Build artifacts
│
├── install/
│   └── Installed ROS 2 packages
│
├── log/
│   └── Build and execution logs
│
├── docs/
│   └── Project documentation
│
├── main.tex
├── report.pdf
└── README.md
```

## Challenges and Learnings

During development, several practical challenges were encountered.

### Data Type Compatibility

ROS 2 messages enforce strict data types. Floating-point values must be represented appropriately when publishing `Float32MultiArray` messages.

### Message Publishing

ROS 2 publishers require message objects rather than raw Python strings. For example, string messages must be published using the appropriate `std_msgs/msg/String` message type.

### Custom Message Packages

Custom interfaces require correct configuration of both `package.xml` and `CMakeLists.txt` to ensure successful message generation and compilation.

### Parameter Declaration

Parameters defined in YAML files must also be declared within their respective ROS 2 nodes before their values can be accessed.

### Odometry Edge Cases

Zero angular velocity must be handled explicitly to prevent division-by-zero errors during motion calculations.

### Asynchronous Execution

Coordinating asynchronous callbacks, services, and ROS 2 spinning requires careful execution management to avoid runtime conflicts.

### Navigation Accuracy

Finite control intervals can introduce heading errors and cause the rover to overshoot its destination. Continuous heading correction and adaptive speed control help address these problems.

### Multi-Rover Communication

Using absolute topic names can cause naming conflicts when multiple rover instances run simultaneously. Relative names and namespaces provide isolation between rover instances.

## Technical Report

For a detailed account of the assignment implementation, encountered issues, debugging process, ROS 2 services, and design decisions, refer to:

- [Technical Report (PDF)](report.pdf)
- [LaTeX Source (main.tex)](main.tex)

## Technologies Used

- **ROS 2** – Robotics middleware and communication framework.
- **Python** – ROS 2 node implementation.
- **ROS 2 Topics** – Publish-subscribe communication.
- **ROS 2 Services** – Request-response communication.
- **ROS 2 Actions** – Long-running task execution.
- **Custom ROS 2 Interfaces** – Application-specific messages and services.
- **YAML** – Parameter configuration.
- **ROS 2 Bags** – Telemetry recording and analysis.

## Acknowledgements

Developed as part of the induction project of the **Mars Rover Team (MRT), IIT Bombay**.

---

**Repository:** [pranav398/rover_ws](https://github.com/pranav398/rover_ws)
