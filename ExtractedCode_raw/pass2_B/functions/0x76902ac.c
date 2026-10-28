// rea decompile_all
// name: Newtonsoft.Json.Utilities.DynamicUtils.BinderWrapper$$Init
// address: 0x76902ac
// body: available
// range: 0x76902ac-0x7690493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7690488 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769048c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7690490 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__Init(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((DAT_09522597 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091e9540);
    FUN_03f5c2a4(&DAT_09190450);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091dc130);
    FUN_03f5c2a4(&DAT_09207d88);
    DAT_09522597 = 1;
  }
  if (*(char *)(*(long *)(DAT_09190450 + 0xb8) + 0x20) == '\0') {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = FUN_03f5c7b8(DAT_09207d88,0,DAT_091dc130,DAT_091e9540);
    uVar2 = System_Type__op_Equality(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091ff6f0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09207d88);
      uVar1 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar1,uVar5,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar4 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar4,uVar1,0);
      uVar1 = thunk_FUN_03fc39d4(&DAT_091e9540);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar1);
    }
    FUN_03f5c394(DAT_091801b8,1);
    uVar1 = Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__CreateSharpArgumentInfoArray();
    **(undefined8 **)(DAT_09190450 + 0xb8) = uVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09190450 + 0xb8),uVar1);
    lVar3 = FUN_03f5c394(DAT_091801b8,2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined4 *)(lVar3 + 0x24) = 3;
    uVar1 = Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__CreateSharpArgumentInfoArray();
    puVar6 = (undefined8 *)(*(long *)(DAT_09190450 + 0xb8) + 8);
    *puVar6 = uVar1;
    thunk_FUN_03f5d7b8(puVar6,uVar1);
    Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__CreateMemberCalls();
    *(undefined1 *)(*(long *)(DAT_09190450 + 0xb8) + 0x20) = 1;
  }
  return;
}

