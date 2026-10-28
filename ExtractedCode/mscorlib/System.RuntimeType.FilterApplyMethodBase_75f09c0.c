// rea decompile_all
// name: System.RuntimeType$$FilterApplyMethodBase
// address: 0x75f09c0
// body: available
// range: 0x75f09c0-0x75f0bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f0bac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f0bb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_RuntimeType__FilterApplyMethodBase
          (long *param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  
  if ((DAT_09521f38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091726e0);
    DAT_09521f38 = 1;
  }
  if (param_5 == 0) {
    return 1;
  }
  if ((param_1 == (long *)0x0) ||
     (lVar3 = (**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0)), lVar3 == 0
     )) {
LAB_075f0bb0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (uint)*(ulong *)(lVar3 + 0x18);
  uVar9 = (uint)*(ulong *)(param_5 + 0x18);
  uVar7 = *(ulong *)(param_5 + 0x18) & 0xffffffff;
  if (uVar9 != uVar2) {
    if ((param_3 & 0x3300) != 0) {
      if ((int)uVar2 < (int)uVar9) {
        uVar2 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
        if ((uVar2 >> 1 & 1) != 0) {
          return 1;
        }
      }
      else if ((param_3 >> 0x12 & 1) != 0) {
        if (uVar2 <= uVar9) goto LAB_075f0bac;
        lVar4 = *(long *)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_075f0bb0;
        uVar7 = System_Reflection_ParameterInfo__get_IsOptional(lVar4,0);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        iVar6 = (int)*(long *)(lVar3 + 0x18);
        iVar1 = iVar6 + -1;
        if (iVar1 <= *(int *)(param_5 + 0x18)) {
          if (iVar6 == 0) goto LAB_075f0bac;
          plVar10 = *(long **)(lVar3 + (long)iVar1 * 8 + 0x20);
          if ((plVar10 == (long *)0x0) ||
             (lVar3 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
             lVar3 == 0)) goto LAB_075f0bb0;
          uVar7 = System_Type__get_IsArray(lVar3,0);
          uVar5 = DAT_091726e0;
          if ((uVar7 & 1) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
            uVar7 = (**(code **)(*plVar10 + 0x228))
                              (plVar10,uVar5,0,*(undefined8 *)(*plVar10 + 0x230));
            if ((uVar7 & 1) != 0) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
    return 0;
  }
  if ((param_3 & 0x10100) != 0x10000) {
    return 1;
  }
  if ((int)uVar9 < 1) {
    return 1;
  }
  uVar11 = 0;
  uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
  while (uVar11 < *(uint *)(param_5 + 0x18)) {
    lVar4 = *(long *)(param_5 + 0x20 + uVar11 * 8);
    if (lVar4 != 0) {
      if (uVar7 <= uVar11) break;
      uVar7 = System_Reflection_SignatureTypeExtensions__MatchesParameterTypeExactly
                        (lVar4,*(undefined8 *)(lVar3 + 0x20 + uVar11 * 8),0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
    }
    uVar7 = uVar8;
    uVar11 = uVar11 + 1;
    uVar8 = uVar7;
    if ((long)(int)uVar7 <= (long)uVar11) {
      return 1;
    }
  }
LAB_075f0bac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

