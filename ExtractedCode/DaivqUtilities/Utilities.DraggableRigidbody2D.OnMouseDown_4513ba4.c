// rea decompile_all
// name: Utilities.DraggableRigidbody2D$$OnMouseDown
// address: 0x4513ba4
// body: available
// range: 0x4513ba4-0x4513e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4513e10 to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4513e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableRigidbody2D__OnMouseDown(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((DAT_09518552 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518552 = 1;
  }
  if (*(long *)(param_3 + 0x90) != 0) {
    if ((*(char *)(*(long *)(param_3 + 0x90) + 0x18) != '\0') || (*(char *)(param_3 + 0x98) != '\0')
       ) {
      return;
    }
    *(undefined1 *)(param_3 + 0x98) = 1;
    if (*(long *)(param_3 + 0x80) != 0) {
      UnityEngine_Events_UnityEvent__Invoke(*(long *)(param_3 + 0x80),0);
      fVar5 = (float)Utilities_DraggableRigidbody2D__GetMouseWorldPos();
      if (*(long *)(param_3 + 0x20) != 0) {
        fVar8 = param_2;
        fVar6 = (float)UnityEngine_Rigidbody2D__get_position(*(long *)(param_3 + 0x20),0);
        *(float *)(param_3 + 0x2c) = fVar6 - fVar5;
        *(float *)(param_3 + 0x30) = fVar8 - param_2;
        if (*(long *)(param_3 + 0x20) != 0) {
          uVar7 = UnityEngine_Rigidbody2D__get_gravityScale(*(long *)(param_3 + 0x20),0);
          *(undefined4 *)(param_3 + 0x28) = uVar7;
          if (*(long *)(param_3 + 0x20) != 0) {
            uVar1 = UnityEngine_Rigidbody2D__get_isKinematic(*(long *)(param_3 + 0x20),0);
            if ((uVar1 & 1) != 0) {
LAB_04513de4:
              if (*(char *)(param_3 + 0x60) == '\0') {
                return;
              }
              uVar2 = Utilities_DraggableRigidbody2D__IERotateToSpecificAngle(param_3);
              UnityEngine_MonoBehaviour__StartCoroutine(param_3,uVar2,0);
              return;
            }
            if (*(long *)(param_3 + 0x20) != 0) {
              uVar1 = UnityEngine_Rigidbody2D__get_simulated(*(long *)(param_3 + 0x20),0);
              if ((uVar1 & 1) == 0) goto LAB_04513de4;
              plVar3 = (long *)(param_3 + 0x38);
              lVar4 = *plVar3;
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
              if ((uVar1 & 1) == 0) {
                lVar4 = UnityEngine_Component__get_gameObject(param_3,0);
                if (lVar4 == 0) goto LAB_04513e14;
                lVar4 = FUN_04b7c294(lVar4,DAT_091cd7f0);
                *plVar3 = lVar4;
                thunk_FUN_03f5d7b8(plVar3,lVar4);
              }
              lVar4 = UnityEngine_Component__get_transform(param_3,0);
              if (lVar4 != 0) {
                fVar8 = param_2;
                uVar7 = UnityEngine_Transform__InverseTransformPoint(fVar5,param_2,0,lVar4,0);
                if (*plVar3 != 0) {
                  UnityEngine_TargetJoint2D__set_target(fVar5,param_2,*plVar3,0);
                  if (*plVar3 != 0) {
                    UnityEngine_TargetJoint2D__set_anchor(uVar7,fVar8,*plVar3,0);
                    if (*plVar3 != 0) {
                      UnityEngine_TargetJoint2D__set_maxForce
                                (*(undefined4 *)(param_3 + 0x40),*plVar3,0);
                      if (*(long *)(param_3 + 0x38) != 0) {
                        UnityEngine_TargetJoint2D__set_dampingRatio
                                  (*(undefined4 *)(param_3 + 0x44),*(long *)(param_3 + 0x38),0);
                        if (*(long *)(param_3 + 0x38) != 0) {
                          UnityEngine_TargetJoint2D__set_frequency
                                    (*(undefined4 *)(param_3 + 0x48),*(long *)(param_3 + 0x38),0);
                          if (*(long *)(param_3 + 0x38) != 0) {
                            UnityEngine_Behaviour__set_enabled(*(long *)(param_3 + 0x38),1,0);
                            if (*(long *)(param_3 + 0x20) != 0) {
                              UnityEngine_Rigidbody2D__set_freezeRotation
                                        (*(long *)(param_3 + 0x20),*(undefined1 *)(param_3 + 0x54),0
                                        );
                              if (*(char *)(param_3 + 0x55) != '\0') {
                                if (*(long *)(param_3 + 0x20) == 0) goto LAB_04513e14;
                                UnityEngine_Rigidbody2D__set_centerOfMass
                                          (uVar7,fVar8,*(long *)(param_3 + 0x20),0);
                              }
                              uVar2 = Utilities_DraggableRigidbody2D__DragObject(param_3);
                              UnityEngine_MonoBehaviour__StartCoroutine(param_3,uVar2,0);
                              goto LAB_04513de4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04513e14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

