// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$GetDynamicPropertyCollection
// address: 0x74916b8
// body: available
// range: 0x74916b8-0x7491733 inclusive
// range: 0x7491770-0x749184b inclusive
// range: 0x7491870-0x74918b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7491730 to 0x7486ba0 System.Runtime.Remoting.RemotingServices$$IsTransparentProxy (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74918b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Remoting_Contexts_Context__GetDynamicPropertyCollection
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_09521310 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_09183e98);
    FUN_03f5c2a4(&DAT_09189ed8);
    DAT_09521310 = 1;
  }
  if ((param_1 != 0) && (param_2 == 0)) {
    if (*(int *)(DAT_09189ed8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
                    /* WARNING: Subroutine does not return */
    System_Runtime_Remoting_RemotingServices__IsTransparentProxy(param_1,0);
  }
  if (param_1 != 0 || param_2 == 0) {
    if (param_1 != 0 || param_2 != 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar2 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09201198);
      System_ArgumentException___ctor(uVar2,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091c5fb8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar4);
    }
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(*(long *)(DAT_09182b00 + 0xb8) + 0x20) == 0) {
      uVar2 = thunk_FUN_03f9944c(DAT_09183e98);
      System_Runtime_Remoting_Contexts_DynamicPropertyCollection___ctor();
      if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar3 = (undefined8 *)(*(long *)(DAT_09182b00 + 0xb8) + 0x20);
      *puVar3 = uVar2;
      thunk_FUN_03f5d7b8(puVar3,uVar2);
    }
    if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(DAT_09182b00 + 0xb8) + 0x20);
  }
  else {
    plVar5 = (long *)(param_2 + 0x48);
    lVar1 = *plVar5;
    if (lVar1 == 0) {
      lVar1 = thunk_FUN_03f9944c(DAT_09183e98);
      System_Runtime_Remoting_Contexts_DynamicPropertyCollection___ctor();
      *plVar5 = lVar1;
      thunk_FUN_03f5d7b8(plVar5,lVar1);
      lVar1 = *plVar5;
    }
  }
  return lVar1;
}

