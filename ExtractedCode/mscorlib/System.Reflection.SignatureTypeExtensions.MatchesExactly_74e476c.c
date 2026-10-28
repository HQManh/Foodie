// rea decompile_all
// name: System.Reflection.SignatureTypeExtensions$$MatchesExactly
// address: 0x74e476c
// body: available
// range: 0x74e476c-0x74e4b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e4b08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e4b0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

bool System_Reflection_SignatureTypeExtensions__MatchesExactly(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
LAB_074e479c:
  if ((DAT_095215b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ac00);
    DAT_095215b4 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_074e4b08;
  uVar3 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0x408))(param_1,*(undefined8 *)(*param_1 + 0x410));
    if ((uVar3 & 1) != 0) {
      if (param_2 == (long *)0x0) goto LAB_074e4b08;
      uVar3 = (**(code **)(*param_2 + 0x408))(param_2,*(undefined8 *)(*param_2 + 0x410));
      if ((uVar3 & 1) == 0) {
        return false;
      }
      iVar1 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
      iVar2 = (**(code **)(*param_2 + 0x458))(param_2,*(undefined8 *)(*param_2 + 0x460));
      if (iVar1 != iVar2) {
        return false;
      }
      goto LAB_074e48a4;
    }
    uVar3 = System_Type__get_IsByRef(param_1,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = System_Type__get_IsPointer(param_1,0);
      if ((uVar3 & 1) != 0) {
        if (param_2 == (long *)0x0) goto LAB_074e4b08;
        uVar3 = System_Type__get_IsPointer(param_2,0);
        goto joined_r0x074e4878;
      }
      uVar3 = (**(code **)(*param_1 + 0x3a8))(param_1,*(undefined8 *)(*param_1 + 0x3b0));
      if ((uVar3 & 1) == 0) {
        uVar3 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
        if ((uVar3 & 1) == 0) {
          return false;
        }
        if (param_2 != (long *)0x0) {
          uVar3 = (**(code **)(*param_2 + 0x3c8))(param_2,*(undefined8 *)(*param_2 + 0x3d0));
          if ((uVar3 & 1) == 0) {
            return false;
          }
          iVar1 = (**(code **)(*param_1 + 0x498))(param_1,*(undefined8 *)(*param_1 + 0x4a0));
          iVar2 = (**(code **)(*param_2 + 0x498))(param_2,*(undefined8 *)(*param_2 + 0x4a0));
          return iVar1 == iVar2;
        }
      }
      else if (param_2 != (long *)0x0) {
        uVar3 = (**(code **)(*param_2 + 0x3a8))(param_2,*(undefined8 *)(*param_2 + 0x3b0));
        if ((uVar3 & 1) == 0) {
          return false;
        }
        uVar4 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
        uVar5 = (**(code **)(*param_2 + 0x468))(param_2,*(undefined8 *)(*param_2 + 0x470));
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar3 = System_Type__op_Equality(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) {
          return false;
        }
        lVar6 = (**(code **)(*param_1 + 0x478))(param_1,*(undefined8 *)(*param_1 + 0x480));
        lVar7 = (**(code **)(*param_2 + 0x478))(param_2,*(undefined8 *)(*param_2 + 0x480));
        if ((lVar6 != 0) && (lVar7 != 0)) {
          uVar3 = *(ulong *)(lVar6 + 0x18);
          iVar1 = (int)uVar3;
          if (iVar1 != *(int *)(lVar7 + 0x18)) {
            return false;
          }
          if (iVar1 < 1) {
            return true;
          }
          uVar11 = 0;
          lVar9 = lVar7;
          goto LAB_074e49cc;
        }
      }
LAB_074e4b08:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (param_2 == (long *)0x0) goto LAB_074e4b08;
    uVar3 = System_Type__get_IsByRef(param_2,0);
  }
  else {
    if (param_2 == (long *)0x0) goto LAB_074e4b08;
    uVar3 = (**(code **)(*param_2 + 0x3f8))(param_2,*(undefined8 *)(*param_2 + 0x400));
  }
joined_r0x074e4878:
  if ((uVar3 & 1) == 0) {
    return false;
  }
LAB_074e48a4:
  param_1 = (long *)(**(code **)(*param_1 + 0x9b8))(param_1,*(undefined8 *)(*param_1 + 0x9c0));
  param_2 = (long *)(**(code **)(*param_2 + 0x448))(param_2,*(undefined8 *)(*param_2 + 0x450));
  goto LAB_074e479c;
LAB_074e49cc:
  if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_074e4b0c;
  plVar10 = *(long **)(lVar6 + 0x20 + uVar11 * 8);
  if (plVar10 == (long *)0x0) {
LAB_074e4a0c:
    if (*(uint *)(lVar7 + 0x18) <= uVar11) {
LAB_074e4b0c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558(lVar9);
    }
    uVar4 = *(undefined8 *)(lVar7 + 0x20 + uVar11 * 8);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Type__op_Inequality(plVar10,uVar4,0);
    if ((uVar8 & 1) != 0) {
      return false;
    }
  }
  else {
    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_0918ac00 + 0x130)) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(DAT_0918ac00 + 0x130) * 8 + -8) !=
        DAT_0918ac00)) goto LAB_074e4a0c;
    if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_074e4b0c;
    uVar8 = System_Reflection_SignatureTypeExtensions__MatchesExactly
                      (plVar10,*(undefined8 *)(lVar7 + 0x20 + uVar11 * 8));
    if ((uVar8 & 1) == 0) {
      return false;
    }
  }
  uVar11 = uVar11 + 1;
  lVar9 = 1;
  if ((uVar3 & 0xffffffff) == uVar11) {
    return true;
  }
  goto LAB_074e49cc;
}

