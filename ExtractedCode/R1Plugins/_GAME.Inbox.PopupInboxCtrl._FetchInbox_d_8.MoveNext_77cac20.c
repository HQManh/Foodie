// rea decompile_all
// name: _GAME.Inbox.PopupInboxCtrl.<FetchInbox>d__8$$MoveNext
// address: 0x77cac20
// body: available
// range: 0x77cac20-0x77caf77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77caf74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Inbox_PopupInboxCtrl_<FetchInbox>d__8__MoveNext(int *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined1 auVar10 [16];
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09522f89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d58);
    FUN_03f5c2a4(&DAT_0919a4c0);
    FUN_03f5c2a4(&DAT_0919a4c8);
    FUN_03f5c2a4(&DAT_091bdd28);
    FUN_03f5c2a4(&DAT_091ddb40);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522f89 = 1;
  }
  lVar9 = *(long *)(param_1 + 6);
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_c8 = 0;
  local_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (long *)0x0;
  local_98 = 0;
  uStack_a0 = 0;
  if (*param_1 == 0) {
    uStack_a8 = *(undefined8 *)(param_1 + 10);
    local_b0 = *(long **)(param_1 + 8);
    local_98 = *(ulong *)(param_1 + 0xe);
    uStack_a0 = *(undefined8 *)(param_1 + 0xc);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    _GAME_Inbox_InboxServer__FetchInbox(&local_120,0,1);
    uStack_f8 = uStack_118;
    local_100 = local_120;
    local_f0 = local_110;
    _GAME_Inbox_InboxServer__FetchInbox(&local_120,1,1);
    uStack_88 = uStack_118;
    local_90 = local_120;
    local_80 = local_110;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_48 = uStack_f8;
    local_50 = local_100;
    local_40 = local_f0;
    uStack_68 = uStack_88;
    local_70 = local_90;
    local_60 = local_80;
    FUN_04e146c8(&local_120,&local_50,&local_70,DAT_091ddb40);
    uStack_b8 = uStack_108;
    uStack_c0 = local_110;
    uStack_c8 = uStack_118;
    local_d0 = local_120;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    uStack_108 = 0;
    local_110 = 0;
    if ((*(byte *)(*(long *)(DAT_091bdd28 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_118 = uStack_c8;
    local_120 = local_d0;
    uStack_108 = uStack_b8;
    local_110 = uStack_c0;
    thunk_FUN_03f5d7b8(&local_120,0);
    uStack_a8 = uStack_118;
    local_b0 = local_120;
    local_98 = uStack_108;
    uStack_a0 = local_110;
    uVar2 = FUN_04340364(&local_b0,DAT_0919a4c8);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_a8;
      *(long **)(param_1 + 8) = local_b0;
      *(ulong *)(param_1 + 0xe) = local_98;
      *(undefined8 *)(param_1 + 0xc) = uStack_a0;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_049ae378(param_1 + 2,&local_b0,param_1,DAT_091c1d58);
      return;
    }
  }
  plVar8 = local_b0;
  auVar10._8_8_ = uStack_a0;
  auVar10._0_8_ = uStack_a8;
  if (local_b0 != (long *)0x0) {
    uVar2 = local_98 & 0xffff;
    lVar3 = *(long *)(DAT_0919a4c0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077cae90;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,lVar3,0);
LAB_077cae90:
    auVar10 = (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar9 + 0x110) = auVar10._0_8_;
  thunk_FUN_03f5d7b8(lVar9 + 0x110,auVar10._0_8_);
  *(long *)(lVar9 + 0x108) = auVar10._8_8_;
  thunk_FUN_03f5d7b8(lVar9 + 0x108,auVar10._8_8_);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_077caf54;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_077caf54:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}

