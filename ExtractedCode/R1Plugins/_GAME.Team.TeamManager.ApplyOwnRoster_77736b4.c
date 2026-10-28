// rea decompile_all
// name: _GAME.Team.TeamManager$$ApplyOwnRoster
// address: 0x77736b4
// body: available
// range: 0x77736b4-0x777386f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777386c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _GAME_Team_TeamManager__ApplyOwnRoster(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_28;
  
  if ((DAT_09522cd0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522cd0 = 1;
  }
  local_28 = 0;
  if (param_1 != 0) {
    lVar6 = *(long *)(param_1 + 0x58);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar6 != 0) {
      uVar3 = FUN_06fd9fbc(lVar6,**(undefined8 **)(DAT_09180dc0 + 0xb8),&local_28,DAT_0919ffb8);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = DAT_0918b978;
        iVar1 = *(int *)(*(long *)(DAT_0918b978 + 0xb8) + 0x20) + 1;
        *(int *)(*(long *)(DAT_0918b978 + 0xb8) + 0x20) = iVar1;
        if (1 < iVar1) {
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Team_TeamManager__HandleRemovedFromTeam(uVar5);
        }
LAB_07773858:
        return uVar3 & 1;
      }
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = **(long **)(DAT_0918b978 + 0xb8);
      *(undefined4 *)(*(long **)(DAT_0918b978 + 0xb8) + 4) = 0;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 0x38);
        *plVar4 = param_1;
        thunk_FUN_03f5d7b8(plVar4,param_1);
        if (**(long **)(DAT_0918b978 + 0xb8) != 0) {
          *(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40) = local_28;
          thunk_FUN_03f5d7b8();
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          uVar2 = *(undefined4 *)(param_1 + 0x1c);
          uVar5 = *(undefined8 *)(param_1 + 0x20);
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Profile_ProfileManager__SaveTeamInfo(uVar7,uVar2,uVar5,0);
          goto LAB_07773858;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

