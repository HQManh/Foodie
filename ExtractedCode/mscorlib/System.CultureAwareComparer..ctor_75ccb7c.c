// rea decompile_all
// name: System.CultureAwareComparer$$.ctor
// address: 0x75ccb7c
// body: available
// range: 0x75ccb7c-0x75ccd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ccce0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ccd90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_CultureAwareComparer___ctor(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  
  if ((DAT_09521ddf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171230);
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09171238);
    FUN_03f5c2a4(&DAT_09182800);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_09216e78);
    FUN_03f5c2a4(&DAT_09216ea0);
    FUN_03f5c2a4(&DAT_09216e48);
    DAT_09521ddf = 1;
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Object___ctor(param_1,0);
  uVar4 = DAT_09171230;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(uVar4);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09216e48,uVar4,0);
  lVar2 = DAT_091827f8;
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_091827f8 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != DAT_091827f8))
    goto LAB_075ccce0;
    *(long **)(param_1 + 0x10) = plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_075ccce0;
  }
  thunk_FUN_03f5d7b8(param_1 + 0x10,plVar5);
  uVar3 = System_Runtime_Serialization_SerializationInfo__GetBoolean(param_2,DAT_09216e78,0);
  uVar4 = System_Type__GetTypeFromHandle(DAT_09171238);
  plVar5 = (long *)System_Runtime_Serialization_SerializationInfo__GetValueNoThrow
                             (param_2,DAT_09216ea0,uVar4,0);
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_09182800 + 0x40)) {
LAB_075ccce0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar5);
    }
    puVar6 = (undefined4 *)thunk_FUN_03f99594();
    *(undefined4 *)(param_1 + 0x18) = *puVar6;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar3 & 1;
  return;
}

