// rea decompile_all
// name: System.MonoCustomAttrs$$GetBasePropertyDefinition
// address: 0x7605b64
// body: available
// range: 0x7605b64-0x7605e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7605dc0 to 0x75d132c System.Type$$GetProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7605e40 to 0x75d125c System.Type$$GetProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7605e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7605e48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7605e50 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7605e5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_MonoCustomAttrs__GetBasePropertyDefinition(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  
  if ((DAT_09521ff1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a3b8);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521ff1 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_07605e44;
  plVar1 = (long *)(**(code **)(*param_1 + 0x2e8))(param_1,1,*(undefined8 *)(*param_1 + 0x2f0));
  uVar2 = System_Reflection_MethodInfo__op_Equality(plVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar1 == (long *)0x0) goto LAB_07605e44;
    uVar2 = System_Reflection_MethodBase__get_IsVirtual(plVar1,0);
    if ((uVar2 & 1) == 0) goto LAB_07605be8;
  }
  else {
LAB_07605be8:
    plVar1 = (long *)(**(code **)(*param_1 + 0x318))(param_1,1,*(undefined8 *)(*param_1 + 800));
  }
  uVar2 = System_Reflection_MethodInfo__op_Equality(plVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar1 == (long *)0x0) {
LAB_07605e44:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = System_Reflection_MethodBase__get_IsVirtual(plVar1,0);
    if ((uVar2 & 1) != 0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) !=
          DAT_0918a3b8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar1);
      }
      plVar3 = (long *)System_Reflection_RuntimeMethodInfo__GetBaseMethod(plVar1,0);
      uVar2 = System_Reflection_MethodInfo__op_Inequality(plVar3,0,0);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = System_Reflection_MethodInfo__op_Inequality(plVar3,plVar1,0), (uVar2 & 1) != 0)) {
        lVar4 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
          if (plVar3 != (long *)0x0) {
            lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
            uVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
            uVar9 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
            if (lVar4 != 0) {
              uVar8 = System_Type__GetProperty(lVar4,uVar8,uVar9,0);
              return uVar8;
            }
          }
        }
        else {
          plVar1 = (long *)FUN_03f5c394(DAT_09180748);
          if (plVar1 != (long *)0x0) {
            if (0 < (int)plVar1[3]) {
              uVar10 = 0;
              do {
                if (*(uint *)(lVar4 + 0x18) <= uVar10) {
LAB_07605e48:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar11 = (long)(int)uVar10;
                plVar5 = *(long **)(lVar4 + lVar11 * 8 + 0x20);
                if (plVar5 == (long *)0x0) goto LAB_07605e44;
                lVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar1 + 0x40)), lVar7 == 0))
                {
                  uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar8,0);
                }
                if (*(uint *)(plVar1 + 3) <= uVar10) goto LAB_07605e48;
                plVar1[lVar11 + 4] = lVar6;
                thunk_FUN_03f5d7b8(plVar1 + lVar11 + 4,lVar6);
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)plVar1[3]);
            }
            if (plVar3 != (long *)0x0) {
              lVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
              uVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
              uVar9 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
              if (lVar4 != 0) {
                uVar8 = System_Type__GetProperty(lVar4,uVar8,uVar9,plVar1,0);
                return uVar8;
              }
            }
          }
        }
        goto LAB_07605e44;
      }
    }
  }
  return 0;
}

