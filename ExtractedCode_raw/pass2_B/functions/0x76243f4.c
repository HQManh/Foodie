// rea decompile_all
// name: System.Threading.OSSpecificSynchronizationContext$$InvocationEntry
// address: 0x76243f4
// body: available
// range: 0x76243f4-0x7624523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76244d4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76244d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7624520 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_OSSpecificSynchronizationContext__InvocationEntry(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong local_18;
  
  if ((DAT_0952215c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192de8);
    DAT_0952215c = 1;
  }
  local_18 = 0;
  local_18 = System_Runtime_InteropServices_GCHandle__op_Explicit(param_1,0);
  if (local_18 != 0) {
    if ((local_18 & 1) == 0) {
      puVar1 = (undefined8 *)System_IntPtr__op_Explicit(local_18,0);
      plVar5 = (long *)*puVar1;
    }
    else {
      plVar5 = (long *)System_Runtime_InteropServices_GCHandle__GetTarget(local_18,0);
    }
    System_Runtime_InteropServices_GCHandle__Free(&local_18,0);
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_09192de8 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09192de8 + 0x130) * 8 + -8) !=
          DAT_09192de8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      lVar4 = plVar5[2];
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),plVar5[3],*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09203d08);
  System_InvalidOperationException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091cd378);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

