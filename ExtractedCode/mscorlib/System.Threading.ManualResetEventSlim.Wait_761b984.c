// rea decompile_all
// name: System.Threading.ManualResetEventSlim$$Wait
// address: 0x761b984
// body: available
// range: 0x761b984-0x761bcaf inclusive
// range: 0x761bce4-0x761bdcb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761bd74 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761bdbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761bdc4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x761bdc8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0761bd70) */
/* WARNING: Removing unreachable block (ram,0x0761bdc0) */

byte System_Threading_ManualResetEventSlim__Wait(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  long local_b8;
  char *pcStack_b0;
  undefined8 *local_a8;
  char local_9c [4];
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_6c;
  long local_68;
  undefined8 uStack_58;
  
  local_68 = param_1;
  uStack_58 = param_3;
  if ((DAT_095220ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09187d98);
    FUN_03f5c2a4(&DAT_0918aef8);
    DAT_095220ee = 1;
  }
  local_6c = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_9c[0] = '\0';
  System_Threading_ManualResetEventSlim__ThrowIfDisposed(param_1);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_58);
  lVar1 = local_68;
  if ((int)param_2 < -1) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar10 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921f698);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091d28d0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar7);
  }
  uVar6 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
  if ((uVar6 & 1) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 == 0xffffffff) {
      iVar3 = 0;
    }
    else {
      iVar3 = System_Environment__get_TickCount(0);
    }
    iVar4 = System_Threading_ManualResetEventSlim__get_SpinCount(lVar1);
    iVar5 = 0;
    local_6c = 0;
    while( true ) {
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = local_68;
      if (iVar4 <= iVar5) {
        System_Threading_ManualResetEventSlim__EnsureLockObjectCreated(local_68);
        if (*(int *)(DAT_09187d98 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = **(undefined8 **)(DAT_09187d98 + 0xb8);
        if (*(int *)(DAT_09182348 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182348);
        }
        System_Threading_CancellationToken__InternalRegisterWithoutEC
                  (&local_b8,&uStack_58,uVar10,lVar1);
        local_80 = local_a8;
        uVar10 = *(undefined8 *)(local_68 + 0x10);
        uStack_88 = pcStack_b0;
        local_90 = local_b8;
        thunk_FUN_03f6a5cc();
        pcStack_b0 = local_9c;
        local_b8 = 0;
        local_a8 = &local_98;
        local_9c[0] = '\0';
        local_98 = uVar10;
        System_Threading_Monitor__Enter(uVar10,local_9c,0);
        uVar9 = param_2;
        goto LAB_0761bbe0;
      }
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinWait__SpinOnce(&local_6c,0x28);
      uVar6 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
      if ((uVar6 & 1) != 0) break;
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = local_6c;
      if (99 < local_6c) {
        if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (((uint)(iVar5 * -0x33333333) >> 1 | iVar5 * -0x80000000) < 0x1999999a) {
          if (*(int *)(DAT_09182348 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_58);
        }
      }
    }
  }
  return 1;
LAB_0761bbe0:
  uVar6 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
  if ((uVar6 & 1) != 0) {
    iVar5 = 5;
LAB_0761bce8:
    bVar2 = iVar5 != 0xe;
    bVar8 = 0;
LAB_0761bd18:
    if (*pcStack_b0 != '\0') {
      System_Threading_Monitor__Exit(*local_a8,0);
    }
    if (local_b8 == 0) {
      System_Threading_CancellationTokenRegistration__Dispose(&local_90);
      return bVar2 | bVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(&uStack_58);
  if (param_2 != 0xffffffff) {
    iVar4 = System_Environment__get_TickCount(0);
    iVar5 = 0xe;
    if ((iVar4 - iVar3 < 0) || (uVar9 = param_2 - (iVar4 - iVar3), (int)uVar9 < 1))
    goto LAB_0761bce8;
    uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  }
  iVar5 = System_Threading_ManualResetEventSlim__get_Waiters(local_68);
  System_Threading_ManualResetEventSlim__set_Waiters(local_68,iVar5 + 1);
  uVar6 = System_Threading_ManualResetEventSlim__get_IsSet(local_68);
  if ((uVar6 & 1) != 0) {
    iVar3 = System_Threading_ManualResetEventSlim__get_Waiters(local_68);
    System_Threading_ManualResetEventSlim__set_Waiters(local_68,iVar3 + -1);
    bVar2 = false;
    bVar8 = 1;
    goto LAB_0761bd18;
  }
  uVar10 = *(undefined8 *)(local_68 + 0x10);
  thunk_FUN_03f6a5cc();
  uVar6 = System_Threading_Monitor__Wait(uVar10,uVar9,0);
  iVar5 = 0xb;
  if ((uVar6 & 1) == 0) {
    iVar5 = 0xe;
  }
  iVar4 = System_Threading_ManualResetEventSlim__get_Waiters(local_68);
  System_Threading_ManualResetEventSlim__set_Waiters(local_68,iVar4 + -1);
  if ((iVar5 != 0xb) && (iVar5 != 0)) goto LAB_0761bce8;
  goto LAB_0761bbe0;
}

