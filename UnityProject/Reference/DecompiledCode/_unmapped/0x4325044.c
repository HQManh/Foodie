// rea decompile_all
// name: FUN_04325044
// address: 0x4325044
// body: available
// range: 0x4325044-0x432531f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4325308 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432530c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325314 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4325318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432531c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04325310) */

void FUN_04325044(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  char *local_a0;
  char *local_98;
  long *local_90;
  char local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char local_64 [4];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_60 = param_1;
  uStack_58 = param_2;
  if (DAT_09517671 == '\0') {
    FUN_03f5c2a4(&DAT_09174850);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09184350);
    FUN_03f5c2a4(&DAT_091b6ac8);
    FUN_03f5c2a4(&DAT_0918aef0);
    FUN_03f5c2a4(&DAT_091e5ce0);
    FUN_03f5c2a4(&DAT_0918e700);
    DAT_09517671 = '\x01';
  }
  local_64[0] = '\0';
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_84[0] = '\0';
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09217ca0);
    System_ArgumentNullException___ctor(uVar8,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c3468);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar4);
  }
  local_a0 = local_64;
  local_90 = &local_60;
  local_a8 = 0;
  local_98 = local_84;
  local_64[0] = '\0';
  if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_SpinLock__Enter(param_1 + 0x10,local_64,0);
  if (*(int *)(DAT_09184350 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_ExecutionContext__SuppressFlow(&local_e0,0);
  lVar7 = local_60;
  puStack_b0 = &local_80;
  local_b8 = 0;
  local_70 = local_d0;
  uStack_78 = uStack_d8;
  local_80 = local_e0;
  if (*(int *)(DAT_0918e700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_0918e700 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(DAT_0918e700 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_0918e700 + 0xb8);
    }
    uVar8 = *puVar5;
    lVar6 = thunk_FUN_03f9944c(DAT_09174850);
    FUN_070a8c30(lVar6,uVar8,DAT_091e5ce0,0);
    plVar3 = (long *)(*(long *)(DAT_0918e700 + 0xb8) + 8);
    *plVar3 = lVar6;
    thunk_FUN_03f5d7b8(plVar3,lVar6);
  }
  lVar2 = local_60;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__Register(&local_e0,&uStack_58,lVar6,lVar2,0,0);
  uStack_48 = uStack_d8;
  local_50 = local_e0;
  local_40 = local_d0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  FUN_05c2a1c8(&local_e0,&local_50,DAT_091b6ac8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar7 + 0x40) = uStack_d8;
  *(undefined8 *)(lVar7 + 0x38) = local_e0;
  *(undefined8 *)(lVar7 + 0x50) = uStack_c8;
  *(undefined8 *)(lVar7 + 0x48) = local_d0;
  thunk_FUN_03f5d7b8(lVar7 + 0x40,0);
  System_Threading_AsyncFlowControl__Undo(&local_80,0);
  cVar1 = *local_a0;
  *local_98 = cVar1;
  if (cVar1 != '\0') {
    lVar7 = *local_90;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Exit(lVar7 + 0x10,0);
  }
  if (local_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  return;
}

