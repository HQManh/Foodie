// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetAttributes
// address: 0x769c010
// body: available
// range: 0x769c010-0x769c427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769c238 to 0x39bcaa8 FUN_039bcaa8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c2b4 to 0x75e3744 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c2f4 to 0x75e26f0 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c334 to 0x75e3500 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c374 to 0x4b049e4 FUN_04b049e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c3b4 to 0x75e2f50 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c3cc to 0x75e396c System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c3e8 to 0x75e29e0 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c404 to 0x75e33b0 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c420 to 0x75e31f8 System.Attribute$$GetCustomAttributes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769c424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetAttributes
               (long *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_095225fa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091815e8);
    FUN_03f5c2a4(&DAT_0917fbf0);
    FUN_03f5c2a4(&DAT_091c95c8);
    FUN_03f5c2a4(&DAT_091cad38);
    FUN_03f5c2a4(&DAT_09185938);
    FUN_03f5c2a4(&DAT_09187fd8);
    FUN_03f5c2a4(&DAT_09188330);
    FUN_03f5c2a4(&DAT_09188e60);
    FUN_03f5c2a4(&DAT_09217bb8);
    DAT_095225fa = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_09217bb8,0);
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    bVar1 = *(byte *)(lVar4 + 0x130);
    if ((*(byte *)(DAT_095354b8 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_095354b8 + 0x130) * 8 + -8) ==
        DAT_095354b8)) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Inequality(param_2,0,0);
      lVar4 = *param_1;
      if ((uVar2 & 1) == 0) {
        uVar3 = (**(code **)(lVar4 + 0x208))(param_1,param_3 & 1,*(undefined8 *)(lVar4 + 0x210));
      }
      else {
        uVar3 = (**(code **)(lVar4 + 0x218))
                          (param_1,param_2,param_3 & 1,*(undefined8 *)(lVar4 + 0x220));
      }
      uVar3 = FUN_04ab7e4c(uVar3,DAT_091c95c8);
      FUN_04b049e4(uVar3,DAT_091cad38);
      return;
    }
    if ((*(byte *)(DAT_091815e8 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_091815e8 + 0x130) * 8 + -8) ==
        DAT_091815e8)) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Inequality(param_2,0,0);
      if ((uVar2 & 1) != 0) {
        System_Attribute__GetCustomAttributes(param_1,param_2,0);
        return;
      }
      System_Attribute__GetCustomAttributes(param_1,0);
      return;
    }
    if ((*(byte *)(DAT_09187fd8 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09187fd8 + 0x130) * 8 + -8) ==
        DAT_09187fd8)) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Inequality(param_2,0,0);
      if ((uVar2 & 1) != 0) {
        System_Attribute__GetCustomAttributes(param_1,param_2,param_3 & 1,0);
        return;
      }
      System_Attribute__GetCustomAttributes(param_1,param_3 & 1,0);
      return;
    }
    if ((*(byte *)(DAT_09188330 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09188330 + 0x130) * 8 + -8) ==
        DAT_09188330)) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Inequality(param_2,0,0);
      if ((uVar2 & 1) != 0) {
        System_Attribute__GetCustomAttributes(param_1,param_2,param_3 & 1,0);
        return;
      }
      System_Attribute__GetCustomAttributes(param_1,param_3 & 1,0);
      return;
    }
    if ((*(byte *)(DAT_09188e60 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09188e60 + 0x130) * 8 + -8) ==
        DAT_09188e60)) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__op_Inequality(param_2,0,0);
      if ((uVar2 & 1) != 0) {
        System_Attribute__GetCustomAttributes(param_1,param_2,param_3 & 1,0);
        return;
      }
      System_Attribute__GetCustomAttributes(param_1,param_3 & 1,0);
      return;
    }
  }
  lVar4 = FUN_039bcaa8(param_1,DAT_09185938);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__op_Inequality(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    if (lVar4 == 0) goto LAB_0769c424;
    uVar3 = FUN_03ad4838(0,DAT_09185938,lVar4,param_3 & 1);
  }
  else {
    if (lVar4 == 0) {
LAB_0769c424:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = FUN_03ebb5a0(1,DAT_09185938,lVar4,param_2,param_3 & 1);
  }
  FUN_039bcaa8(uVar3,DAT_0917fbf0);
  return;
}

