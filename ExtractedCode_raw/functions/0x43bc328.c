// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$GatherRenderableMeshes
// address: 0x43bc328
// body: available
// range: 0x43bc328-0x43bc41f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bc3fc to 0x75d9dec System.Array$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43bc40c to 0x43bbfc4 ChocDino.UIFX.FilterStackTextMeshPro$$GatherSubMeshes (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43bc41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__GatherRenderableMeshes(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((DAT_09517b63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184608);
    FUN_03f5c2a4(&DAT_091b0aa0);
    DAT_09517b63 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar2 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar2 != 0)) {
    if (1 < *(int *)(lVar2 + 0x34)) {
      ChocDino_UIFX_FilterStackTextMeshPro__GatherSubMeshes(param_1);
      return;
    }
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      if (*(int *)(DAT_09184608 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = **(long **)(DAT_09184608 + 0xb8);
      if (lVar2 != 0) {
        iVar1 = *(int *)(lVar2 + 0x18);
        *(undefined4 *)(lVar2 + 0x18) = 0;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

