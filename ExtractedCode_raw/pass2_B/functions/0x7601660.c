// rea decompile_all
// name: System.Delegate$$GetMethodImpl
// address: 0x7601660
// body: available
// range: 0x7601660-0x7601757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7601754 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Delegate__GetMethodImpl(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  if ((DAT_09521fd9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188228);
    DAT_09521fd9 = 1;
  }
  plVar5 = (long *)(param_1 + 0x58);
  uVar3 = System_Reflection_MethodInfo__op_Inequality(*plVar5,0,0);
  if (((uVar3 & 1) != 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_0760173c;
  if (*(char *)(param_1 + 0x70) == '\0') {
    plVar4 = (long *)System_Reflection_RuntimeMethodInfo__GetMethodFromHandleNoGenericCheck
                               (*(long *)(param_1 + 0x28),0);
    lVar2 = DAT_09188228;
    if (plVar4 == (long *)0x0) goto LAB_076016c0;
    bVar1 = *(byte *)(DAT_09188228 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09188228)) {
LAB_0760174c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4,lVar2);
    }
    *plVar5 = (long)plVar4;
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_0760174c;
  }
  else {
    plVar4 = (long *)FUN_03f72934(param_1);
LAB_076016c0:
    *plVar5 = (long)plVar4;
  }
  thunk_FUN_03f5d7b8(plVar5,plVar4);
LAB_0760173c:
  return *plVar5;
}

