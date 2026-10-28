// rea decompile_all
// name: Cysharp.Threading.Tasks.CompilerServices.StateMachineUtility$$GetState
// address: 0x7dcf79c
// body: available
// range: 0x7dcf79c-0x7dcf91f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcf918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7dcf91c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Cysharp_Threading_Tasks_CompilerServices_StateMachineUtility__GetState(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_095261c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9b08);
    FUN_03f5c2a4(&DAT_091788f8);
    FUN_03f5c2a4(&DAT_091f0518);
    FUN_03f5c2a4(&DAT_09194bc0);
    DAT_095261c4 = 1;
  }
  if ((param_1 != 0) && (plVar1 = (long *)System_Object__GetType(param_1,0), plVar1 != (long *)0x0))
  {
    uVar2 = (**(code **)(*plVar1 + 0x708))(plVar1,0x34,*(undefined8 *)(*plVar1 + 0x710));
    if (*(int *)(DAT_09194bc0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09194bc0);
    }
    puVar4 = *(undefined8 **)(DAT_09194bc0 + 0xb8);
    lVar5 = puVar4[1];
    if (lVar5 == 0) {
      if (*(int *)(DAT_09194bc0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09194bc0);
        puVar4 = *(undefined8 **)(DAT_09194bc0 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_091788f8);
      FUN_05322d94(lVar5,uVar6,DAT_091f0518,0);
      plVar1 = (long *)(*(long *)(DAT_09194bc0 + 0xb8) + 8);
      *plVar1 = lVar5;
      thunk_FUN_03f5d7b8(plVar1,lVar5);
    }
    plVar1 = (long *)FUN_04ae3154(uVar2,lVar5,DAT_091c9b08);
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x2f8))
                                 (plVar1,param_1,*(undefined8 *)(*plVar1 + 0x300));
      if (plVar1 != (long *)0x0) {
        if (*(long *)(*plVar1 + 0x40) == *(long *)(DAT_09535420 + 0x40)) {
          puVar3 = (undefined4 *)thunk_FUN_03f99594();
          return *puVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

