// rea decompile_all
// name: _GAME.Team.TeamManager.<FetchListTeamRandom>d__25$$MoveNext
// address: 0x77774ac
// body: available
// range: 0x77774ac-0x777782f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7777820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7777824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7777828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777782c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<FetchListTeamRandom>d__25__MoveNext(int *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_68;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  long *local_40;
  undefined8 uStack_38;
  ulong local_30;
  
  if ((DAT_09522cf4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d38);
    FUN_03f5c2a4(&DAT_0919a480);
    FUN_03f5c2a4(&DAT_0919a488);
    FUN_03f5c2a4(&DAT_091b0c20);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdd08);
    DAT_09522cf4 = 1;
  }
  local_40 = (long *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_30 = *(ulong *)(param_1 + 0xe);
    uStack_38 = *(undefined8 *)(param_1 + 0xc);
    local_40 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if ((char)param_1[6] == '\0') {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar3 + 0x28) != 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar3 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(long *)(lVar3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (0 < *(int *)(*(long *)(lVar3 + 0x28) + 0x18)) goto LAB_0777777c;
      }
    }
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(DAT_0918b978 + 0xb8);
    thunk_FUN_03f5d7b8();
    _GAME_Team_TeamServer__GetRandomTeam(&local_90,1);
    local_50 = local_80;
    uStack_58 = uStack_88;
    uStack_88 = 0;
    local_80 = 0;
    local_60 = local_90;
    local_90 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdd08 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_50;
    thunk_FUN_03f5d7b8(&local_90,0);
    uStack_38 = uStack_88;
    local_40 = local_90;
    local_30 = local_80;
    uVar2 = FUN_041e5390(&local_40,DAT_0919a488);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = uStack_38;
      *(long **)(param_1 + 10) = local_40;
      *(ulong *)(param_1 + 0xe) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049af460(param_1 + 2,&local_40,param_1,DAT_091c1d38);
      return;
    }
  }
  plVar9 = local_40;
  uVar5 = uStack_38;
  if (local_40 != (long *)0x0) {
    uVar2 = local_30 & 0xffff;
    lVar3 = *(long *)(DAT_0919a480 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07777744;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,0);
LAB_07777744:
    uVar5 = (*(code *)*puVar4)(plVar9,uVar2,puVar4[1]);
  }
  plVar9 = (long *)(param_1 + 8);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*plVar9 + 0x28) = uVar5;
  thunk_FUN_03f5d7b8();
  *plVar9 = 0;
  thunk_FUN_03f5d7b8(plVar9,0);
LAB_0777777c:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07777804;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_07777804:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}

