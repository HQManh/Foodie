// rea decompile_all
// name: AppLovinMax.ThirdParty.MiniJson.Json.Parser$$ParseObject
// address: 0x737c960
// body: available
// range: 0x737c960-0x737ca83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737ca80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseObject(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_095209d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    DAT_095209d4 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09176b80);
  FUN_06fd76bc(lVar3,DAT_0919fb58);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    while( true ) {
      do {
        iVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__get_NextToken(param_1);
      } while (iVar1 == 6);
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == 2) {
        return lVar3;
      }
      lVar5 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseString(param_1);
      if (lVar5 == 0) {
        return 0;
      }
      iVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__get_NextToken(param_1);
      if (iVar1 != 5) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) break;
      (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      uVar2 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__get_NextToken(param_1);
      uVar6 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseByToken(param_1,uVar2);
      if (lVar3 == 0) break;
      FUN_06fd8440(lVar3,lVar5,uVar6,DAT_0919fbc8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

