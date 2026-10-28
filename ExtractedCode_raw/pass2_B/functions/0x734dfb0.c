// rea decompile_all
// name: Lean.Touch.LeanSelectByFinger$$Select
// address: 0x734dfb0
// body: available
// range: 0x734dfb0-0x734e3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734e3d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanSelectByFinger__Select(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long local_60;
  long lStack_58;
  
  if ((DAT_09520746 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187708);
    FUN_03f5c2a4(&DAT_09187718);
    FUN_03f5c2a4(&DAT_091b3230);
    FUN_03f5c2a4(&DAT_091b3238);
    FUN_03f5c2a4(&DAT_091b3248);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091be070);
    FUN_03f5c2a4(&DAT_091be1d8);
    FUN_03f5c2a4(&DAT_091be1c0);
    DAT_09520746 = 1;
  }
  local_60 = 0;
  lStack_58 = param_3;
  thunk_FUN_03f5d7b8(&lStack_58,param_3);
  local_60 = param_1;
  thunk_FUN_03f5d7b8(&local_60,param_1);
  lVar2 = lStack_58;
  lVar9 = local_60;
  uVar3 = Lean_Common_LeanSelect__TrySelect(param_1,param_2,0);
  if ((uVar3 & 1) == 0) {
    if (param_3 != 0) {
      if ((*(char *)(param_3 + 0x18) == '\0') && (*(char *)(param_3 + 0x19) != '\0')) {
        return;
      }
      if (param_2 != (long *)0x0) {
        if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187718 + 0x130)) {
          param_2 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187718 + 0x130) * 8 +
                          -8) != DAT_09187718) {
          param_2 = (long *)0x0;
        }
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(param_2,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((param_2 != (long *)0x0) && (param_2[0xd] != 0)) {
        uVar3 = FUN_05959a0c(param_2[0xd],lVar9,lVar2,DAT_091b3238);
        lVar5 = DAT_091b3230;
        if ((uVar3 & 1) != 0) {
          return;
        }
        lVar4 = param_2[0xd];
        if (lVar4 != 0) {
          lVar6 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar6 + 0x20);
              *plVar8 = lVar9;
              *(long *)(lVar6 + 0x28) = lVar2;
              thunk_FUN_03f5d7b8(plVar8,0);
              return;
            }
            FUN_05959650(lVar4,lVar9,lVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
    goto LAB_0734e3d0;
  }
  if (param_2 == (long *)0x0) {
LAB_0734e0bc:
    plVar8 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09187718 + 0x130)) goto LAB_0734e0bc;
    plVar8 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187718 + 0x130) * 8 + -8) !=
        DAT_09187718) {
      plVar8 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(plVar8,0,0);
  if ((uVar3 & 1) == 0) goto LAB_0734e344;
  if ((plVar8 == (long *)0x0) || (plVar8[0xd] == 0)) goto LAB_0734e3d0;
  uVar3 = FUN_05959a0c(plVar8[0xd],lVar9,lVar2,DAT_091b3238);
  lVar5 = DAT_091b3230;
  if ((uVar3 & 1) == 0) {
    lVar4 = plVar8[0xd];
    if (lVar4 == 0) goto LAB_0734e3d0;
    lVar6 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_0734e3d0;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (long)(int)uVar1 * 0x10;
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar6 + 0x20);
      *plVar7 = lVar9;
      *(long *)(lVar6 + 0x28) = lVar2;
      thunk_FUN_03f5d7b8(plVar7,0);
    }
    else {
      FUN_05959650(lVar4,lVar9,lVar2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar5 = Lean_Touch_LeanSelectableByFinger__get_OnSelectedFinger(plVar8);
  if (lVar5 != 0) {
    FUN_0647fad4(lVar5,param_3,DAT_091be070);
    lVar5 = Lean_Touch_LeanSelectableByFinger__get_OnSelectedSelectFinger(plVar8);
    if (lVar5 != 0) {
      FUN_06481f2c(lVar5,param_1,param_3,DAT_091be1c0);
      Lean_Touch_LeanSelectableByFinger__InvokeAnySelectedFinger(param_1,plVar8,param_3);
      if (param_3 != 0) {
        if ((*(char *)(param_3 + 0x18) != '\0') || (*(char *)(param_3 + 0x19) == '\0')) {
LAB_0734e344:
          if (*(long *)(param_1 + 0x88) != 0) {
            FUN_06481f2c(*(long *)(param_1 + 0x88),param_2,param_3,DAT_091be1d8);
          }
          lVar9 = **(long **)(DAT_09187708 + 0xb8);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),param_1,param_2,param_3,
                       *(undefined8 *)(lVar9 + 0x28));
          }
          return;
        }
        lVar5 = Lean_Touch_LeanSelectableByFinger__get_OnSelectedFingerUp(plVar8);
        if (lVar5 != 0) {
          FUN_0647fad4(lVar5,param_3,DAT_091be070);
          lVar5 = Lean_Touch_LeanSelectableByFinger__get_OnSelectedSelectFingerUp(plVar8);
          if (lVar5 != 0) {
            FUN_06481f2c(lVar5,param_1,param_3,DAT_091be1c0);
            if (plVar8[0xd] != 0) {
              FUN_0595aca8(plVar8[0xd],lVar9,lVar2,DAT_091b3248);
              goto LAB_0734e344;
            }
          }
        }
      }
    }
  }
LAB_0734e3d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

