// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseProperty
// address: 0x7654874
// body: available
// range: 0x7654874-0x7654a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7654994 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7654998 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7654a98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonTextReader__ParseProperty(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  undefined8 uVar11;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 == 0) goto LAB_07654994;
  uVar1 = *(uint *)(param_1 + 0x8c);
  if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_07654998;
  sVar10 = *(short *)(lVar8 + (long)(int)uVar1 * 2 + 0x20);
  if ((sVar10 == 0x27) || (sVar10 == 0x22)) {
    *(uint *)(param_1 + 0x8c) = uVar1 + 1;
    Newtonsoft_Json_JsonTextReader__ShiftBufferIfNeeded(param_1);
    Newtonsoft_Json_JsonTextReader__ReadStringIntoBuffer(param_1,sVar10);
  }
  else {
    uVar3 = Newtonsoft_Json_JsonTextReader__ValidIdentifierChar(param_1,sVar10);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar11 = *(undefined8 *)(param_1 + 0x80);
      iVar2 = *(int *)(param_1 + 0x8c);
      FUN_039b1d98(uVar11);
      local_24[0] = FUN_03ebadd8(uVar11,(long)iVar2);
      uVar11 = FUN_03f5c42c(DAT_09535460,local_24);
      puVar6 = &DAT_092059e8;
      goto LAB_07654a60;
    }
    Newtonsoft_Json_JsonTextReader__ShiftBufferIfNeeded(param_1);
    Newtonsoft_Json_JsonTextReader__ParseUnquotedProperty(param_1);
    sVar10 = 0;
  }
  plVar4 = *(long **)(param_1 + 200);
  if (plVar4 == (long *)0x0) {
LAB_07654918:
    lVar8 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
  }
  else {
    lVar8 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8),
                       *(undefined4 *)(param_1 + 0xbc),*(undefined8 *)(*plVar4 + 0x180));
    if (lVar8 == 0) goto LAB_07654918;
  }
  Newtonsoft_Json_JsonTextReader__EatWhitespace(param_1);
  lVar9 = *(long *)(param_1 + 0x80);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(param_1 + 0x8c);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      if (*(short *)(lVar9 + (long)(int)uVar1 * 2 + 0x20) == 0x3a) {
        *(uint *)(param_1 + 0x8c) = uVar1 + 1;
        Newtonsoft_Json_JsonReader__SetToken(param_1,4,lVar8,1);
        *(short *)(param_1 + 0x20) = sVar10;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        return 1;
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar11 = *(undefined8 *)(param_1 + 0x80);
      iVar2 = *(int *)(param_1 + 0x8c);
      FUN_039b1d98(uVar11);
      local_28[0] = FUN_03ebadd8(uVar11,(long)iVar2);
      uVar11 = FUN_03f5c42c(DAT_09535460,local_28);
      puVar6 = &DAT_09205650;
LAB_07654a60:
      uVar7 = thunk_FUN_03fc39d4(puVar6);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar11,0);
      uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091d1c58);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar11);
    }
LAB_07654998:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07654994:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

