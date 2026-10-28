// rea decompile_all
// name: _GAME.Team.MemberChatItemUICtrl$$SetChatMessage
// address: 0x7793c60
// body: available
// range: 0x7793c60-0x7793c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_MemberChatItemUICtrl__SetChatMessage(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  if ((DAT_09522da9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0921cb20);
    DAT_09522da9 = 1;
  }
  uStack_38 = 0;
  plVar2 = param_1 + 0xb;
  *plVar2 = param_2;
  thunk_FUN_03f5d7b8(plVar2,param_2);
  if (*plVar2 != 0) {
    (**(code **)(*param_1 + 0x198))
              (param_1,*(undefined8 *)(*plVar2 + 0x18),*(undefined8 *)(*param_1 + 0x1a0));
    if (param_1[0xb] != 0) {
      lVar1 = param_1[9];
      uVar3 = *(undefined8 *)(param_1[0xb] + 0x38);
      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_38 = _GAME_Utils_HelperTime__UnixTimeMillisecondsToDateTime(uVar3,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uStack_38 = System_DateTime__ToLocalTime(&uStack_38,0);
      uVar3 = System_DateTime__ToString(&uStack_38,DAT_0921cb20,0);
      if (lVar1 != 0) {
        TMPro_TMP_Text__SetText(lVar1,uVar3,0);
        if (param_1[0xb] != 0) {
          lVar1 = param_1[10];
          uVar3 = *(undefined8 *)(param_1[0xb] + 0x30);
          if (*(int *)(DAT_09189998 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar3,0);
          if (lVar1 != 0) {
            TMPro_TMP_Text__SetText(lVar1,uVar3,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

