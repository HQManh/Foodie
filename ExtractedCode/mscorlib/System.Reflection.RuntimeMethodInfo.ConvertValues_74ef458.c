// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$ConvertValues
// address: 0x74ef458
// body: available
// range: 0x74ef458-0x74ef723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ef678 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef67c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef680 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef68c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef6f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ef720 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeMethodInfo__ConvertValues
               (undefined8 param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  if ((DAT_09521614 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521614 = 1;
  }
  if (param_2 == (long *)0x0) {
    if (param_3 == 0) goto LAB_074ef67c;
    if (*(long *)(param_3 + 0x18) != 0) goto LAB_074ef6f4;
  }
  else {
    if (param_3 == 0) {
LAB_074ef67c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar5 = (int)*(ulong *)(param_3 + 0x18);
    if (iVar5 != (int)param_2[3]) {
LAB_074ef6f4:
      thunk_FUN_03fc39d4(&DAT_0918b8c0);
      uVar2 = thunk_FUN_03f9944c();
      System_Reflection_TargetParameterCountException___ctor();
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d8170);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    if (0 < iVar5) {
      uVar10 = 0;
      uVar6 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
      plVar7 = param_2 + 4;
      do {
        if ((uVar6 <= uVar10) || (*(uint *)(param_3 + 0x18) <= uVar10)) {
LAB_074ef678:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *plVar7;
        plVar8 = *(long **)(param_3 + 0x20 + uVar10 * 8);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar9 == *(long *)(*(long *)(DAT_095354b8 + 0xb8) + 0x18)) {
          if (plVar8 == (long *)0x0) goto LAB_074ef67c;
          lVar9 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
          if (*(int *)(DAT_09183158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183158);
          }
          if (lVar9 == **(long **)(DAT_09183158 + 0xb8)) {
            uVar2 = thunk_FUN_03fc39d4(&DAT_09207fa8);
            uVar2 = System_Environment__GetResourceString(uVar2,0);
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar3 = thunk_FUN_03f9944c();
            uVar4 = thunk_FUN_03fc39d4(&DAT_09220a30);
            System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
            uVar2 = thunk_FUN_03fc39d4(&DAT_091d8170);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,uVar2);
          }
          lVar9 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
        }
        else {
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
             plVar8 == (long *)0x0)) goto LAB_074ef67c;
          if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8)
              != DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          lVar9 = System_RuntimeType__CheckValue(plVar8,lVar9,param_1,param_4,param_5,0);
        }
        if ((lVar9 != 0) &&
           (lVar1 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*param_2 + 0x40)), lVar1 == 0)) {
          uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,0);
        }
        if (*(uint *)(param_2 + 3) <= uVar10) goto LAB_074ef678;
        *plVar7 = lVar9;
        thunk_FUN_03f5d7b8(plVar7,lVar9);
        uVar6 = (ulong)*(uint *)(param_2 + 3);
        uVar10 = uVar10 + 1;
        plVar7 = plVar7 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(param_2 + 3));
    }
  }
  return;
}

