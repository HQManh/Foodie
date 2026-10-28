// rea decompile_all
// name: ChocDino.UIFX.ColorUtils$$ConvertMeshVertexColorsToLinear
// address: 0x43a064c
// body: available
// range: 0x43a064c-0x43a0833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a0810 to 0x8626be8 UnityEngine.Mesh$$SetColors (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a0830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorUtils__ConvertMeshVertexColorsToLinear
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long *param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((DAT_09517a9c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aba78);
    FUN_03f5c2a4(&DAT_091aba90);
    FUN_03f5c2a4(&DAT_091aba98);
    FUN_03f5c2a4(&DAT_091abaa0);
    FUN_03f5c2a4(&DAT_0917be50);
    DAT_09517a9c = 1;
  }
  if (param_5 == 0) goto LAB_043a0830;
  iVar1 = UnityEngine_Mesh__get_vertexCount(param_5,0);
  lVar2 = *param_6;
  if (lVar2 == 0) {
LAB_043a06fc:
    lVar2 = thunk_FUN_03f9944c(DAT_0917be50);
    FUN_0572e238(lVar2,iVar1,DAT_091aba78);
    *param_6 = lVar2;
    thunk_FUN_03f5d7b8(param_6,lVar2);
    lVar2 = *param_6;
  }
  else if (*(int *)(lVar2 + 0x18) != iVar1) {
    *param_6 = 0;
    thunk_FUN_03f5d7b8(param_6,0);
    lVar2 = *param_6;
    if (lVar2 == 0) goto LAB_043a06fc;
  }
  UnityEngine_Mesh__GetColors(param_5,lVar2,0);
  lVar2 = *param_6;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 1) {
      return;
    }
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        lVar2 = *param_6;
        if (lVar2 == 0) goto LAB_043a0830;
        FUN_0572e758(lVar2,iVar3,DAT_091aba98);
        uVar4 = UnityEngine_Mathf__GammaToLinearSpace(0);
        param_2 = UnityEngine_Mathf__GammaToLinearSpace(param_2,0);
        param_3 = UnityEngine_Mathf__GammaToLinearSpace(param_3,0);
        FUN_0572e7b0(uVar4,param_2,param_3,param_4,lVar2,iVar3,DAT_091abaa0);
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
      lVar2 = *param_6;
    }
    UnityEngine_Mesh__SetColors(param_5,lVar2,0);
    return;
  }
LAB_043a0830:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

