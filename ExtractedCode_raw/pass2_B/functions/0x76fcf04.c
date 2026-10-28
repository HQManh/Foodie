// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ParseQuotedField
// address: 0x76fcf04
// body: available
// range: 0x76fcf04-0x76fd2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fd0c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fd154 to 0x76fccd8 Newtonsoft.Json.Linq.JsonPath.JPath$$CreatePathFilter (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76fd204 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fd2a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Linq_JsonPath_JPath__ParseQuotedField(long param_1,short param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined2 local_54 [2];
  
  if ((DAT_0952292d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184528);
    FUN_03f5c2a4(&DAT_09187228);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_0918a618);
    FUN_03f5c2a4(&DAT_0920a610);
    DAT_0952292d = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  local_54[0] = 0;
  if (lVar7 != 0) {
    lVar9 = 0;
    do {
      if (*(int *)(lVar7 + 0x10) <= *(int *)(param_1 + 0x20)) {
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar4 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_0920a610);
        Newtonsoft_Json_JsonException___ctor(uVar4,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d1318);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar6);
      }
      uVar4 = Newtonsoft_Json_Linq_JsonPath_JPath__ReadQuotedString(param_1);
      Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
      Newtonsoft_Json_Linq_JsonPath_JPath__EnsureLength(param_1,DAT_0920a610);
      if (*(long *)(param_1 + 0x10) == 0) break;
      sVar3 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      lVar7 = DAT_091b0570;
      if (sVar3 == param_2) {
        if (lVar9 == 0) {
          if (*(int *)(DAT_09187228 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = Newtonsoft_Json_Linq_JsonPath_JPath__CreatePathFilter(uVar4,param_3 & 1);
          return lVar7;
        }
        lVar8 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
            *puVar5 = uVar4;
            thunk_FUN_03f5d7b8(puVar5,uVar4);
          }
          else {
            FUN_057e0c68(lVar9,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          if ((param_3 & 1) == 0) {
            puVar5 = &DAT_09184528;
          }
          else {
            puVar5 = &DAT_0918a618;
          }
          lVar7 = thunk_FUN_03f9944c(*puVar5);
          System_Object___ctor(lVar7,0);
          *(long *)(lVar7 + 0x10) = lVar9;
          thunk_FUN_03f5d7b8((long *)(lVar7 + 0x10),lVar9);
          return lVar7;
        }
        break;
      }
      if (*(long *)(param_1 + 0x10) == 0) break;
      sVar3 = System_String__get_Chars(*(long *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),0);
      if (sVar3 != 0x2c) {
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x20);
        FUN_039b1d98(uVar4);
        local_54[0] = System_String__get_Chars(uVar4,uVar1,0);
        FUN_039afb80(DAT_09535460);
        uVar4 = System_Char__ToString(local_54,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_09211c58);
        uVar4 = System_String__Concat(uVar6,uVar4,0);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar6 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar6,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091d1318);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar4);
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
      if (lVar9 == 0) {
        lVar9 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(lVar9,DAT_091b0558);
        if (lVar9 == 0) break;
      }
      lVar7 = DAT_091b0570;
      lVar8 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar8 == 0) break;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *puVar5 = uVar4;
        thunk_FUN_03f5d7b8(puVar5,uVar4);
      }
      else {
        FUN_057e0c68(lVar9,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *(long *)(param_1 + 0x10);
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

