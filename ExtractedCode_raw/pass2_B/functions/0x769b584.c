// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$ImplementsGenericDefinition
// address: 0x769b584
// body: available
// range: 0x769b584-0x769b80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769b790 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769b794 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769b808 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
          (long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((DAT_095225ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_09224510);
    FUN_03f5c2a4(&DAT_0921bec0);
    DAT_095225ec = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_1,DAT_09224510,0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_0921bec0,0);
  uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsInterface(param_2,0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsGenericTypeDefinition(param_2,0),
     (uVar1 & 1) == 0)) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091f7ec0);
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar2,param_2,0);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar4,uVar2,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d7198);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar2);
  }
  uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsInterface(param_1,0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsGenericType(param_1,0), (uVar1 & 1) == 0))
  {
    if (param_1 == (long *)0x0) goto LAB_0769b794;
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_0769b794;
    uVar2 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar1 = System_Type__op_Equality(param_2,uVar2,0);
    if ((uVar1 & 1) != 0) {
      *param_3 = (long)param_1;
LAB_0769b770:
      thunk_FUN_03f5d7b8(param_3,param_1);
      return 1;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x8c8))(param_1,*(undefined8 *)(*param_1 + 0x8d0));
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar1 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        param_1 = *(long **)(lVar3 + 0x20 + uVar1 * 8);
        uVar5 = Newtonsoft_Json_Utilities_TypeExtensions__IsGenericType(param_1,0);
        if ((uVar5 & 1) != 0) {
          if (param_1 == (long *)0x0) goto LAB_0769b794;
          uVar2 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar5 = System_Type__op_Equality(param_2,uVar2,0);
          if ((uVar5 & 1) != 0) {
            *param_3 = (long)param_1;
            goto LAB_0769b770;
          }
        }
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    *param_3 = 0;
    thunk_FUN_03f5d7b8(param_3,0);
    return 0;
  }
LAB_0769b794:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

