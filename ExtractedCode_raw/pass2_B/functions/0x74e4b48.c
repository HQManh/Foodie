// rea decompile_all
// name: System.Reflection.SignatureTypeExtensions$$TryResolve
// address: 0x74e4b48
// body: available
// range: 0x74e4b48-0x74e4f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e4be8 to 0x74e4f24 System.Reflection.SignatureTypeExtensions$$TryMakeArrayType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e4c58 to 0x74e4fc0 System.Reflection.SignatureTypeExtensions$$TryMakeArrayType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e4ca4 to 0x74e505c System.Reflection.SignatureTypeExtensions$$TryMakeByRefType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e4cf0 to 0x74e50f8 System.Reflection.SignatureTypeExtensions$$TryMakePointerType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e4eec to 0x74e5194 System.Reflection.SignatureTypeExtensions$$TryMakeGenericType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e4f10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e4f14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e4f20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_SignatureTypeExtensions__TryResolve(long *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  if ((DAT_095215b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ac00);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_095215b5 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_074e4f10;
  uVar3 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
  lVar9 = *param_1;
  if ((uVar3 & 1) == 0) {
    uVar3 = (**(code **)(lVar9 + 0x408))(param_1,*(undefined8 *)(lVar9 + 0x410));
    if ((uVar3 & 1) == 0) {
      uVar3 = System_Type__get_IsByRef(param_1,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_Type__get_IsPointer(param_1,0);
        lVar9 = *param_1;
        if ((uVar3 & 1) == 0) {
          uVar3 = (**(code **)(lVar9 + 0x3a8))(param_1,*(undefined8 *)(lVar9 + 0x3b0));
          lVar9 = *param_1;
          if ((uVar3 & 1) != 0) {
            lVar9 = (**(code **)(lVar9 + 0x478))(param_1,*(undefined8 *)(lVar9 + 0x480));
            if (lVar9 != 0) {
              uVar3 = *(ulong *)(lVar9 + 0x18);
              plVar5 = (long *)FUN_03f5c394(DAT_09180748,uVar3 & 0xffffffff);
              if (0 < (int)uVar3) {
                uVar11 = 0;
                lVar12 = 0x20;
                do {
                  if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_074e4f14;
                  plVar10 = *(long **)(lVar9 + lVar12);
                  if (plVar10 == (long *)0x0) {
                    if (plVar5 == (long *)0x0) goto LAB_074e4f10;
LAB_074e4dc4:
                    if (*(uint *)(plVar5 + 3) <= uVar11) goto LAB_074e4f14;
                    *(long **)((long)plVar5 + lVar12) = plVar10;
                    thunk_FUN_03f5d7b8((long)plVar5 + lVar12,plVar10);
                  }
                  else {
                    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_0918ac00 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar10 + 200) +
                                  (ulong)*(byte *)(DAT_0918ac00 + 0x130) * 8 + -8) != DAT_0918ac00))
                    {
                      if (plVar5 != (long *)0x0) {
                        lVar6 = thunk_FUN_03f99350(plVar10,*(undefined8 *)(*plVar5 + 0x40));
                        if (lVar6 == 0) goto LAB_074e4f18;
                        goto LAB_074e4dc4;
                      }
                      goto LAB_074e4f10;
                    }
                    lVar6 = System_Reflection_SignatureTypeExtensions__TryResolve(plVar10,param_2);
                    if (plVar5 == (long *)0x0) goto LAB_074e4f10;
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar7 == 0)) {
LAB_074e4f18:
                      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c414(uVar4,0);
                    }
                    if (*(uint *)(plVar5 + 3) <= uVar11) goto LAB_074e4f14;
                    *(long *)((long)plVar5 + lVar12) = lVar6;
                    thunk_FUN_03f5d7b8((long)plVar5 + lVar12,lVar6);
                    if (*(uint *)(plVar5 + 3) <= uVar11) goto LAB_074e4f14;
                    uVar4 = *(undefined8 *)((long)plVar5 + lVar12);
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar8 = System_Type__op_Equality(uVar4,0,0);
                    if ((uVar8 & 1) != 0) {
                      return 0;
                    }
                  }
                  uVar11 = uVar11 + 1;
                  lVar12 = lVar12 + 8;
                } while ((uVar3 & 0xffffffff) != uVar11);
              }
              uVar4 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
              uVar4 = System_Reflection_SignatureTypeExtensions__TryMakeGenericType(uVar4,plVar5);
              return uVar4;
            }
LAB_074e4f10:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = (**(code **)(lVar9 + 0x3c8))(param_1,*(undefined8 *)(lVar9 + 0x3d0));
          if ((uVar3 & 1) != 0) {
            uVar2 = (**(code **)(*param_1 + 0x498))(param_1,*(undefined8 *)(*param_1 + 0x4a0));
            if (param_2 == 0) goto LAB_074e4f10;
            if ((int)uVar2 < (int)*(uint *)(param_2 + 0x18)) {
              if (uVar2 < *(uint *)(param_2 + 0x18)) {
                return *(undefined8 *)(param_2 + (long)(int)uVar2 * 8 + 0x20);
              }
LAB_074e4f14:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
        }
        else {
          uVar4 = (**(code **)(lVar9 + 0x9b8))(param_1,*(undefined8 *)(lVar9 + 0x9c0));
          lVar9 = System_Reflection_SignatureTypeExtensions__TryResolve(uVar4,param_2);
          if (lVar9 != 0) {
            uVar4 = System_Reflection_SignatureTypeExtensions__TryMakePointerType();
            return uVar4;
          }
        }
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x9b8))(param_1,*(undefined8 *)(*param_1 + 0x9c0));
        lVar9 = System_Reflection_SignatureTypeExtensions__TryResolve(uVar4,param_2);
        if (lVar9 != 0) {
          uVar4 = System_Reflection_SignatureTypeExtensions__TryMakeByRefType();
          return uVar4;
        }
      }
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x9b8))(param_1,*(undefined8 *)(*param_1 + 0x9c0));
      lVar9 = System_Reflection_SignatureTypeExtensions__TryResolve(uVar4,param_2);
      if (lVar9 != 0) {
        uVar1 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
        uVar4 = System_Reflection_SignatureTypeExtensions__TryMakeArrayType(lVar9,uVar1);
        return uVar4;
      }
    }
  }
  else {
    uVar4 = (**(code **)(lVar9 + 0x9b8))(param_1,*(undefined8 *)(lVar9 + 0x9c0));
    lVar9 = System_Reflection_SignatureTypeExtensions__TryResolve(uVar4,param_2);
    if (lVar9 != 0) {
      uVar4 = System_Reflection_SignatureTypeExtensions__TryMakeArrayType();
      return uVar4;
    }
  }
  return 0;
}

