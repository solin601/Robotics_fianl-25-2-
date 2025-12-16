# Robotics_fianl-25-2

1. 프로젝트 개요

본 프로젝트는 NVIDIA Isaac Sim 환경에서 Duckiebot 로봇 모델을 구현하고,
ROS2 기반 제어·센서 처리·영상처리를 통합한 자율주행 로봇 시스템을 구축하는 것을 목표로 한다.

Duckiebot은 시뮬레이션 환경에서 다음 기능을 수행한다.

- ROS2 서비스 기반 LED 색상 제어
- 저수준 및 고수준 모터 제어
- 카메라 센서를 통한 영상 획득
- 영상처리 기반 객체 인식 및 행동 제어

본 프로젝트는 Isaac Sim과 ROS2를 ROS Bridge 및 Action Graph를 통해 연동하여 구현하였다.

2. 개발 환경

- Simulator: NVIDIA Isaac Sim
- Middleware: ROS2
- Programming Language: Python
- Image Processing: OpenCV
- Robot Model: URDF 기반 Duckiebot

4. 프로젝트 구조

본 프로젝트는 ROS2 워크스페이스(duckiebot_ws) 기반으로 구성되며, 기능별 패키지 단위로 구조화하였다.

duckiebot_ws/
├── src/
│   ├── duckie_led_interfaces/        # LED 제어용 ROS2 서비스 인터페이스
│   │   └── srv/
│   │       └── LedControl.srv
│   │
│   ├── duckie_led_pkg/               # LED 제어 서비스 노드
│   │   └── duckie_led_pkg/
│   │       └── led_service_node.py
│   │
│   ├── duckie_vision_pkg/            # 카메라 영상 처리 및 행동 제어 노드
│   │   └── duckie_vision_pkg/
│   │       └── vision_control_node.py
│   │
│   └── compress_camera_pkg/          # 카메라 이미지 압축 및 퍼블리시 노드
│
└── isaac_sim/                         # Isaac Sim 시뮬레이션 및 Action Graph 설정


4. 빌드 방법
4.1 ROS2 워크스페이스 빌드
cd duckiebot_ws
colcon build

빌드 완료 후, 아래 명령어로 환경을 설정한다.
source install/setup.bash

5. 실행 방법
5.1 Isaac Sim 실행

Isaac Sim을 실행한다.
Dukiebot 모델 및 Action Graph가 포함된 시뮬레이션 환경을 로드한다.
ROS Bridge가 활성화된 상태인지 확인한다.

5.2 LED 제어 서비스 실행
ros2 run duckie_led_pkg led_service_node

LED 색상 변경 테스트:
ros2 service call /duckie_led_control duckie_led_interfaces/srv/LedControl "{color: 'red'}"

5.3 카메라 및 영상처리 노드 실행
ros2 run duckie_vision_pkg vision_control_node

카메라 토픽 확인:
ros2 topic echo /duckie/camera/image_raw

5.4 모터 제어 테스트

고수준 명령 테스트:
ros2 topic pub /duckie/cmd_vel geometry_msgs/Twist "{linear: {x: 0.2}, angular: {z: 0.3}}"

저수준 명령 테스트:
ros2 topic pub /duckie/wheel_left_cmd std_msgs/Float64 "data: 1.0"
ros2 topic pub /duckie/wheel_right_cmd std_msgs/Float64 "data: 1.0"

6. 시스템 동작 흐름

Isaac Sim 내부 카메라에서 RGB 영상 생성
ROS2 토픽을 통해 영상 퍼블리시
영상처리 노드에서 객체 인식 수행
인식 결과를 기반으로 Twist 제어 명령 생성
고수준 속도 제어 → 저수준 바퀴 관절 제어 변환
Duckiebot 주행 동작 수행

7. 시연 내용

Duckiebot 모델 구성 및 구조 설명
LED 서비스 호출에 따른 LED 색상 변경
고수준 및 저수준 모터 제어 동작 확인
카메라 영상 토픽 확인
빨간색 객체 인식 후 자율 주행 동작 시연
