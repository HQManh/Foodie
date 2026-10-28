// rea decompile_all
// name: _GAME.Team.TeamManager.<GetFullTeamInfo>d__33$$MoveNext
// address: 0x777a3b0
// body: available
// range: 0x777a3b0-0x777a6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777a6f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<GetFullTeamInfo>d__33__MoveNext(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *local_90;
  long lStack_88;
  ulong local_80;
  undefined4 local_68;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long *local_40;
  long lStack_38;
  ulong local_30;
  
  if ((DAT_09522cf9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199f00);
    FUN_03f5c2a4(&DAT_09199f80);
    FUN_03f5c2a4(&DAT_0919a760);
    FUN_03f5c2a4(&DAT_0919a768);
    FUN_03f5c2a4(&DAT_0919ffc0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf40);
    DAT_09522cf9 = 1;
  }
  local_40 = (long *)0x0;
  lStack_38 = 0;
  local_30 = 0;
  local_60 = (long *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_30 = *(ulong *)(param_1 + 0xe);
    lStack_38 = *(long *)(param_1 + 0xc);
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
    lVar8 = *(long *)(param_1 + 8);
    lVar3 = 0;
    if (lVar8 == 0) goto LAB_0777a620;
    if (*(long *)(lVar8 + 0x58) != 0) {
      iVar1 = FUN_06fd810c(*(long *)(lVar8 + 0x58),DAT_0919ffc0);
      lVar8 = *(long *)(param_1 + 8);
      lVar3 = lVar8;
      if (iVar1 != 0) goto LAB_0777a620;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    uVar9 = *(undefined8 *)(lVar8 + 0x10);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Team_TeamManager__GetFullTeamInfo(&local_90,uVar9);
    local_50 = local_80;
    lStack_58 = lStack_88;
    lStack_88 = 0;
    local_80 = 0;
    local_60 = local_90;
    local_90 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_88 = lStack_58;
    local_90 = local_60;
    local_80 = local_50;
    thunk_FUN_03f5d7b8(&local_90,0);
    lStack_38 = lStack_88;
    local_40 = local_90;
    local_30 = local_80;
    uVar2 = FUN_041e5390(&local_40,DAT_0919a768);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0xc) = lStack_38;
      *(long **)(param_1 + 10) = local_40;
      *(ulong *)(param_1 + 0xe) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_047946f4(param_1 + 2,&local_40,param_1,DAT_09199f00);
      return;
    }
  }
  plVar10 = local_40;
  lVar3 = lStack_38;
  if (local_40 != (long *)0x0) {
    uVar2 = local_30 & 0xffff;
    lVar3 = *(long *)(DAT_0919a760 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar8 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0777a60c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar3,0);
LAB_0777a60c:
    lVar3 = (*(code *)*puVar4)(plVar10,uVar2,puVar4[1]);
  }
LAB_0777a620:
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar3;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar3);
  }
  else {
    lVar8 = *(long *)(DAT_09199f80 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar5 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0777a6d0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar8,2);
LAB_0777a6d0:
    (*(code *)*puVar4)(plVar10,lVar3,puVar4[1]);
  }
  return;
}

