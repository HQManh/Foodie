// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskSynchronizationContext$$Post
// address: 0x7da9cbc
// body: available
// range: 0x7da9cbc-0x7daa033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7daa018 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7daa01c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7daa020 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7daa024 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7daa028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7daa02c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7daa030 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskSynchronizationContext__Post
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  char *local_48;
  char local_34 [4];
  
  if ((DAT_09525ed3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180c68);
    FUN_03f5c2a4(&DAT_0918aef0);
    FUN_03f5c2a4(&DAT_0918c638);
    DAT_09525ed3 = 1;
  }
  local_48 = local_34;
  local_34[0] = '\0';
  local_50 = 0;
  if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_SpinLock__Enter(*(undefined8 *)(DAT_0918c638 + 0xb8),local_34,0);
  lVar5 = *(long *)(DAT_0918c638 + 0xb8);
  local_60 = param_2;
  if (*(char *)(lVar5 + 4) == '\0') {
    if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *(long *)(DAT_0918c638 + 0xb8);
    }
    if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar4 = *(int *)(lVar5 + 8);
    if (iVar4 == *(int *)(*(long *)(lVar5 + 0x10) + 0x18)) {
      if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
        FUN_03f5c424();
        iVar4 = *(int *)(*(long *)(DAT_0918c638 + 0xb8) + 8);
      }
      uVar1 = iVar4 << 1;
      if (0x7feffffe < uVar1) {
        uVar1 = 0x7fefffff;
      }
      uVar2 = FUN_03f5c394(DAT_09180c68,uVar1);
      if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Array__Copy(*(undefined8 *)(*(long *)(DAT_0918c638 + 0xb8) + 0x10),uVar2,
                         *(undefined4 *)(*(long *)(DAT_0918c638 + 0xb8) + 8),0);
      puVar3 = (undefined8 *)(*(long *)(DAT_0918c638 + 0xb8) + 0x10);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
    }
    if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_0918c638 + 0xb8) + 0x10);
    uVar1 = *(uint *)(*(long *)(DAT_0918c638 + 0xb8) + 8);
    uStack_58 = 0;
    thunk_FUN_03f5d7b8(&local_60,param_2);
    uStack_58 = param_3;
    thunk_FUN_03f5d7b8((ulong)&local_60 | 8,param_3);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
    puVar3 = (undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x28) = uStack_58;
    *puVar3 = local_60;
    thunk_FUN_03f5d7b8(puVar3,0);
    *(int *)(*(long *)(DAT_0918c638 + 0xb8) + 8) = *(int *)(*(long *)(DAT_0918c638 + 0xb8) + 8) + 1;
  }
  else {
    if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *(long *)(DAT_0918c638 + 0xb8);
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar4 = *(int *)(lVar5 + 0x18);
    if (iVar4 == *(int *)(*(long *)(lVar5 + 0x20) + 0x18)) {
      if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
        FUN_03f5c424();
        iVar4 = *(int *)(*(long *)(DAT_0918c638 + 0xb8) + 0x18);
      }
      uVar1 = iVar4 << 1;
      if (0x7feffffe < uVar1) {
        uVar1 = 0x7fefffff;
      }
      uVar2 = FUN_03f5c394(DAT_09180c68,uVar1);
      if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Array__Copy(*(undefined8 *)(*(long *)(DAT_0918c638 + 0xb8) + 0x20),uVar2,
                         *(undefined4 *)(*(long *)(DAT_0918c638 + 0xb8) + 0x18),0);
      puVar3 = (undefined8 *)(*(long *)(DAT_0918c638 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
    }
    if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_58 = 0;
    lVar5 = *(long *)(*(long *)(DAT_0918c638 + 0xb8) + 0x20);
    uVar1 = *(uint *)(*(long *)(DAT_0918c638 + 0xb8) + 0x18);
    thunk_FUN_03f5d7b8(&local_60,param_2);
    uStack_58 = param_3;
    thunk_FUN_03f5d7b8((ulong)&local_60 | 8,param_3);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
    puVar3 = (undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x28) = uStack_58;
    *puVar3 = local_60;
    thunk_FUN_03f5d7b8(puVar3,0);
    *(int *)(*(long *)(DAT_0918c638 + 0xb8) + 0x18) =
         *(int *)(*(long *)(DAT_0918c638 + 0xb8) + 0x18) + 1;
  }
  if (*local_48 != '\0') {
    if (*(int *)(DAT_0918c638 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_0918aef0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_SpinLock__Exit(*(undefined8 *)(DAT_0918c638 + 0xb8),0,0);
  }
  if (local_50 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

