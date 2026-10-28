// rea decompile_all
// name: System.Runtime.Remoting.SingleCallIdentity$$AsyncObjectProcessMessage
// address: 0x748bee8
// body: available
// range: 0x748bee8-0x748c027 inclusive
// range: 0x748c098-0x748c0a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748c000 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748c024 to 0x89db2b0 FUN_089db2b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x748c098 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748c0a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_SingleCallIdentity__AsyncObjectProcessMessage
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095212bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183be0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_09187de0);
    DAT_095212bb = 1;
  }
  plVar2 = (long *)System_Activator__CreateInstance(*(undefined8 *)(param_1 + 0x48),1,0);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
        DAT_09187de0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar3 = (undefined8 *)
             System_Runtime_Remoting_Contexts_Context__CreateServerObjectSinkChain
                       (*(long *)(param_1 + 0x60),plVar2,0,0);
    lVar4 = thunk_FUN_03f99350(plVar2,DAT_09185a58);
    if (lVar4 != 0) {
      uVar5 = thunk_FUN_03f9944c(DAT_09183be0);
      uVar1 = DAT_09185a58;
      if (plVar2 == (long *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_03f99350(plVar2,DAT_09185a58);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar2,uVar1);
        }
      }
      System_Runtime_Remoting_DisposerReplySink___ctor(uVar5,param_3,lVar4);
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_089db2b0(*puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

