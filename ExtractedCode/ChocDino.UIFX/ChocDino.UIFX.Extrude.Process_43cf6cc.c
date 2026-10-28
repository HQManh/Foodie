// rea decompile_all
// name: ChocDino.UIFX.Extrude$$Process
// address: 0x43cf6cc
// body: available
// range: 0x43cf6cc-0x43cf7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43cf7d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_Extrude__Process(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09517c2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    DAT_09517c2e = 1;
  }
  uVar1 = UnityEngine_RenderTexture__GetActive(0);
  ChocDino_UIFX_Extrude__SetupResources(param_1,param_2);
  if (*(char *)(param_1 + 0x88) != '\0') {
    ChocDino_UIFX_Extrude__UpdateMaterials(param_1);
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_043cf7a4;
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = 0;
  }
  UnityEngine_Graphics__Blit(uVar2,uVar3,uVar5,uVar4,0);
LAB_043cf7a4:
  if (*(long *)(param_1 + 0x78) != 0) {
    UnityEngine_Texture__IncrementUpdateCount(*(long *)(param_1 + 0x78),0);
    UnityEngine_RenderTexture__set_active(uVar1,0);
    return *(undefined8 *)(param_1 + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

