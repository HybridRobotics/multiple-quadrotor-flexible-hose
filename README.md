# Multiple Quadrotors Carrying a Flexible Hose: Dynamics, Differential-Flatness and Control

<img src="./media/diff-flat.png" width="600"  />

## About
This repo presents the Matlab code for implementing "[Multiple Quadrotors Carrying a Flexible Hose: Dynamics, Differential-Flatness and Control](https://arxiv.org/abs/1911.12650)". The Matlab class `MultipleQuadrotorFlexibleHose.m` defines and simulates the generalized coordinate-free dynamics of the system. Any desired state trajectory and inputs can be computed using `flat2state` method for any given flat output trajectory. The class also computes the linearized dynamics about the desired time-varying state trajectory. A Finite-Horizon LQR controller is implemented to track a stationary setpoint and circular trajectory. 


## Running Examples
The Matlab code has been tested with R2019a version. Example scripts can be found in `matlab/examples/`
1. Open the examples folder in Matlab. 

2. Run the scripts. 

`example1.m, example2.m` present example templates to simulate _multiple-quadrotor-flexible-hose_ dynamics along with LQR control on the linearized dynamics. 

Scripts for the simulations presented in the paper are `sim_1a_SETPOINT_nQ2.m, sim_1b_SETPOINT_nQ3.m,  sim_2_TRAJ_nQ2.m`. 

### Using MEX files
Use `matlab/utils/func_generators/generateMexFiles.m` to MEX the dynamics for appropriate system parameters (to reduce simulation time). 

### Common Errors
- If `Unrecognized function or variable` error arises, see [Geometric Toolbox](https://github.com/HybridRobotics/geometric-toolbox)


## Simulations
Mat files for simulations presented in the paper. [Link](https://drive.google.com/open?id=1orp8ZG4U23B6Hyn9AXAL7uglj7Fyrver)
|  Sim 1.1: Setpoint 2 quadrotors  | Sim 1.2: Setpoint 3 quadrotors  | Sim 2: Trajectory 2 quadrotors |
|---|---|---|
|  <img src="./media/sim1.gif" width="300"  /> |  <img src="./media/sim2.gif" width="300"  /> | <img src="./media/sim3.gif" width="300"  /> |

## Citation

- Prasanth Kotaru, and Koushil Sreenath. "Multiple quadrotors carrying a flexible hose: dynamics, differential flatness and control." IFAC-PapersOnLine 53, no. 2 (2020): 8832-8839.
```
@article{kotaru2020multiple,
  title={Multiple quadrotors carrying a flexible hose: dynamics, differential flatness and control},
  author={Kotaru, Prasanth and Sreenath, Koushil},
  journal={IFAC-PapersOnLine},
  volume={53},
  number={2},
  pages={8832--8839},
  year={2020},
  publisher={Elsevier}
}
```
