// rea decompile_all
// name: _GAME.Team.TeamServer$$ParseTeamSummaryResponse
// address: 0x77841a4
// body: available
// range: 0x77841a4-0x778446f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7784464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7784468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778446c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GAME_Team_TeamServer__ParseTeamSummaryResponse(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_38;
  long *local_30;
  int local_24;
  
  if ((DAT_09522d46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091d16a8);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_0918b988);
    FUN_03f5c2a4(&DAT_0921a0d8);
    FUN_03f5c2a4(&DAT_09218cf0);
    DAT_09522d46 = 1;
  }
  local_24 = 0;
  local_38 = 0;
  local_30 = (long *)0x0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918b988);
  *(undefined4 *)(lVar2 + 0x14) = 0xffffffff;
  System_Object___ctor(lVar2,0);
  uVar3 = _GAME_Team_TeamServer__TryReadWireStatus(param_1,&local_24,&local_38);
  if ((uVar3 & 1) == 0) {
    return lVar2;
  }
  *(undefined1 *)(lVar2 + 0x10) = 1;
  *(int *)(lVar2 + 0x14) = local_24;
  if (local_24 != 0) {
    return lVar2;
  }
  lVar4 = Newtonsoft_Json_Linq_JObject__Parse(param_1,0);
  if (lVar4 != 0) {
    plVar5 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(lVar4,DAT_0921a0d8,0);
    if ((plVar5 == (long *)0x0) ||
       (iVar1 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)), iVar1 == 10
       )) {
      uVar6 = thunk_FUN_03f9944c(DAT_0918b958);
      _GAME_Team_TeamInfoModel___ctor();
      *(undefined8 *)(lVar2 + 0x18) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),uVar6);
      return lVar2;
    }
    if ((*(byte *)(DAT_09187220 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       ((*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) ==
         DAT_09187220 &&
        (uVar3 = Newtonsoft_Json_Linq_JObject__TryGetValue(plVar5,DAT_09218cf0,&local_30,0),
        (uVar3 & 1) != 0)))) {
      if ((local_30 == (long *)0x0) ||
         (iVar1 = (**(code **)(*local_30 + 0x228))(local_30,*(undefined8 *)(*local_30 + 0x230)),
         iVar1 == 10)) {
        uVar6 = thunk_FUN_03f9944c(DAT_0918b958);
        _GAME_Team_TeamInfoModel___ctor();
        *(undefined8 *)(lVar2 + 0x18) = uVar6;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),uVar6);
        return lVar2;
      }
      if (local_30 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = (**(code **)(*local_30 + 0x228))(local_30,*(undefined8 *)(*local_30 + 0x230));
      if (iVar1 == 1) {
        if (*(int *)(DAT_09187300 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = FUN_04bd15a4(param_1,DAT_091d16a8);
        if (((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0x18), lVar4 != 0)) {
          lVar7 = thunk_FUN_03f9944c(DAT_0918b958);
          _GAME_Team_TeamInfoModel___ctor(lVar7,lVar4);
          plVar5 = (long *)(lVar2 + 0x18);
          *plVar5 = lVar7;
          thunk_FUN_03f5d7b8(plVar5,lVar7);
          if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (0 < *(long *)(*plVar5 + 0x10)) {
            return lVar2;
          }
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined4 *)(lVar2 + 0x14) = 0xfffffffe;
          thunk_FUN_03f5d7b8(plVar5,0);
          return lVar2;
        }
      }
    }
    *(undefined4 *)(lVar2 + 0x14) = 0xfffffffe;
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

