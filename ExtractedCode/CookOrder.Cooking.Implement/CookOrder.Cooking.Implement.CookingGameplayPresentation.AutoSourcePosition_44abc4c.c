// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$AutoSourcePosition
// address: 0x44abc4c
// body: available
// range: 0x44abc4c-0x44abef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44abef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__AutoSourcePosition
               (long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  long local_38;
  long local_28;
  
  if ((DAT_09518214 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e580);
    FUN_03f5c2a4(&DAT_0919e420);
    FUN_03f5c2a4(&DAT_091ada78);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518214 = 1;
  }
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_2 == 0) goto LAB_044abef4;
  if (*(int *)(param_2 + 0x18) == 0) {
LAB_044abe0c:
    uStack_58 = *(undefined8 *)(param_2 + 0x30);
    local_60 = *(undefined8 *)(param_2 + 0x28);
    local_50 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                      (param_1,&local_60,&local_40);
    lVar2 = local_40;
    if ((uVar1 & 1) == 0) {
      CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint(param_1);
      return;
    }
  }
  else {
    if (*(int *)(param_2 + 0x18) == 5) {
LAB_044abd4c:
      if (*(long *)(param_1 + 0x300) == 0) goto LAB_044abef4;
      uVar1 = FUN_06f54e88(*(long *)(param_1 + 0x300),*(undefined8 *)(param_2 + 0x20),&local_38,
                           DAT_0919e420);
      lVar2 = local_38;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
        if ((uVar1 & 1) != 0) {
          if ((local_38 == 0) ||
             (lVar2 = UnityEngine_Component__get_gameObject(local_38,0), lVar2 == 0))
          goto LAB_044abef4;
          uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
          if ((uVar1 & 1) == 0) {
            if ((((*(long *)(param_1 + 0x2d8) != 0) &&
                 (lVar2 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x120), lVar2 != 0)) &&
                (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) &&
               ((lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0 && (local_38 != 0)))) {
              if (*(long *)(local_38 + 0x88) == 0) {
                fVar4 = 0.0;
              }
              else {
                fVar4 = (float)*(int *)(*(long *)(local_38 + 0x88) + 0x18);
              }
              if (*(long *)(param_1 + 0x130) != 0) {
                UnityEngine_Transform__TransformPoint
                          ((fVar4 + (float)(*(int *)(lVar2 + 0x18) + -1) * -0.5) *
                           *(float *)(param_1 + 0x2a4),
                           *(float *)(param_1 + 0x2ac) -
                           *(float *)(param_1 + 0x2a8) * (float)(*(int *)(param_1 + 0x228) + -1),0,
                           *(long *)(param_1 + 0x130),0);
                return;
              }
            }
            goto LAB_044abef4;
          }
          if (local_38 == 0) goto LAB_044abef4;
          uVar3 = *(undefined8 *)(local_38 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
          lVar2 = local_38;
          if ((uVar1 & 1) != 0) {
            if (local_38 == 0) goto LAB_044abef4;
            lVar2 = *(long *)(local_38 + 0x20);
          }
          if (lVar2 == 0) goto LAB_044abef4;
          lVar2 = UnityEngine_Component__get_transform(lVar2,0);
          goto joined_r0x044abe34;
        }
      }
      goto LAB_044abe0c;
    }
    if (*(long *)(param_1 + 0x310) == 0) goto LAB_044abef4;
    uVar1 = FUN_06f54e88(*(long *)(param_1 + 0x310),*(undefined8 *)(param_2 + 0x20),&local_28,
                         DAT_0919e580);
    lVar2 = local_28;
    if ((uVar1 & 1) == 0) {
LAB_044abd40:
      if (*(int *)(param_2 + 0x18) != 5) goto LAB_044abe0c;
      goto LAB_044abd4c;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar1 & 1) == 0) goto LAB_044abd40;
    if ((local_28 == 0) || (lVar2 = UnityEngine_Component__get_gameObject(local_28,0), lVar2 == 0))
    goto LAB_044abef4;
    uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
    lVar2 = local_28;
    if ((uVar1 & 1) == 0) goto LAB_044abd40;
  }
joined_r0x044abe34:
  if (lVar2 != 0) {
    UnityEngine_Transform__get_position(lVar2,0);
    return;
  }
LAB_044abef4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

