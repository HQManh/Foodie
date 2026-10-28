// rea decompile_all
// name: System.RuntimeType$$.cctor
// address: 0x75f9128
// body: available
// range: 0x75f9128-0x75f94c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f94a8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f94c0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_RuntimeType___cctor(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if ((DAT_09521f71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171570);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_091732f8);
    DAT_09521f71 = 1;
  }
  lVar2 = DAT_09535628;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
  if (plVar3 == (long *)0x0) {
    **(undefined8 **)(DAT_0918a400 + 0xb8) = 0;
  }
  else {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
        DAT_0918a400)) goto LAB_075f94a4;
    **(long **)(DAT_0918a400 + 0xb8) = (long)plVar3;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
        DAT_0918a400)) goto LAB_075f94a4;
  }
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918a400 + 0xb8),plVar3);
  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_09535470 + 0x20,0);
  lVar2 = DAT_0918a400;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 8);
    *plVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918a400 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400))
    goto LAB_075f94a4;
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 8);
    *plVar4 = (long)plVar3;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_075f94a4;
  }
  thunk_FUN_03f5d7b8(plVar4,plVar3);
  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
  lVar2 = DAT_0918a400;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x10);
    *plVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918a400 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400))
    goto LAB_075f94a4;
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x10);
    *plVar4 = (long)plVar3;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_075f94a4;
  }
  thunk_FUN_03f5d7b8(plVar4,plVar3);
  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
  lVar2 = DAT_0918a400;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x18);
    *plVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918a400 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400))
    goto LAB_075f94a4;
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x18);
    *plVar4 = (long)plVar3;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_075f94a4;
  }
  thunk_FUN_03f5d7b8(plVar4,plVar3);
  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_09171570,0);
  lVar2 = DAT_0918a400;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x20);
    *plVar4 = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918a400 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918a400))
    goto LAB_075f94a4;
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x20);
    *plVar4 = (long)plVar3;
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_075f94a4;
  }
  thunk_FUN_03f5d7b8(plVar4,plVar3);
  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_091732f8,0);
  lVar2 = DAT_0918a400;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x38);
    *plVar4 = 0;
LAB_075f94b4:
    thunk_FUN_03f5d7b8(plVar4,plVar3);
    return;
  }
  bVar1 = *(byte *)(DAT_0918a400 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == DAT_0918a400)) {
    plVar4 = (long *)(*(long *)(DAT_0918a400 + 0xb8) + 0x38);
    *plVar4 = (long)plVar3;
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) goto LAB_075f94b4;
  }
LAB_075f94a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(plVar3);
}

