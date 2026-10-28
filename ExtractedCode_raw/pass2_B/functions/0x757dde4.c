// rea decompile_all
// name: System.IO.Stream$$BeginReadInternal
// address: 0x757dde4
// body: available
// range: 0x757dde4-0x757dfe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757dfdc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757dfe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_IO_Stream__BeginReadInternal
          (long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
          ,undefined8 param_6,ulong param_7,uint param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_09521abe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178d98);
    FUN_03f5c2a4(&DAT_09194c00);
    FUN_03f5c2a4(&DAT_091f0560);
    FUN_03f5c2a4(&DAT_09194bf0);
    DAT_09521abe = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if ((uVar1 & 1) == 0) {
    uVar7 = System_IO_Error__GetReadNotSupported(0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091da080);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar4);
  }
  lVar2 = System_IO_Stream__EnsureAsyncActiveSemaphoreInitialized(param_1);
  if ((param_7 & 1) == 0) {
    if (lVar2 == 0) goto LAB_0757dfe0;
    System_Threading_SemaphoreSlim__Wait(lVar2,0);
    lVar2 = 0;
  }
  else {
    if (lVar2 == 0) {
LAB_0757dfe0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = System_Threading_SemaphoreSlim__WaitAsync(lVar2,0);
  }
  if (*(int *)(DAT_09194bf0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09194bf0 + 0xb8);
  lVar6 = puVar5[3];
  if (lVar6 == 0) {
    if (*(int *)(DAT_09194bf0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar5 = *(undefined8 **)(DAT_09194bf0 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_03f9944c(DAT_09178d98);
    FUN_053239c8(lVar6,uVar7,DAT_091f0560,0);
    plVar3 = (long *)(*(long *)(DAT_09194bf0 + 0xb8) + 0x18);
    *plVar3 = lVar6;
    thunk_FUN_03f5d7b8(plVar3,lVar6);
  }
  uVar7 = thunk_FUN_03f9944c(DAT_09194c00);
  System_IO_Stream_ReadWriteTask___ctor
            (uVar7,1,param_8 & 1,lVar6,param_6,param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    System_IO_Stream__RunReadWriteTask(param_1,uVar7);
  }
  else {
    System_IO_Stream__RunReadWriteTaskWhenReady(param_1,lVar2,uVar7);
  }
  return uVar7;
}

