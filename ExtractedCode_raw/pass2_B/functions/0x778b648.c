// rea decompile_all
// name: _GAME.Team.TeamServer.<GetTeamInfoByServerId>d__7$$MoveNext
// address: 0x778b648
// body: available
// range: 0x778b648-0x778b94f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x778b94c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer_<GetTeamInfoByServerId>d__7__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
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
  
  if ((DAT_09522d84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199f20);
    FUN_03f5c2a4(&DAT_09199f80);
    FUN_03f5c2a4(&DAT_0919a770);
    FUN_03f5c2a4(&DAT_0919a778);
    FUN_03f5c2a4(&DAT_091bdf48);
    DAT_09522d84 = 1;
  }
  local_40 = (long *)0x0;
  lStack_38 = 0;
  local_30 = 0;
  local_60 = (long *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_30 = *(ulong *)(param_1 + 0x12);
    lStack_38 = *(long *)(param_1 + 0x10);
    local_40 = *(long **)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    _GAME_Team_TeamServer__GetTeamInfoDetailedByServerId
              (&local_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
               (char)param_1[0xc],0);
    local_50 = local_80;
    lStack_58 = lStack_88;
    lStack_88 = 0;
    local_80 = 0;
    local_60 = local_90;
    local_90 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf48 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_88 = lStack_58;
    local_90 = local_60;
    local_80 = local_50;
    thunk_FUN_03f5d7b8(&local_90,0);
    lStack_38 = lStack_88;
    local_40 = local_90;
    local_30 = local_80;
    uVar1 = FUN_041e5390(&local_40,DAT_0919a778);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0x10) = lStack_38;
      *(long **)(param_1 + 0xe) = local_40;
      *(ulong *)(param_1 + 0x12) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_04794a54(param_1 + 2,&local_40,param_1,DAT_09199f20);
      return;
    }
  }
  plVar8 = local_40;
  lVar2 = lStack_38;
  if (local_40 != (long *)0x0) {
    uVar1 = local_30 & 0xffff;
    lVar2 = *(long *)(DAT_0919a770 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0778b84c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_0778b84c:
    lVar2 = (*(code *)*puVar3)(plVar8,uVar1,puVar3[1]);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(lVar2 + 0x10) == '\0') || (*(int *)(lVar2 + 0x14) != 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar2 + 0x18);
  }
  plVar8 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar7;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar7);
  }
  else {
    lVar2 = *(long *)(DAT_09199f80 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar8;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0778b92c;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,2);
LAB_0778b92c:
    (*(code *)*puVar3)(plVar8,uVar7,puVar3[1]);
  }
  return;
}

