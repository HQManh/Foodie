// rea decompile_all
// name: Microsoft.NET.StringTools.WeakStringCache.StringWeakHandle$$get_IsUsed
// address: 0x73ee278
// body: available
// range: 0x73ee278-0x73ee2f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ee2f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Microsoft_NET_StringTools_WeakStringCache_StringWeakHandle__get_IsUsed(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if ((uVar1 & 1) == 0) {
      plVar2 = (long *)System_IntPtr__op_Explicit();
      lVar3 = *plVar2;
    }
    else {
      lVar3 = System_Runtime_InteropServices_GCHandle__GetTarget(uVar1,0);
    }
    return lVar3 != 0;
  }
  thunk_FUN_03fc39d4(&DAT_091870e0);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_09203d08);
  System_InvalidOperationException___ctor(uVar4,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091cd378);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

