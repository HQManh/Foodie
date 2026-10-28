// rea decompile_all
// name: Datpt.ObserverPattern.EventManager$$StopAll
// address: 0x419d430
// body: available
// range: 0x419d430-0x419d5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419d5b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x419d5b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_ObserverPattern_EventManager__StopAll(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  
  if ((DAT_09516815 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0168);
    FUN_03f5c2a4(&DAT_091a0150);
    FUN_03f5c2a4(&DAT_09176ca8);
    FUN_03f5c2a4(&DAT_091a6960);
    FUN_03f5c2a4(&DAT_091a6968);
    FUN_03f5c2a4(&DAT_091a6970);
    FUN_03f5c2a4(&DAT_09184238);
    FUN_03f5c2a4(&DAT_091a9920);
    DAT_09516815 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  if (*(int *)(DAT_09184238 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09184238 + 0xb8) != 0) {
    FUN_06fd8888(&local_70,**(long **)(DAT_09184238 + 0xb8),DAT_091a0168);
    while( true ) {
      uVar1 = FUN_072753d4(&local_70,DAT_091a6968);
      if ((uVar1 & 1) == 0) {
        FUN_072754f4(&local_70,DAT_091a6960);
        uVar2 = thunk_FUN_03f9944c(DAT_09176ca8);
        FUN_06fd76bc(uVar2,DAT_091a0150);
        if (*(int *)(DAT_09184238 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        **(undefined8 **)(DAT_09184238 + 0xb8) = uVar2;
        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184238 + 0xb8),uVar2);
        return;
      }
      if (local_58 == 0) break;
      UnityEngine_Events_UnityEventBase__RemoveAllListeners(local_58,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

