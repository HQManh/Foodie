// rea decompile_all
// name: _GAME.Team.TeamManager.<ForceFetchNewTeamData>d__16$$MoveNext
// address: 0x7779934
// body: available
// range: 0x7779934-0x7779d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7779d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7779d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<ForceFetchNewTeamData>d__16__MoveNext(int *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long *local_a0;
  long lStack_98;
  ulong local_90;
  undefined4 local_78;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  
  if ((DAT_09522cf6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1ed0);
    FUN_03f5c2a4(&DAT_0919a760);
    FUN_03f5c2a4(&DAT_0919a768);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf40);
    DAT_09522cf6 = 1;
  }
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 10);
    lStack_48 = *(long *)(param_1 + 8);
    local_50 = *(long **)(param_1 + 6);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38) == 0) goto LAB_07779ce8;
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Team_TeamManager__GetFullTeamInfo(&local_a0,uVar11);
    local_60 = local_90;
    lStack_68 = lStack_98;
    lStack_98 = 0;
    local_90 = 0;
    local_70 = local_a0;
    local_a0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_98 = lStack_68;
    local_a0 = local_70;
    local_90 = local_60;
    thunk_FUN_03f5d7b8(&local_a0,0);
    lStack_48 = lStack_98;
    local_50 = local_a0;
    local_40 = local_90;
    uVar3 = FUN_041e5390(&local_50,DAT_0919a768);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 8) = lStack_48;
      *(long **)(param_1 + 6) = local_50;
      *(ulong *)(param_1 + 10) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 6,0);
      FUN_049af56c(param_1 + 2,&local_50,param_1,DAT_091c1ed0);
      return;
    }
  }
  plVar10 = local_50;
  lVar4 = lStack_48;
  if (local_50 != (long *)0x0) {
    uVar3 = local_40 & 0xffff;
    lVar4 = *(long *)(DAT_0919a760 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07779bd0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar4,0);
LAB_07779bd0:
    lVar4 = (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
  }
  if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = DAT_091ba4f0;
  lVar6 = *(long *)(DAT_091ba4f0 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  uVar11 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar11,0,0);
  if (lVar4 != 0 && (uVar2 & 1) == 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = _GAME_Team_TeamManager__ApplyOwnRoster(lVar4);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar12 = _GAME_Team_TeamManager__TryBackfillTeamCountryCode();
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar12._0_8_,auVar12._8_8_,0);
    }
  }
LAB_07779ce8:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07779d70;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_07779d70:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  return;
}

