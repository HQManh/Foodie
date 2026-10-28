// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskScheduler$$PublishUnobservedTaskException
// address: 0x7da9828
// body: available
// range: 0x7da9828-0x7da9be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da9b2c to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7da9b6c to 0x85ef7dc UnityEngine.Debug$$LogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7da9bac to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7da9bdc to 0x85f6aa8 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7da9be0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskScheduler__PublishUnobservedTaskException(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09525ed1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188c68);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_0918c628);
    FUN_03f5c2a4(&DAT_09212528);
    DAT_09525ed1 = 1;
  }
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c628);
  }
  plVar3 = *(long **)(DAT_0918c628 + 0xb8);
  if ((char)plVar3[1] == '\0') {
    if ((*(byte *)(DAT_09188c68 + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_09188c68 + 0x130) * 8 + -8) ==
        DAT_09188c68)) {
      return;
    }
  }
  if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c628);
    plVar3 = *(long **)(DAT_0918c628 + 0xb8);
  }
  if (*plVar3 == 0) {
    if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c628);
      plVar3 = *(long **)(DAT_0918c628 + 0xb8);
    }
    if (*(int *)((long)plVar3 + 0xc) == 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
      uVar4 = System_String__Concat(DAT_09212528,uVar4,0);
    }
    if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918c628);
    }
    iVar1 = *(int *)(*(long *)(DAT_0918c628 + 0xb8) + 0xc);
    if (2 < iVar1) {
      if (iVar1 == 3) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__Log(uVar4,0);
        return;
      }
      if (iVar1 != 4) {
        return;
      }
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogException(param_1,0);
      return;
    }
    if (iVar1 == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(uVar4,0);
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(uVar4,0);
    return;
  }
  if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c628);
    plVar3 = *(long **)(DAT_0918c628 + 0xb8);
  }
  if ((char)plVar3[2] != '\0') {
    lVar2 = System_Threading_Thread__get_CurrentThread(0);
    if (lVar2 == 0) goto LAB_07da9be0;
    iVar1 = System_Threading_Thread__get_ManagedThreadId(lVar2,0);
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091892e0);
    }
    if (DAT_09525ec7 == '\0') {
      FUN_03f5c2a4(&DAT_091892e0);
      DAT_09525ec7 = '\x01';
    }
    if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (iVar1 != *(int *)(*(long *)(DAT_091892e0 + 0xb8) + 0x10)) {
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095261c7 == '\0') {
        FUN_03f5c2a4(&DAT_091892e0);
        DAT_095261c7 = '\x01';
      }
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = *(long **)(*(long *)(DAT_091892e0 + 0xb8) + 0x20);
      if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918c628);
      }
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07da9a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x188))
                  (plVar3,*(undefined8 *)(*(long *)(DAT_0918c628 + 0xb8) + 0x18),param_1,
                   *(undefined8 *)(*plVar3 + 400));
        return;
      }
      goto LAB_07da9be0;
    }
  }
  if (*(int *)(DAT_0918c628 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c628);
  }
  lVar2 = **(long **)(DAT_0918c628 + 0xb8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07da99e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_1,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
LAB_07da9be0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

