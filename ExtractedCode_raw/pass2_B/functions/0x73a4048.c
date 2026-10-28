// rea decompile_all
// name: MessagePack.SequencePool$$Rent
// address: 0x73a4048
// body: available
// range: 0x73a4048-0x73a42df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a4224 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a42d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a42d8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a42dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073a42d4) */

undefined1  [16] MessagePack_SequencePool__Rent(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long *plVar3;
  int iVar4;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 *local_58;
  long local_50;
  long lStack_48;
  char local_3c [4];
  undefined8 local_38;
  long local_30;
  long lStack_28;
  
  if ((DAT_09520b73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_0917d9f8);
    FUN_03f5c2a4(&DAT_091ba000);
    FUN_03f5c2a4(&DAT_091ba008);
    FUN_03f5c2a4(&DAT_091ba050);
    FUN_03f5c2a4(&DAT_0917e6a0);
    FUN_03f5c2a4(&DAT_091baf30);
    FUN_03f5c2a4(&DAT_091baf40);
    DAT_09520b73 = 1;
  }
  local_38 = *(undefined8 *)(param_1 + 0x18);
  pcStack_60 = local_3c;
  local_68 = 0;
  local_58 = &local_38;
  local_3c[0] = '\0';
  local_50 = 0;
  lStack_48 = 0;
  System_Threading_Monitor__Enter(local_38,local_3c,0);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar2 + 0x18) < 1) {
    iVar4 = 4;
  }
  else {
    lVar2 = FUN_061a18e8(lVar2,DAT_091baf30);
    lStack_70 = 0;
    local_78 = param_1;
    thunk_FUN_03f5d7b8(&local_78,param_1);
    lStack_70 = lVar2;
    thunk_FUN_03f5d7b8(&lStack_70,lVar2);
    iVar4 = 3;
    lStack_48 = lStack_70;
    local_50 = local_78;
  }
  if (local_3c[0] != '\0') {
    System_Threading_Monitor__Exit(*local_58,0);
  }
  if (iVar4 != 4) {
    if (iVar4 == 3) {
      lStack_28 = lStack_48;
      local_30 = local_50;
      goto LAB_073a4290;
    }
    if (iVar4 != 0) goto LAB_073a4290;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 == (long *)0x0) {
    lVar2 = thunk_FUN_03f9944c(DAT_0917e6a0);
LAB_073a4248:
    FUN_060c8c8c(lVar2,plVar3,DAT_091ba008);
  }
  else {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09175020 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09175020 + 0x130) * 8 + -8) !=
        DAT_09175020)) {
      lVar2 = thunk_FUN_03f9944c(DAT_0917e6a0);
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0917d9f8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0917d9f8 + 0x130) * 8 + -8) !=
          DAT_0917d9f8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
      goto LAB_073a4248;
    }
    lVar2 = thunk_FUN_03f9944c(DAT_0917e6a0);
    FUN_060c8d58(lVar2,plVar3,DAT_091ba000);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined4 *)(lVar2 + 0x38) = 0x8000;
  lStack_28 = 0;
  local_30 = param_1;
  thunk_FUN_03f5d7b8(&local_30,param_1);
  lStack_28 = lVar2;
  thunk_FUN_03f5d7b8((ulong)&local_30 | 8,lVar2);
LAB_073a4290:
  auVar1._8_8_ = lStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

