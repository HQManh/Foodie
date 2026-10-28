// rea decompile_all
// name: UniRx.Examples.Sample06_ConvertToCoroutine.<ComplexCoroutineTest>d__1$$MoveNext
// address: 0x4191d94
// body: available
// range: 0x4191d94-0x4192117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4192114 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
UniRx_Examples_Sample06_ConvertToCoroutine_<ComplexCoroutineTest>d__1__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095167aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091747c0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091d5280);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091ef660);
    FUN_03f5c2a4(&DAT_091ef668);
    FUN_03f5c2a4(&DAT_091940b0);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_095167aa = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar2 = thunk_FUN_03f9944c(DAT_091940b0);
      System_Object___ctor(uVar2,0);
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar2);
      uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
      UnityEngine_WaitForSeconds___ctor(0x3f800000,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_04192114;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
      if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = 1;
      uVar2 = UniRx_Observable__Range(1,10,0);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = thunk_FUN_03f9944c(DAT_091747c0);
      FUN_070a7580(uVar3,uVar5,DAT_091ef660,0);
      uVar2 = FUN_04c45304(uVar2,uVar3,0,DAT_091d5280);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_04192114;
      local_34 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_34);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__Log(uVar2,0);
      uVar2 = thunk_FUN_03f9944c(DAT_0918ce90);
      UnityEngine_WaitForSeconds___ctor(0x40400000,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      uVar4 = 3;
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 4) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(long *)(param_1 + 0x20) != 0) {
          local_38 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
          uVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar2,0);
          return 0;
        }
LAB_04192114:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UniRx_Observable__Return(100,0);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = thunk_FUN_03f9944c(DAT_091747c0);
      FUN_070a7580(uVar3,uVar5,DAT_091ef668,0);
      uVar2 = FUN_04c45304(uVar2,uVar3,0,DAT_091d5280);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
      uVar4 = 4;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar4 = 1;
  }
  return uVar4;
}

