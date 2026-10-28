// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.Path$$AssignDecoder
// address: 0x456e6f8
// body: available
// range: 0x456e6f8-0x456e863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456e860 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_Path__AssignDecoder(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09518889 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182450);
    FUN_03f5c2a4(&DAT_09182fc8);
    FUN_03f5c2a4(&DAT_09187928);
    FUN_03f5c2a4(&DAT_09188f18);
    DAT_09518889 = 1;
  }
  lVar3 = DAT_09188f18;
  *(int *)(param_1 + 0x20) = param_2;
  plVar4 = *(long **)(lVar3 + 0xb8);
  if (param_2 == 2) {
    lVar3 = plVar4[2];
    if (lVar3 == 0) {
      uVar1 = thunk_FUN_03f9944c(DAT_09182fc8);
      System_Object___ctor(uVar1,0);
      puVar2 = (undefined8 *)(*(long *)(DAT_09188f18 + 0xb8) + 0x10);
      *puVar2 = uVar1;
      thunk_FUN_03f5d7b8(puVar2,uVar1);
      lVar3 = *(long *)(*(long *)(DAT_09188f18 + 0xb8) + 0x10);
    }
  }
  else if (param_2 == 0) {
    lVar3 = plVar4[1];
    if (lVar3 == 0) {
      uVar1 = thunk_FUN_03f9944c(DAT_09187928);
      System_Object___ctor(uVar1,0);
      puVar2 = (undefined8 *)(*(long *)(DAT_09188f18 + 0xb8) + 8);
      *puVar2 = uVar1;
      thunk_FUN_03f5d7b8(puVar2,uVar1);
      lVar3 = *(long *)(*(long *)(DAT_09188f18 + 0xb8) + 8);
    }
  }
  else {
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      uVar1 = thunk_FUN_03f9944c(DAT_09182450);
      System_Object___ctor(uVar1,0);
      **(undefined8 **)(DAT_09188f18 + 0xb8) = uVar1;
      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09188f18 + 0xb8),uVar1);
      lVar3 = **(long **)(DAT_09188f18 + 0xb8);
    }
  }
  *(long *)(param_1 + 0xd8) = lVar3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xd8));
  return;
}

