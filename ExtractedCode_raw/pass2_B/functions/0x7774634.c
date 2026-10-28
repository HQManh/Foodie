// rea decompile_all
// name: _GAME.Team.TeamManager$$ShowToastErrorCode
// address: 0x7774634
// body: available
// range: 0x7774634-0x7774a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7774a38 to 0x774d01c _GAME.GameUI.ToastController$$ShowLocalizeMessage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager__ShowToastErrorCode(int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09522ce1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_09217780);
    FUN_03f5c2a4(&DAT_092087b8);
    FUN_03f5c2a4(&DAT_09217760);
    FUN_03f5c2a4(&DAT_09217748);
    FUN_03f5c2a4(&DAT_09217768);
    FUN_03f5c2a4(&DAT_09217788);
    FUN_03f5c2a4(&DAT_09217770);
    FUN_03f5c2a4(&DAT_09217790);
    FUN_03f5c2a4(&DAT_09213168);
    FUN_03f5c2a4(&DAT_09217758);
    FUN_03f5c2a4(&DAT_09217778);
    FUN_03f5c2a4(&DAT_09217750);
    DAT_09522ce1 = 1;
  }
  if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = DAT_091ba4f0;
  lVar1 = *(long *)(DAT_091ba4f0 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  lVar2 = DAT_091c0310;
  if ((param_1 == 0) || ((uVar3 & 1) != 0)) {
    return;
  }
  if (param_1 < 5) {
    if (1 < param_1) {
      if (param_1 == 2) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217780;
        goto LAB_07774a28;
      }
      if (param_1 == 3) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217790;
        goto LAB_07774a28;
      }
      if (param_1 == 4) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217788;
        goto LAB_07774a28;
      }
      goto LAB_077749cc;
    }
    if (param_1 == -100) {
      lVar1 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar1 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar1 = *(long *)(lVar2 + 0x38);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      puVar4 = &DAT_09213168;
      goto LAB_07774a28;
    }
    if (param_1 != -1) {
      if (param_1 == 1) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217778;
        goto LAB_07774a28;
      }
      goto LAB_077749cc;
    }
    uVar5 = FUN_03eabcb4(DAT_091c0310);
  }
  else {
    if (param_1 < 8) {
      if (param_1 == 5) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217768;
        goto LAB_07774a28;
      }
      if (param_1 == 6) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217770;
        goto LAB_07774a28;
      }
      if (param_1 == 7) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217748;
        goto LAB_07774a28;
      }
    }
    else {
      if (param_1 == 8) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217760;
        goto LAB_07774a28;
      }
      if (param_1 == 9) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217758;
        goto LAB_07774a28;
      }
      if (param_1 == 10) {
        uVar5 = FUN_03eabcb4(DAT_091c0310);
        puVar4 = &DAT_09217750;
        goto LAB_07774a28;
      }
    }
LAB_077749cc:
    lVar1 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar1 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar1 = *(long *)(lVar2 + 0x38);
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
  }
  puVar4 = &DAT_092087b8;
LAB_07774a28:
  _GAME_GameUI_ToastController__ShowLocalizeMessage(*puVar4,uVar5,0);
  return;
}

