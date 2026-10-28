// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetDataMemberAttribute
// address: 0x76c4138
// body: available
// range: 0x76c4138-0x76c43bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c41e4 to 0x6c53678 FUN_06c53678 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c43b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c43b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c43bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_JsonTypeReflector__GetDataMemberAttribute(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_095226f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919adf0);
    FUN_03f5c2a4(&DAT_091757d8);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_095226f3 = 1;
  }
  iVar1 = Newtonsoft_Json_Utilities_TypeExtensions__MemberType(param_1,0);
  if (iVar1 == 4) {
    if (*(int *)(DAT_091757d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_06c53678(param_1,DAT_0919adf0);
    return lVar2;
  }
  if (param_1 != (long *)0x0) {
    if ((*(byte *)(*param_1 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
        DAT_09189788)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_1);
    }
  }
  if (*(int *)(DAT_091757d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_06c53678(param_1,DAT_0919adf0);
  if (lVar2 == 0) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsVirtual(param_1,0);
    lVar2 = 0;
    if ((uVar3 & 1) != 0) {
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      do {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__op_Inequality(uVar4,0,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar5 = (long *)Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberInfoFromType
                                   (uVar4,param_1,0);
        if (plVar5 != (long *)0x0) {
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8)
              != DAT_09189788)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar5);
          }
        }
        uVar3 = System_Reflection_PropertyInfo__op_Inequality(plVar5,0,0);
        lVar2 = 0;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsVirtual(plVar5,0);
          lVar2 = 0;
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_091757d8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar2 = FUN_06c53678(plVar5,DAT_0919adf0);
          }
        }
        uVar4 = Newtonsoft_Json_Utilities_TypeExtensions__BaseType(uVar4,0);
      } while (lVar2 == 0);
    }
  }
  return lVar2;
}

