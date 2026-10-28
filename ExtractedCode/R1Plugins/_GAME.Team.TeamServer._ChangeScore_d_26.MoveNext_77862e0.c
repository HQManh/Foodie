// rea decompile_all
// name: _GAME.Team.TeamServer.<ChangeScore>d__26$$MoveNext
// address: 0x77862e0
// body: available
// range: 0x77862e0-0x7786677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7786674 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<ChangeScore>d__26__MoveNext(int *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
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
  
  if ((DAT_09522d6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199888);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a740);
    FUN_03f5c2a4(&DAT_0919a748);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091bdf30);
    DAT_09522d6c = 1;
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
LAB_077864e4:
    plVar9 = local_40;
    lVar3 = lStack_38;
    if (local_40 != (long *)0x0) {
      uVar2 = local_30 & 0xffff;
      lVar3 = *(long *)(DAT_0919a740 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c(lVar3);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07786580;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,0);
LAB_07786580:
      lVar3 = (*(code *)*puVar4)(plVar9,uVar2,puVar4[1]);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar3 + 0x10) != '\0') {
      bVar1 = *(int *)(lVar3 + 0x14) == 0;
      goto LAB_077865b0;
    }
  }
  else {
    uVar2 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
    if ((uVar2 & 1) != 0) {
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
      uVar8 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091896c0);
      }
      _GAME_Team_TeamServer__ChangeScoreByServerId
                (&local_90,uVar8,**(undefined8 **)(DAT_091896c0 + 0xb8),(char)param_1[8]);
      local_50 = local_80;
      lStack_58 = lStack_88;
      lStack_88 = 0;
      local_80 = 0;
      local_60 = local_90;
      local_90 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdf30 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      lStack_88 = lStack_58;
      local_90 = local_60;
      local_80 = local_50;
      thunk_FUN_03f5d7b8(&local_90,0);
      lStack_38 = lStack_88;
      local_40 = local_90;
      local_30 = local_80;
      uVar2 = FUN_041e5390(&local_40,DAT_0919a748);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(long *)(param_1 + 0xc) = lStack_38;
        *(long **)(param_1 + 10) = local_40;
        *(ulong *)(param_1 + 0xe) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_0478ffec(param_1 + 2,&local_40,param_1,DAT_09199888);
        return;
      }
      goto LAB_077864e4;
    }
  }
  bVar1 = false;
LAB_077865b0:
  plVar9 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar1;
  }
  else {
    lVar3 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar5 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07786654;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,2);
LAB_07786654:
    (*(code *)*puVar4)(plVar9,bVar1,puVar4[1]);
  }
  return;
}

