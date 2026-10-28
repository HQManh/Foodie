// rea decompile_all
// name: Newtonsoft.Json.Utilities.EnumUtils$$TryToString
// address: 0x7691de0
// body: available
// range: 0x7691de0-0x7691f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7691f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7691f7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Utilities_EnumUtils__TryToString
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_095225a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0070);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091bb798);
    FUN_03f5c2a4(&DAT_091bd3b0);
    DAT_095225a2 = 1;
  }
  if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = **(long **)(DAT_091840e8 + 0xb8);
  local_50 = 0;
  uStack_48 = 0;
  FUN_061d6efc(&local_50,param_1,param_3,DAT_091bb798);
  if (lVar4 != 0) {
    lVar4 = FUN_06360fa4(lVar4,local_50,uStack_48,DAT_091bd3b0);
    uVar3 = Newtonsoft_Json_Utilities_EnumUtils__ToUInt64(param_2);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) == '\0') {
        uVar2 = FUN_04df1d50(*(undefined8 *)(lVar4 + 0x18),uVar3,DAT_091c0070);
        if ((int)uVar2 < 0) {
          *param_4 = 0;
          thunk_FUN_03f5d7b8(param_4,0);
          bVar1 = false;
        }
        else {
          lVar4 = *(long *)(lVar4 + 0x28);
          if (lVar4 == 0) goto LAB_07691f78;
          if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *param_4 = *(long *)(lVar4 + (ulong)uVar2 * 8 + 0x20);
          thunk_FUN_03f5d7b8(param_4);
          bVar1 = true;
        }
      }
      else {
        if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(lVar4,uVar3);
        *param_4 = lVar4;
        thunk_FUN_03f5d7b8(param_4,lVar4);
        bVar1 = *param_4 != 0;
      }
      return bVar1;
    }
  }
LAB_07691f78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

