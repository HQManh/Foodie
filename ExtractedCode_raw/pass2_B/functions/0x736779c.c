// rea decompile_all
// name: Lofelt.NiceVibrations.HapticSource$$.cctor
// address: 0x736779c
// body: available
// range: 0x736779c-0x7367973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x736794c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7367970 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lofelt_NiceVibrations_HapticSource___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095208aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09184fd0);
    FUN_03f5c2a4(&DAT_091eb080);
    FUN_03f5c2a4(&DAT_091eb088);
    FUN_03f5c2a4(&DAT_09191250);
    DAT_095208aa = 1;
  }
  if (*(int *)(DAT_09184fd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = *(undefined8 *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x30);
  if (*(int *)(DAT_09191250 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09191250);
  }
  uVar6 = **(undefined8 **)(DAT_09191250 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,uVar6,DAT_091eb080,0);
  plVar3 = (long *)System_Delegate__Combine(uVar5,uVar2,0);
  lVar1 = DAT_09180e78;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x30);
    *plVar4 = 0;
  }
  else {
    if (*plVar3 != DAT_09180e78) goto LAB_07367948;
    plVar4 = (long *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x30);
    *plVar4 = (long)plVar3;
    if (*plVar3 != lVar1) goto LAB_07367948;
  }
  thunk_FUN_03f5d7b8(plVar4,plVar3);
  uVar2 = *(undefined8 *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x38);
  uVar6 = **(undefined8 **)(DAT_09191250 + 0xb8);
  uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar5,uVar6,DAT_091eb088,0);
  plVar3 = (long *)System_Delegate__Combine(uVar2,uVar5,0);
  lVar1 = DAT_09180e78;
  if (plVar3 == (long *)0x0) {
    plVar4 = (long *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x38);
    *plVar4 = 0;
LAB_0736795c:
    thunk_FUN_03f5d7b8(plVar4,plVar3);
    return;
  }
  if (*plVar3 == DAT_09180e78) {
    plVar4 = (long *)(*(long *)(DAT_09184fd0 + 0xb8) + 0x38);
    *plVar4 = (long)plVar3;
    if (*plVar3 == lVar1) goto LAB_0736795c;
  }
LAB_07367948:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(plVar3);
}

