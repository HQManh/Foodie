// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$Read
// address: 0x765131c
// body: available
// range: 0x765131c-0x7651537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7651380 to 0x7651538 Newtonsoft.Json.JsonTextReader$$ParseValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x765139c to 0x76519e0 Newtonsoft.Json.JsonTextReader$$ParseObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76514bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76514c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76514c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_JsonTextReader__Read(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_28;
  undefined2 local_24 [2];
  
  Newtonsoft_Json_JsonTextReader__EnsureBuffer();
  while( true ) {
    uVar7 = *(uint *)(param_1 + 0x24);
    if (uVar7 != 8) break;
    uVar3 = Newtonsoft_Json_JsonTextReader__ParsePostValue(param_1,0);
    if ((uVar3 & 1) != 0) {
      uVar7 = 1;
LAB_0765142c:
      return (ulong)uVar7;
    }
  }
  if (uVar7 < 0xd) {
    uVar2 = 1 << (ulong)(uVar7 & 0x1f);
    if ((uVar2 & 0x665) != 0) {
      uVar3 = Newtonsoft_Json_JsonTextReader__ParseValue(param_1);
      return uVar3;
    }
    if ((uVar2 & 0x18) != 0) {
      uVar3 = Newtonsoft_Json_JsonTextReader__ParseObject(param_1);
      return uVar3;
    }
    if (uVar7 == 0xc) {
      if (((*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x88)) ||
          (uVar3 = Newtonsoft_Json_JsonTextReader__ReadChars(param_1,0,0), (uVar3 & 1) != 0)) &&
         (Newtonsoft_Json_JsonTextReader__EatWhitespace(param_1), *(char *)(param_1 + 0x98) == '\0')
         ) {
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(short *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x8c) * 2 + 0x20) != 0x2f) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          iVar1 = *(int *)(param_1 + 0x8c);
          FUN_039b1d98(uVar8);
          local_24[0] = FUN_03ebadd8(uVar8,(long)iVar1);
          uVar5 = FUN_03f5c42c(DAT_09535460,local_24);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091fb558);
          goto LAB_07651490;
        }
        uVar7 = 1;
        Newtonsoft_Json_JsonTextReader__ParseComment(param_1,1);
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        uVar7 = 0;
      }
      goto LAB_0765142c;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  local_28 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = thunk_FUN_03fc39d4(&DAT_09191fb8);
  uVar5 = FUN_03f5c42c(uVar8,&local_28);
  uVar8 = thunk_FUN_03fc39d4(&DAT_09211e30);
LAB_07651490:
  uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar4,uVar5,0);
  uVar8 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar8);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d1c90);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar4);
}

