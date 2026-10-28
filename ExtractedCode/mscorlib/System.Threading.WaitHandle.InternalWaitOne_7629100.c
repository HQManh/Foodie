// rea decompile_all
// name: System.Threading.WaitHandle$$InternalWaitOne
// address: 0x7629100
// body: available
// range: 0x7629100-0x76291eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76291d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07629340) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint System_Threading_WaitHandle__InternalWaitOne(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  char acStack_4c [4];
  long lStack_48;
  code *pcStack_40;
  long *plStack_38;
  long lStack_30;
  ulong uStack_28;
  
  if ((DAT_09522197 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918cea8);
    DAT_09522197 = 1;
  }
  if (param_1 == 0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_091fd880);
    uVar3 = System_Environment__GetResourceString(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar4 = thunk_FUN_03f9944c();
    System_ObjectDisposedException___ctor(uVar4,0,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091def58);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_Threading_WaitHandle__WaitOneNative(param_1,param_2 & 0xffffffff,0,0);
  if (iVar1 == 0x80) {
    if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar8 = System_Threading_WaitHandle__ThrowAbandonedMutexException();
    lVar6 = auVar8._0_8_;
    pcStack_40 = System_Threading_WaitHandle__WaitOneNative;
    plStack_38 = &DAT_0918cea8;
    uVar7 = auVar8._8_8_ & 0xffffffff;
    lStack_48 = lVar6;
    lStack_30 = param_1;
    uStack_28 = param_2;
    if ((DAT_0952219c & 1) == 0) {
      FUN_03f5c2a4(&DAT_091801c8);
      FUN_03f5c2a4(&DAT_0918cea8);
      DAT_0952219c = 1;
    }
    acStack_4c[0] = '\0';
    uStack_58 = 0;
    plVar5 = (long *)System_Threading_SynchronizationContext__get_Current();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_Runtime_InteropServices_SafeHandle__DangerousAddRef(lVar6,acStack_4c,0);
    if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 2) & 1) == 0)) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uStack_58 = *(undefined8 *)(lStack_48 + 0x10);
      if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = FUN_03f6a71c(&uStack_58,1,0,uVar7);
    }
    else {
      lVar6 = FUN_03f5c394(DAT_091801c8,1);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lStack_48 + 0x10);
      uVar2 = (**(code **)(*plVar5 + 0x1b8))(plVar5,lVar6,0,uVar7,*(undefined8 *)(*plVar5 + 0x1c0));
    }
    if (acStack_4c[0] != '\0') {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_InteropServices_SafeHandle__DangerousRelease(lStack_48,0);
    }
    return uVar2;
  }
  return (uint)(iVar1 != 0x102 && iVar1 != 0x7fffffff);
}

