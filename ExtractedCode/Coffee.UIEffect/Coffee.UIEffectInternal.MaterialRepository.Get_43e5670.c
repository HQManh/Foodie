// rea decompile_all
// name: Coffee.UIEffectInternal.MaterialRepository$$Get
// address: 0x43e5670
// body: available
// range: 0x43e5670-0x43e5813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e5810 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_MaterialRepository__Get
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09517d67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091782d8);
    FUN_03f5c2a4(&DAT_09187e68);
    FUN_03f5c2a4(&DAT_091b7c80);
    FUN_03f5c2a4(&DAT_091ecd18);
    FUN_03f5c2a4(&DAT_091926a0);
    FUN_03f5c2a4(&DAT_091bed20);
    DAT_09517d67 = 1;
  }
  if (*(int *)(DAT_09187e68 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187e68);
  }
  lVar3 = **(long **)(DAT_09187e68 + 0xb8);
  if (*(int *)(DAT_091926a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_091926a0 + 0xb8);
  lVar4 = puVar2[2];
  if (lVar4 == 0) {
    if (*(int *)(DAT_091926a0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_091926a0 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_091782d8);
    FUN_0530f3c8(lVar4,uVar5,DAT_091ecd18,0);
    plVar1 = (long *)(*(long *)(DAT_091926a0 + 0xb8) + 0x10);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  local_70 = 0;
  uStack_68 = 0;
  FUN_066cee64(&local_70,param_4,param_5,DAT_091bed20);
  if (lVar3 != 0) {
    FUN_0478c2d0(lVar3,param_1,param_2,param_3,lVar4,local_70,uStack_68,DAT_091b7c80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

