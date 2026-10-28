// rea decompile_all
// name: AnhPD.FoodOrder.DragItem.<>c__DisplayClass56_0$$<JumpToMovingTargetTween>b__2
// address: 0x4113278
// body: available
// range: 0x4113278-0x4113477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4113474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_DragItem_<>c__DisplayClass56_0__<JumpToMovingTargetTween>b__2
               (undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0951620e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ce0);
    DAT_0951620e = 1;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    fVar11 = *(float *)(param_3 + 0x14);
    fVar12 = *(float *)(param_3 + 0x18);
    fVar2 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x20),0);
    fVar6 = *(float *)(param_3 + 0x10);
    fVar3 = 1.0;
    if (fVar6 <= 1.0) {
      fVar3 = fVar6;
    }
    fVar10 = 0.0;
    if (0.0 <= fVar6) {
      fVar10 = fVar3;
    }
    fVar3 = sinf(fVar6 * 3.1415927);
    if (*(long *)(param_3 + 0x30) != 0) {
      fVar6 = *(float *)(param_3 + 0x28);
      lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf();
      if (*(int *)(DAT_09183ce0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183ce0);
      }
      if (lVar1 != 0) {
        fVar7 = (fVar2 - fVar11) * fVar10;
        fVar3 = fVar6 * fVar3 + fVar12 + (param_2 - fVar12) * fVar10;
        fVar2 = fVar3 * 0.01;
        UnityEngine_Transform__set_position(fVar11 + fVar7,lVar1,0);
        if (*(char *)(param_3 + 0x38) == '\0') {
          return;
        }
        if (*(long *)(param_3 + 0x30) != 0) {
          lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf();
          if (*(long *)(param_3 + 0x20) != 0) {
            uVar5 = *(undefined8 *)(param_3 + 0x44);
            uVar4 = *(undefined8 *)(param_3 + 0x3c);
            local_70 = UnityEngine_Transform__get_rotation(*(long *)(param_3 + 0x20),0);
            fStack_6c = fVar3;
            local_68 = fVar2;
            fStack_64 = fVar7;
            local_60 = uVar4;
            uStack_58 = uVar5;
            UnityEngine_Quaternion__Internal_Slerp
                      (*(undefined4 *)(param_3 + 0x10),&local_60,&local_70,0);
            if ((lVar1 != 0) &&
               (UnityEngine_Transform__set_rotation(lVar1,0), *(long *)(param_3 + 0x30) != 0)) {
              lVar1 = AnhPD_FoodOrder_DragItemBase__get_Tf();
              if (*(long *)(param_3 + 0x30) != 0) {
                fVar12 = *(float *)(param_3 + 0x50);
                fVar11 = *(float *)(param_3 + 0x54);
                fVar10 = *(float *)(param_3 + 0x4c);
                fVar6 = (float)AnhPD_FoodOrder_DragItem__GetTargetLocalScale
                                         (*(long *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x20))
                ;
                if (lVar1 != 0) {
                  fVar9 = *(float *)(param_3 + 0x10);
                  fVar7 = 1.0;
                  if (fVar9 <= 1.0) {
                    fVar7 = fVar9;
                  }
                  fVar8 = 0.0;
                  if (0.0 <= fVar9) {
                    fVar8 = fVar7;
                  }
                  UnityEngine_Transform__set_localScale
                            (fVar10 + (fVar6 - fVar10) * fVar8,fVar12 + (fVar3 - fVar12) * fVar8,
                             fVar11 + (fVar2 - fVar11) * fVar8,lVar1,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

