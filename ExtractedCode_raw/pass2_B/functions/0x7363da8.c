// rea decompile_all
// name: Lofelt.NiceVibrations.HapticController$$Init
// address: 0x7363da8
// body: available
// range: 0x7363da8-0x7363ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7363ff0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 Lofelt_NiceVibrations_HapticController__Init(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09520884 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183ae0);
    FUN_03f5c2a4(&DAT_09183f28);
    FUN_03f5c2a4(&DAT_09184fd0);
    FUN_03f5c2a4(&DAT_09187c48);
    FUN_03f5c2a4(&DAT_091eb078);
    FUN_03f5c2a4(&DAT_09191238);
    DAT_09520884 = 1;
  }
  if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = DAT_09184fd0;
  if (**(char **)(DAT_09184fd0 + 0xb8) != '\0') {
LAB_07363fc8:
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = DAT_09184fd0;
    }
    return *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x1c);
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191238);
  System_Object___ctor(lVar2,0);
  if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  **(undefined1 **)(DAT_09184fd0 + 0xb8) = 1;
  uVar3 = System_Threading_SynchronizationContext__get_Current(0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    thunk_FUN_03f5d7b8();
    lVar4 = *(long *)(*(long *)(DAT_09184fd0 + 0xb8) + 8);
    uVar3 = thunk_FUN_03f9944c(DAT_09183f28);
    System_Timers_ElapsedEventHandler___ctor(uVar3,lVar2,DAT_091eb078,0);
    if (lVar4 != 0) {
      System_Timers_Timer__add_Elapsed(lVar4,uVar3,0);
      if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09516faa == '\0') {
        FUN_03f5c2a4(&DAT_09183ae0);
        DAT_09516faa = '\x01';
      }
      if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = DAT_09184fd0;
      if (*(char *)(*(long *)(DAT_09183ae0 + 0xb8) + 9) != '\0') {
        if (*(int *)(DAT_09187c48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Lofelt_NiceVibrations_LofeltHaptics__Initialize();
        if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Lofelt_NiceVibrations_DeviceCapabilities__Init();
        if (DAT_09515cea == '\0') {
          FUN_03f5c2a4(&DAT_09183ae0);
          DAT_09515cea = '\x01';
        }
        if (*(int *)(DAT_09183ae0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183ae0);
        }
        uVar1 = *(undefined1 *)(*(long *)(DAT_09183ae0 + 0xb8) + 8);
        if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = DAT_09184fd0;
        *(undefined1 *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x1c) = uVar1;
      }
      goto LAB_07363fc8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

