// rea decompile_all
// name: FUN_0406c700
// address: 0x406c700
// body: available
// range: 0x406c700-0x406c84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406c844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x406c84c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0406c700(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(param_3 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_03f5c2a4(&DAT_09181970);
    puVar6 = *(undefined8 **)(param_3 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      FUN_03f95ac8(param_3);
      puVar6 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  plVar2 = (long *)FUN_04e72968(param_1,*puVar6);
  lVar4 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c(lVar4);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
  }
  lVar4 = UnityEngine_Awaitable_AwaitableAsyncMethodBuilder__get_Task(param_1,0);
  lVar3 = System_Threading_Thread__get_CurrentThread(0);
  if (lVar3 != 0) {
    iVar1 = System_Threading_Thread__get_ManagedThreadId(lVar3,0);
    if (*(int *)(DAT_09181970 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181970);
    }
    if (lVar4 != 0) {
      uVar5 = 1;
      if (iVar1 != *(int *)(*(long *)(DAT_09181970 + 0xb8) + 0x38)) {
        uVar5 = 2;
      }
      UnityEngine_Awaitable__set_CompletionThreadAffinity(lVar4,uVar5,0);
      if (plVar2 != (long *)0x0) {
        lVar7 = *param_2;
        lVar3 = param_2[3];
        lVar4 = param_2[2];
        plVar2[3] = param_2[1];
        plVar2[2] = lVar7;
        plVar2[5] = lVar3;
        plVar2[4] = lVar4;
        thunk_FUN_03f5d7b8(plVar2 + 3,0);
        lVar4 = plVar2[6];
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0406c840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

