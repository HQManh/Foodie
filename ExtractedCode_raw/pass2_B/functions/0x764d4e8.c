// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$DoReadAsync
// address: 0x764d4e8
// body: available
// range: 0x764d4e8-0x764d6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764d600 to 0x764d750 Newtonsoft.Json.JsonTextReader$$ParseValueAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x764d624 to 0x764d874 Newtonsoft.Json.JsonTextReader$$ParseObjectAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x764d648 to 0x764dc08 Newtonsoft.Json.JsonTextReader$$ReadFromFinishedAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x764d668 to 0x764dacc Newtonsoft.Json.JsonTextReader$$DoReadAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x764d6e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x764d6ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonTextReader__DoReadAsync(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_34;
  
  if ((DAT_0952237c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_091bcbb8);
    DAT_0952237c = 1;
  }
  Newtonsoft_Json_JsonTextReader__EnsureBuffer(param_1);
  do {
    uVar1 = *(uint *)(param_1 + 0x24);
    if (uVar1 != 8) {
      if (uVar1 < 0xd) {
        uVar2 = 1 << (ulong)(uVar1 & 0x1f);
        if ((uVar2 & 0x665) != 0) {
          uVar5 = Newtonsoft_Json_JsonTextReader__ParseValueAsync(param_1,param_2);
          return uVar5;
        }
        if ((uVar2 & 0x18) != 0) {
          uVar5 = Newtonsoft_Json_JsonTextReader__ParseObjectAsync(param_1,param_2);
          return uVar5;
        }
        if (uVar1 == 0xc) {
          uVar5 = Newtonsoft_Json_JsonTextReader__ReadFromFinishedAsync(param_1,param_2);
          return uVar5;
        }
      }
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      local_34 = *(undefined4 *)(param_1 + 0x24);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09191fb8);
      uVar6 = FUN_03f5c42c(uVar6,&local_34);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211e30);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
      uVar5 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar5);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d1bf0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
    lVar3 = Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(param_1,0,param_2);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091817a0);
    }
    uVar4 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(lVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = Newtonsoft_Json_JsonTextReader__DoReadAsync(param_1,lVar3,param_2);
      return uVar5;
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_062e7fe4(lVar3,DAT_091bcbb8);
  } while ((uVar4 & 1) == 0);
  if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined8 *)(*(long *)(DAT_091817a0 + 0xb8) + 8);
}

