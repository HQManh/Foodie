// rea decompile_all
// name: Utilities.DraggableRigidbody2DJoint$$OnMouseDown
// address: 0x4514724
// body: available
// range: 0x4514724-0x4514927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451491c to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4514920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4514924 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_DraggableRigidbody2DJoint__OnMouseDown
               (undefined1 param_1 [16],float param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_09518559 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091be030);
    DAT_09518559 = 1;
  }
  if (param_3[0x15] != 0) {
    if ((*(char *)(param_3[0x15] + 0x18) != '\0') || ((char)param_3[0x16] != '\0')) {
      return;
    }
    fVar7 = (float)Utilities_DraggableRigidbody2DJoint__GetMouseWorldPos();
    fVar10 = param_2;
    if ((char)param_3[8] == '\0') {
LAB_045147ec:
      *(undefined1 *)(param_3 + 0x16) = 1;
      uVar8 = UnityEngine_Time__get_time(0);
      *(undefined4 *)(param_3 + 0xb) = uVar8;
      *(float *)((long)param_3 + 0x5c) = fVar7;
      *(float *)(param_3 + 0xc) = param_2;
      if (param_3[0x13] != 0) {
        FUN_0647fad4(param_3[0x13],param_3,DAT_091be030);
        if (param_3[4] != 0) {
          fVar9 = (float)UnityEngine_Rigidbody2D__get_position(param_3[4],0);
          *(float *)((long)param_3 + 0x2c) = fVar9 - fVar7;
          *(float *)(param_3 + 6) = fVar10 - param_2;
          if (param_3[4] != 0) {
            uVar8 = UnityEngine_Rigidbody2D__get_gravityScale(param_3[4],0);
            *(undefined4 *)(param_3 + 5) = uVar8;
            if (param_3[4] != 0) {
              uVar3 = UnityEngine_Rigidbody2D__get_isKinematic(param_3[4],0);
              if ((uVar3 & 1) != 0) {
LAB_045148f0:
                if ((char)param_3[0xf] != '\0') {
                  uVar4 = Utilities_DraggableRigidbody2DJoint__IERotateToSpecificAngle(param_3);
                  UnityEngine_MonoBehaviour__StartCoroutine(param_3,uVar4,0);
                  return;
                }
                return;
              }
              lVar5 = (**(code **)(*param_3 + 0x178))(param_3,*(undefined8 *)(*param_3 + 0x180));
              param_3[7] = lVar5;
              thunk_FUN_03f5d7b8(param_3 + 7,lVar5);
              if (param_3[4] != 0) {
                UnityEngine_Rigidbody2D__set_freezeRotation
                          (param_3[4],*(undefined1 *)((long)param_3 + 0x6c),0);
                lVar5 = UnityEngine_Component__get_transform(param_3,0);
                if (lVar5 != 0) {
                  UnityEngine_Transform__InverseTransformPoint(fVar7,param_2,0,lVar5,0);
                  if (*(char *)((long)param_3 + 0x6e) != '\0') {
                    if (param_3[4] == 0) goto LAB_04514920;
                    UnityEngine_Rigidbody2D__set_centerOfMass(param_3[4],0);
                  }
                  uVar4 = Utilities_DraggableRigidbody2DJoint__DragObject(param_3);
                  UnityEngine_MonoBehaviour__StartCoroutine(param_3,uVar4,0);
                  goto LAB_045148f0;
                }
              }
            }
          }
        }
      }
    }
    else {
      lVar5 = param_3[9];
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if ((int)uVar1 < 1) {
          return;
        }
        lVar6 = 0;
        while( true ) {
          if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar2 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
          if (lVar2 == 0) break;
          fVar10 = param_2;
          uVar3 = UnityEngine_Collider2D__OverlapPoint(fVar7,lVar2,0);
          if ((uVar3 & 1) != 0) goto LAB_045147ec;
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar6 = lVar6 + 1;
          if ((int)uVar1 <= (int)lVar6) {
            return;
          }
        }
      }
    }
  }
LAB_04514920:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

