// rea decompile_all
// name: System.IO.Stream.<<ReadAsync>g__FinishReadAsync|44_0>d$$MoveNext
// address: 0x7581c44
// body: available
// range: 0x7581c44-0x7581edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7581dec to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7581e04 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7581edc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Stream_<<ReadAsync>g__FinishReadAsync_44_0>d__MoveNext(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_78;
  int *piStack_70;
  int **local_68;
  undefined8 uStack_60;
  int local_58;
  long local_50;
  ulong local_48;
  undefined1 local_40 [16];
  int local_2c;
  int *local_28;
  
  local_28 = param_1;
  if ((DAT_09521af1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_0919a240);
    FUN_03f5c2a4(&DAT_0919a288);
    FUN_03f5c2a4(&DAT_0919b928);
    FUN_03f5c2a4(&DAT_0919ba18);
    FUN_03f5c2a4(&DAT_0919ba20);
    FUN_03f5c2a4(&DAT_091b4740);
    FUN_03f5c2a4(&DAT_091ba900);
    FUN_03f5c2a4(&DAT_091ba8f0);
    FUN_03f5c2a4(&DAT_091bcc68);
    DAT_09521af1 = 1;
  }
  local_2c = *param_1;
  piStack_70 = &local_2c;
  local_78 = 0;
  local_68 = &local_28;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if (local_2c == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_2c = -1;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = FUN_062ebc5c(*(long *)(param_1 + 10),0,DAT_091bcc68);
    uVar2 = FUN_06dab0dc(local_40,DAT_0919ba20);
    if ((uVar2 & 1) == 0) {
      local_2c = 0;
      *local_28 = 0;
      *(undefined1 (*) [16])(local_28 + 0x12) = local_40;
      thunk_FUN_03f5d7b8(local_28 + 0x12,0);
      FUN_047787c8(local_28 + 2,local_40,local_28,DAT_0919a240);
      uVar1 = 0;
      iVar6 = 4;
      goto LAB_07581e58;
    }
  }
  uVar1 = FUN_06dab124(local_40,DAT_0919ba18);
  lVar7 = *(long *)(local_28 + 0xc);
  if (lVar7 == 0) {
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    local_50 = 0;
    uVar4 = 0;
  }
  else {
    if (*(uint *)(lVar7 + 0x18) < uVar1) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    local_50 = lVar7 + 0x20;
    uVar4 = uVar1;
  }
  local_48 = (ulong)uVar4;
  auVar9 = FUN_05a50b4c(local_28 + 0xe,DAT_091b4740);
  FUN_06108408(&local_50,auVar9._0_8_,auVar9._8_8_,DAT_091ba900);
  iVar6 = 5;
LAB_07581e58:
  FUN_03eb4988(&local_78);
  uVar3 = DAT_0919a288;
  if (iVar6 == 5) {
    *local_28 = -2;
    FUN_06b3dc04(local_28 + 2,uVar1,uVar3);
  }
  else if (iVar6 == 0) {
    uVar8 = (&uStack_60)[local_58 + -1];
    piVar5 = local_28 + 2;
    *local_28 = -2;
    uVar3 = thunk_FUN_03fc39d4(&DAT_0919a280);
    FUN_06b3dca0(piVar5,uVar8,uVar3);
  }
  return;
}

