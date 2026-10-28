// rea decompile_all
// name: _GAME.Team.MemberLifeReqUICtrl$$SetLifeRequest
// address: 0x7792658
// body: available
// range: 0x7792658-0x77928c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77928c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_MemberLifeReqUICtrl__SetLifeRequest(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_38;
  
  if ((DAT_09522dad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092265c0);
    FUN_03f5c2a4(&DAT_0921cb20);
    DAT_09522dad = 1;
  }
  local_38 = 0;
  plVar4 = param_1 + 0xd;
  *plVar4 = param_2;
  thunk_FUN_03f5d7b8(plVar4,param_2);
  if (*plVar4 != 0) {
    (**(code **)(*param_1 + 0x198))
              (param_1,*(undefined8 *)(*plVar4 + 0x18),*(undefined8 *)(*param_1 + 0x1a0));
    if (param_1[0xd] != 0) {
      lVar5 = param_1[9];
      uVar6 = *(undefined8 *)(param_1[0xd] + 0x30);
      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_38 = _GAME_Utils_HelperTime__UnixTimeMillisecondsToDateTime(uVar6,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      local_38 = System_DateTime__ToLocalTime(&local_38,0);
      uVar6 = System_DateTime__ToString(&local_38,DAT_0921cb20,0);
      if (lVar5 != 0) {
        TMPro_TMP_Text__SetText(lVar5,uVar6,0);
        lVar5 = param_1[10];
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lVar5,0,0);
        if ((uVar1 & 1) != 0) {
          lVar5 = param_1[0xd];
          if ((lVar5 == 0) || (plVar2 = (long *)param_1[10], plVar2 == (long *)0x0))
          goto LAB_077928c0;
          (**(code **)(*plVar2 + 0x428))
                    ((float)*(int *)(lVar5 + 0x20) / (float)*(int *)(lVar5 + 0x24),plVar2,
                     *(undefined8 *)(*plVar2 + 0x430));
        }
        lVar5 = param_1[0xb];
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Inequality(lVar5,0,0);
        if ((uVar1 & 1) != 0) {
          if (param_1[0xd] == 0) goto LAB_077928c0;
          local_44 = *(undefined4 *)(param_1[0xd] + 0x20);
          lVar5 = param_1[0xb];
          uVar6 = FUN_03f5c42c(DAT_09535420,&local_44);
          if (*plVar4 == 0) goto LAB_077928c0;
          local_48 = *(undefined4 *)(*plVar4 + 0x24);
          uVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
          uVar6 = System_String__Format(DAT_092265c0,uVar6,uVar3,0);
          if (lVar5 == 0) goto LAB_077928c0;
          TMPro_TMP_Text__SetText(lVar5,uVar6,0);
        }
        if ((param_1[0xd] != 0) && (param_1[0xc] != 0)) {
          UnityEngine_UI_Selectable__set_interactable
                    (param_1[0xc],*(undefined1 *)(param_1[0xd] + 0x28),0);
          return;
        }
      }
    }
  }
LAB_077928c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

