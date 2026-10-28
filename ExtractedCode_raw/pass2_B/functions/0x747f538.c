// rea decompile_all
// name: System.Runtime.Remoting.RemotingConfiguration$$IsRemotelyActivatedClientType
// address: 0x747f538
// body: available
// range: 0x747f538-0x747f683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747f67c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747f680 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747f678) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Runtime_Remoting_RemotingConfiguration__IsRemotelyActivatedClientType
                 (undefined8 param_1)

{
  long *plVar1;
  char local_2c [4];
  undefined8 local_28;
  
  if ((DAT_09521263 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e90);
    FUN_03f5c2a4(&DAT_09189ec0);
    DAT_09521263 = 1;
  }
  local_28 = 0;
  local_2c[0] = '\0';
  if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_2c[0] = '\0';
  local_28 = *(undefined8 *)(*(long *)(DAT_09189ec0 + 0xb8) + 0x40);
  System_Threading_Monitor__Enter(local_28,local_2c,0);
  if (*(int *)(DAT_09189ec0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = *(long **)(*(long *)(DAT_09189ec0 + 0xb8) + 0x28);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar1 = (long *)(**(code **)(*plVar1 + 0x308))(plVar1,param_1,*(undefined8 *)(*plVar1 + 0x310));
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(DAT_09180e90 + 0x130) <= *(byte *)(*plVar1 + 0x130)) {
      if (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09180e90 + 0x130) * 8 + -8) !=
          DAT_09180e90) {
        plVar1 = (long *)0x0;
      }
      goto LAB_0747f648;
    }
  }
  plVar1 = (long *)0x0;
LAB_0747f648:
  if (local_2c[0] != '\0') {
    System_Threading_Monitor__Exit(local_28,0);
  }
  return plVar1;
}

