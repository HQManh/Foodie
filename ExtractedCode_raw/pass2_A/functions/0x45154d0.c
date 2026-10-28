// rea decompile_all
// name: Utilities.DraggableRigidbody2DSpringJoint$$SetUpJoint
// address: 0x45154d0
// body: available
// range: 0x45154d0-0x4515737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4515734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_DraggableRigidbody2DSpringJoint__SetUpJoint
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_09518562 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd768);
    FUN_03f5c2a4(&DAT_091cd7b0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0920c0d8);
    DAT_09518562 = 1;
  }
  plVar3 = (long *)(param_3 + 0xc0);
  lVar4 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar1 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(lVar4,DAT_0920c0d8,0);
    if (lVar4 == 0) goto LAB_04515734;
    lVar2 = FUN_04b7c294(lVar4,DAT_091cd768);
    plVar5 = (long *)(param_3 + 200);
    *plVar5 = lVar2;
    thunk_FUN_03f5d7b8(plVar5,lVar2);
    if (*plVar5 == 0) goto LAB_04515734;
    UnityEngine_Rigidbody2D__set_isKinematic(*plVar5,1,0);
    lVar4 = FUN_04b7c294(lVar4,DAT_091cd7b0);
    *plVar3 = lVar4;
    thunk_FUN_03f5d7b8(plVar3,lVar4);
  }
  uVar6 = Utilities_DraggableRigidbody2DJoint__GetMouseWorldPos();
  if ((*plVar3 != 0) && (lVar4 = UnityEngine_Component__get_transform(*plVar3,0), lVar4 != 0)) {
    UnityEngine_Transform__set_position(uVar6,param_2,0,lVar4,0);
    lVar4 = *plVar3;
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
    }
    if (lVar4 != 0) {
      UnityEngine_AnchoredJoint2D__set_anchor
                (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],
                 lVar4,0);
      lVar2 = *(long *)(param_3 + 0xc0);
      lVar4 = UnityEngine_Component__get_transform(param_3,0);
      if ((lVar4 != 0) &&
         (UnityEngine_Transform__InverseTransformPoint(uVar6,param_2,0,lVar4,0), lVar2 != 0)) {
        UnityEngine_AnchoredJoint2D__set_connectedAnchor(lVar2,0);
        if (*plVar3 != 0) {
          UnityEngine_SpringJoint2D__set_dampingRatio(*(undefined4 *)(param_3 + 0xb4),*plVar3,0);
          if (*(long *)(param_3 + 0xc0) != 0) {
            UnityEngine_SpringJoint2D__set_frequency
                      (*(undefined4 *)(param_3 + 0xb8),*(long *)(param_3 + 0xc0),0);
            if (*(long *)(param_3 + 0xc0) != 0) {
              UnityEngine_Joint2D__set_enableCollision(*(long *)(param_3 + 0xc0),0,0);
              if (*plVar3 != 0) {
                UnityEngine_Joint2D__set_connectedBody(*plVar3,*(undefined8 *)(param_3 + 0x20),0);
                if (*(long *)(param_3 + 0xc0) != 0) {
                  UnityEngine_SpringJoint2D__set_autoConfigureDistance
                            (*(long *)(param_3 + 0xc0),0,0);
                  if (*plVar3 != 0) {
                    UnityEngine_Behaviour__set_enabled(*plVar3,1,0);
                    return *plVar3;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04515734:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

