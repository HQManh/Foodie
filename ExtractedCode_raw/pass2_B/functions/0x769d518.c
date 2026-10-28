// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetProperties
// address: 0x769d518
// body: available
// range: 0x769d518-0x769d80f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769d800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d808 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d80c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Utilities_ReflectionUtils__GetProperties(long *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  
  if ((DAT_09522600 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af3f0);
    FUN_03f5c2a4(&DAT_091af3e8);
    FUN_03f5c2a4(&DAT_091af3f8);
    FUN_03f5c2a4(&DAT_091af400);
    FUN_03f5c2a4(&DAT_091af408);
    FUN_03f5c2a4(&DAT_0917c9b8);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09223c28);
    DAT_09522600 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_09223c28,0);
  if (param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x868))(param_1,param_2,*(undefined8 *)(*param_1 + 0x870));
    lVar3 = thunk_FUN_03f9944c(DAT_0917c9b8);
    FUN_057e053c(lVar3,uVar2,DAT_091af3e8);
    uVar4 = Newtonsoft_Json_Utilities_TypeExtensions__IsInterface(param_1,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = (**(code **)(*param_1 + 0x8c8))(param_1,*(undefined8 *)(*param_1 + 0x8d0));
      if (lVar5 == 0) goto LAB_0769d800;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        lVar8 = 0;
        do {
          if (uVar1 <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar6 = *(long **)(lVar5 + 0x20 + lVar8 * 8);
          if (plVar6 == (long *)0x0) goto LAB_0769d800;
          uVar2 = (**(code **)(*plVar6 + 0x868))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x870));
          if (lVar3 == 0) goto LAB_0769d800;
          FUN_057e0e78(lVar3,uVar2,DAT_091af3f0);
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < (int)uVar1);
      }
    }
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Utilities_ReflectionUtils__GetChildPrivateProperties(lVar3,param_1,param_2);
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar7 = 0;
        do {
          plVar6 = (long *)FUN_057e0998(lVar3,iVar7,DAT_091af400);
          if (plVar6 == (long *)0x0) goto LAB_0769d800;
          uVar2 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar4 = System_Type__op_Inequality(uVar2,param_1,0);
          if ((uVar4 & 1) != 0) {
            uVar2 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
            if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189d88);
            }
            plVar6 = (long *)Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberInfoFromType
                                       (uVar2,plVar6);
            if (plVar6 != (long *)0x0) {
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 +
                           -8) != DAT_09189788)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar6);
              }
            }
            FUN_057e09ec(lVar3,iVar7,plVar6,DAT_091af408);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar3 + 0x18));
      }
      return lVar3;
    }
  }
LAB_0769d800:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

