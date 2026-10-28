// rea decompile_all
// name: _GAME.Team.TeamServer$$TryReadWireStatus
// address: 0x7783e70
// body: available
// range: 0x7783e70-0x7784053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7784050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_GAME_Team_TeamServer__TryReadWireStatus(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_48 [2];
  undefined4 local_38;
  
  if ((DAT_09522d44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc070);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_0921a0d8);
    FUN_03f5c2a4(&DAT_092236e8);
    DAT_09522d44 = 1;
  }
  local_38 = 0;
  *param_2 = 0xffffffff;
  *param_3 = 0;
  uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(param_1,0);
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    lVar5 = Newtonsoft_Json_Linq_JObject__Parse(param_1,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar6 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(lVar5,DAT_092236e8,0);
    uVar4 = 0;
    if (plVar6 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
      if (iVar1 == 6) {
        uVar4 = Newtonsoft_Json_Linq_JObject__get_Item(lVar5,DAT_092236e8,0);
        uVar2 = FUN_04b28be0(uVar4,DAT_091cc070);
        *param_2 = uVar2;
        plVar6 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(lVar5,DAT_0921a0d8,0);
        if (plVar6 != (long *)0x0) {
          if (((*(byte *)(DAT_09187220 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
              (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8)
               == DAT_09187220)) &&
             (plVar7 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(plVar6,DAT_092236e8,0),
             plVar7 != (long *)0x0)) {
            iVar1 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
            if (iVar1 == 6) {
              uVar4 = Newtonsoft_Json_Linq_JObject__get_Item(plVar6,DAT_092236e8,0);
              uVar2 = FUN_04b28be0(uVar4,DAT_091cc070);
              local_48[0] = 0;
              FUN_05c3078c(local_48,uVar2,DAT_091b6f98);
              *param_3 = local_48[0];
            }
          }
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

