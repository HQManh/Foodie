// rea decompile_all
// name: System.Threading.SemaphoreSlim$$Wait
// address: 0x761ebf4
// body: available
// range: 0x761ebf4-0x761f01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761eff8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761effc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761f014 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761f018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0761f000) */

uint System_Threading_SemaphoreSlim__Wait(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long local_a0;
  char *pcStack_98;
  long *local_90;
  long *local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_44 [4];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_3;
  if ((DAT_0952211d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918a848);
    FUN_03f5c2a4(&DAT_0918aef8);
    FUN_03f5c2a4(&DAT_091bc2b8);
    FUN_03f5c2a4(&DAT_091bcba8);
    DAT_0952211d = 1;
  }
  local_44[0] = '\0';
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_64 = 0;
  local_70 = 0;
  local_78 = 0;
  System_Threading_SemaphoreSlim__CheckDispose(param_1);
  if (param_2 < -1) {
    local_a0 = CONCAT44(local_a0._4_4_,param_2);
    uVar12 = FUN_03f5c42c(DAT_09535420,&local_a0);
    thunk_FUN_03fc39d4(&DAT_0918a848);
    FUN_039afb80();
    thunk_FUN_03fc39d4(&DAT_092100f0);
    uVar7 = System_Threading_SemaphoreSlim__GetResourceString();
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_092241d8);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar12,uVar7,0);
    uVar12 = thunk_FUN_03fc39d4(&DAT_091d8960);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar12);
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_38);
  if (param_2 == 0) {
    iVar11 = *(int *)(local_40 + 0x10);
    thunk_FUN_03f6a5cc();
    uVar3 = 0;
    if (iVar11 != 0) goto LAB_0761ece4;
  }
  else {
    if (param_2 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = System_Environment__get_TickCount(0);
    }
LAB_0761ece4:
    local_44[0] = '\0';
    if (*(int *)(DAT_0918a848 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = *(undefined8 *)(*(long *)(DAT_0918a848 + 0xb8) + 0x10);
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182348);
    }
    System_Threading_CancellationToken__InternalRegisterWithoutEC
              (&local_a0,&uStack_38,uVar12,local_40);
    local_60 = local_a0;
    local_88 = &local_60;
    local_64 = 0;
    local_50 = local_90;
    local_a0 = 0;
    local_90 = &local_40;
    uStack_58 = pcStack_98;
    pcStack_98 = local_44;
    while (iVar11 = *(int *)(local_40 + 0x10), thunk_FUN_03f6a5cc(), iVar11 == 0) {
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Threading_SpinWait__get_NextSpinWillYield(&local_64);
      if ((uVar5 & 1) != 0) break;
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinWait__SpinOnce(&local_64);
    }
    System_Threading_Monitor__Enter(*(undefined8 *)(local_40 + 0x20),local_44,0);
    if (local_44[0] != '\0') {
      iVar11 = *(int *)(local_40 + 0x18);
      thunk_FUN_03f6a5cc();
      thunk_FUN_03f6a5cc();
      *(int *)(local_40 + 0x18) = iVar11 + 1;
    }
    if (*(long *)(local_40 + 0x30) == 0) {
      iVar11 = *(int *)(local_40 + 0x10);
      thunk_FUN_03f6a5cc();
      if (iVar11 != 0) {
        uVar4 = 0;
LAB_0761ee3c:
        iVar11 = *(int *)(local_40 + 0x10);
        thunk_FUN_03f6a5cc();
        if (0 < iVar11) {
          iVar11 = *(int *)(local_40 + 0x10);
          thunk_FUN_03f6a5cc();
          thunk_FUN_03f6a5cc();
          uVar4 = 1;
          *(int *)(local_40 + 0x10) = iVar11 + -1;
        }
        lVar10 = *(long *)(local_40 + 0x28);
        thunk_FUN_03f6a5cc();
        lVar6 = 0;
        if (lVar10 != 0) {
          iVar11 = *(int *)(local_40 + 0x10);
          thunk_FUN_03f6a5cc();
          if (iVar11 == 0) {
            lVar6 = *(long *)(local_40 + 0x28);
            thunk_FUN_03f6a5cc();
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            System_Threading_EventWaitHandle__Reset(lVar6);
          }
          lVar6 = 0;
        }
        goto LAB_0761eeb4;
      }
      if (param_2 != 0) {
        uVar4 = System_Threading_SemaphoreSlim__WaitUntilCountOrTimeout
                          (local_40,param_2,uVar3,param_3);
        goto LAB_0761ee3c;
      }
      lVar6 = 0;
      iVar11 = 0xf;
      uVar4 = 0;
    }
    else {
      lVar6 = System_Threading_SemaphoreSlim__WaitAsync(local_40,param_2,param_3);
      uVar4 = 0;
LAB_0761eeb4:
      iVar11 = 0xc;
    }
    plVar2 = local_90;
    if (*pcStack_98 != '\0') {
      iVar1 = *(int *)(*local_90 + 0x18);
      thunk_FUN_03f6a5cc();
      thunk_FUN_03f6a5cc();
      lVar10 = *plVar2;
      *(int *)(lVar10 + 0x18) = iVar1 + -1;
      System_Threading_Monitor__Exit(*(undefined8 *)(lVar10 + 0x20),0);
    }
    System_Threading_CancellationTokenRegistration__Dispose(local_88);
    if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    if ((iVar11 == 0xc) || (iVar11 == 0)) {
      if (lVar6 != 0) {
        local_70 = FUN_062e8294(lVar6,DAT_091bcba8);
        uVar4 = FUN_062098e0(&local_70,DAT_091bc2b8);
      }
      goto LAB_0761ef48;
    }
  }
  uVar4 = 0;
LAB_0761ef48:
  return uVar4 & 1;
}

