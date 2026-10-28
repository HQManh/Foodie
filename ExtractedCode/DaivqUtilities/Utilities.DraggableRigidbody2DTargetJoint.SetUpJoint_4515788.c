// rea decompile_all
// name: Utilities.DraggableRigidbody2DTargetJoint$$SetUpJoint
// address: 0x4515788
// body: available
// range: 0x4515788-0x45158fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45158f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_DraggableRigidbody2DTargetJoint__SetUpJoint
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((DAT_09518563 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518563 = 1;
  }
  plVar2 = (long *)(param_3 + 0xc0);
  lVar3 = *plVar2;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar3,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = UnityEngine_Component__get_gameObject(param_3,0);
    if (lVar3 == 0) goto LAB_045158f8;
    lVar3 = FUN_04b7c294(lVar3,DAT_091cd7f0);
    *plVar2 = lVar3;
    thunk_FUN_03f5d7b8(plVar2,lVar3);
  }
  uVar4 = Utilities_DraggableRigidbody2DJoint__GetMouseWorldPos();
  lVar3 = UnityEngine_Component__get_transform(param_3,0);
  if (lVar3 != 0) {
    uVar6 = param_2;
    uVar5 = UnityEngine_Transform__InverseTransformPoint(uVar4,param_2,0,lVar3,0);
    if (*plVar2 != 0) {
      UnityEngine_TargetJoint2D__set_target(uVar4,param_2,*plVar2,0);
      if (*plVar2 != 0) {
        UnityEngine_TargetJoint2D__set_anchor(uVar5,uVar6,*plVar2,0);
        if (*plVar2 != 0) {
          UnityEngine_TargetJoint2D__set_maxForce(*(undefined4 *)(param_3 + 0xb4),*plVar2,0);
          if (*(long *)(param_3 + 0xc0) != 0) {
            UnityEngine_TargetJoint2D__set_dampingRatio
                      (*(undefined4 *)(param_3 + 0xb8),*(long *)(param_3 + 0xc0),0);
            if (*(long *)(param_3 + 0xc0) != 0) {
              UnityEngine_TargetJoint2D__set_frequency
                        (*(undefined4 *)(param_3 + 0xbc),*(long *)(param_3 + 0xc0),0);
              if (*(long *)(param_3 + 0xc0) != 0) {
                UnityEngine_Behaviour__set_enabled(*(long *)(param_3 + 0xc0),1,0);
                return *plVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_045158f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

