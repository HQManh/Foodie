// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetDictionaryKeyValueTypes
// address: 0x769bcd4
// body: available
// range: 0x769bcd4-0x769bf03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769be88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769befc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769bf00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_ReflectionUtils__GetDictionaryKeyValueTypes
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_38;
  
  if ((DAT_095225f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_0921a700);
    DAT_095225f0 = 1;
  }
  local_38 = (long *)0x0;
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_0921a700,0);
  uVar1 = DAT_09171ba8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189d88);
  }
  uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                    (param_1,uVar1,&local_38);
  uVar1 = DAT_09171b90;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
    if (plVar4 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x2c0));
      if ((uVar2 & 1) != 0) {
        *param_2 = 0;
        thunk_FUN_03f5d7b8(param_2,0);
        uVar1 = 0;
LAB_0769be68:
        *param_3 = uVar1;
        thunk_FUN_03f5d7b8(param_3);
        return;
      }
      goto LAB_0769be8c;
    }
  }
  else {
    uVar2 = Newtonsoft_Json_Utilities_TypeExtensions__IsGenericTypeDefinition(local_38,0);
    if ((uVar2 & 1) != 0) {
LAB_0769be8c:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09211320);
      uVar1 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar1,param_1,0);
      thunk_FUN_03fc39d4(&DAT_091842a0);
      uVar5 = thunk_FUN_03f9944c();
      System_Exception___ctor(uVar5,uVar1,0);
      uVar1 = thunk_FUN_03fc39d4(&DAT_091d7178);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar1);
    }
    if (local_38 != (long *)0x0) {
      lVar3 = (**(code **)(*local_38 + 0x488))(local_38,*(undefined8 *)(*local_38 + 0x490));
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *param_2 = *(undefined8 *)(lVar3 + 0x20);
          thunk_FUN_03f5d7b8(param_2);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
            uVar1 = *(undefined8 *)(lVar3 + 0x28);
            goto LAB_0769be68;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

