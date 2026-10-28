// rea decompile_all
// name: MessagePack.MessagePackStreamReader.<TryReadMoreDataAsync>d__19$$MoveNext
// address: 0x739ef78
// body: available
// range: 0x739ef78-0x739f3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739f3a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739f3a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739f3ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739f3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739f3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x739f3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0739f3a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MessagePack_MessagePackStreamReader_<TryReadMoreDataAsync>d__19__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_80;
  int local_78;
  undefined8 local_70;
  ulong uStack_68;
  long local_58;
  int local_4c;
  int *local_48;
  undefined8 local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong uStack_28;
  
  local_48 = param_1;
  if ((DAT_09520b45 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198440);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0919bae0);
    FUN_03f5c2a4(&DAT_0919baf8);
    FUN_03f5c2a4(&DAT_0919bb00);
    FUN_03f5c2a4(&DAT_091ba010);
    FUN_03f5c2a4(&DAT_091ba020);
    FUN_03f5c2a4(&DAT_091beb80);
    DAT_09520b45 = 1;
  }
  local_4c = *param_1;
  local_58 = *(long *)(param_1 + 10);
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  if (local_4c == 0) {
LAB_0739f24c:
    uStack_68 = *(ulong *)(param_1 + 0x10);
    local_70 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    local_4c = -1;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 8,0);
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = MessagePack_MessagePackStreamReader__get_ReadData(local_58,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = FUN_060c946c(lVar2,0,DAT_091ba020);
    local_48[0xc] = 0;
    param_1 = local_48;
    if (local_4c == 0) goto LAB_0739f24c;
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = *(long **)(local_58 + 0x10);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = (**(code **)(*plVar3 + 0x2f8))
                        (plVar3,auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(local_48 + 8),
                         *(undefined8 *)(*plVar3 + 0x300));
    lVar2 = DAT_091beb80;
    local_40 = 0;
    uStack_38 = 0;
    if ((*(byte *)(*(long *)(DAT_091beb80 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar10._0_8_;
    thunk_FUN_03f5d7b8(&local_40,auVar10._0_8_);
    uVar6 = local_40;
    uVar4 = uStack_38 >> 0x30;
    uStack_38._0_6_ = auVar10._8_6_;
    uStack_38 = CONCAT26((short)uVar4,(undefined6)uStack_38) & 0xff00ffffffffffff;
    uVar4 = uStack_38;
    local_30 = 0;
    uStack_28 = 0;
    if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_28 = uVar4;
    local_30 = uVar6;
    thunk_FUN_03f5d7b8(&local_30,0);
    uVar4 = uStack_28;
    uVar6 = local_30;
    local_30 = 0;
    uStack_28 = 0;
    if ((*(byte *)(*(long *)(DAT_0919bae0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_30 = uVar6;
    uStack_28 = uVar4;
    thunk_FUN_03f5d7b8(&local_30,0);
    uStack_68 = uStack_28;
    local_70 = local_30;
    lVar2 = *(long *)(DAT_0919bb00 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    uVar4 = FUN_065b1370(&local_70,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
    if ((uVar4 & 1) == 0) {
      local_4c = 0;
      *local_48 = 0;
      *(ulong *)(local_48 + 0x10) = uStack_68;
      *(undefined8 *)(local_48 + 0xe) = local_70;
      thunk_FUN_03f5d7b8(local_48 + 0xe,0);
      piVar8 = local_48;
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091751c8,extraout_x1,local_48);
      }
      FUN_045d5188(piVar8 + 2,&local_70,local_48,DAT_09198440);
      bVar7 = false;
      iVar9 = 5;
      goto LAB_0739f2ac;
    }
  }
  lVar2 = *(long *)(DAT_0919baf8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  iVar1 = FUN_065b149c(&local_70,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x20));
  bVar7 = 0 < iVar1;
  iVar9 = 6;
  local_48[0xc] = iVar1;
LAB_0739f2ac:
  if (local_4c < 0) {
    if ((local_58 == 0) ||
       (lVar2 = MessagePack_MessagePackStreamReader__get_ReadData(local_58,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060c93d4(lVar2,local_48[0xc],DAT_091ba010);
  }
  if (iVar9 == 6) {
    piVar8 = local_48 + 2;
    *local_48 = -2;
    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f2e3c(piVar8,bVar7,DAT_091985d0);
  }
  else if (iVar9 == 0) {
    uVar6 = (&uStack_80)[local_78 + -1];
    piVar8 = local_48 + 2;
    *local_48 = -2;
    lVar2 = thunk_FUN_03fc39d4(&DAT_091751c8);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = thunk_FUN_03fc39d4(&DAT_091985c8);
    FUN_069f3088(piVar8,uVar6,uVar5);
  }
  return;
}

