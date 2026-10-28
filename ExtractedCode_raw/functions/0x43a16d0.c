// rea decompile_all
// name: ChocDino.UIFX.Compositor$$SaveMeshVertexColorsAndConvertToLinear
// address: 0x43a16d0
// body: available
// range: 0x43a16d0-0x43a1903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a18e0 to 0x8626be8 UnityEngine.Mesh$$SetColors (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a1900 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_Compositor__SaveMeshVertexColorsAndConvertToLinear
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_09517aa3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aba78);
    FUN_03f5c2a4(&DAT_091aba90);
    FUN_03f5c2a4(&DAT_091aba98);
    FUN_03f5c2a4(&DAT_091abaa0);
    FUN_03f5c2a4(&DAT_0917be50);
    DAT_09517aa3 = 1;
  }
  if (param_6 == 0) goto LAB_043a1900;
  iVar1 = UnityEngine_Mesh__get_vertexCount(param_6,0);
  plVar5 = (long *)(param_5 + 0xb0);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
LAB_043a1794:
    uVar2 = thunk_FUN_03f9944c(DAT_0917be50);
    FUN_0572e238(uVar2,iVar1,DAT_091aba78);
    *(undefined8 *)(param_5 + 0xb0) = uVar2;
    thunk_FUN_03f5d7b8(plVar5,uVar2);
    uVar2 = thunk_FUN_03f9944c(DAT_0917be50);
    FUN_0572e238(uVar2,iVar1,DAT_091aba78);
    *(undefined8 *)(param_5 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0xb8),uVar2);
    lVar3 = *(long *)(param_5 + 0xb0);
  }
  else if (*(int *)(lVar3 + 0x18) != iVar1) {
    *(undefined8 *)(param_5 + 0xb0) = 0;
    thunk_FUN_03f5d7b8(plVar5,0);
    *(undefined8 *)(param_5 + 0xb8) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0xb8),0);
    lVar3 = *(long *)(param_5 + 0xb0);
    if (lVar3 == 0) goto LAB_043a1794;
  }
  UnityEngine_Mesh__GetColors(param_6,lVar3,0);
  UnityEngine_Mesh__GetColors(param_6,*(undefined8 *)(param_5 + 0xb8),0);
  lVar3 = *(long *)(param_5 + 0xb8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      return;
    }
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = *(long *)(param_5 + 0xb8);
        if (lVar3 == 0) goto LAB_043a1900;
        FUN_0572e758(lVar3,iVar4,DAT_091aba98);
        uVar6 = UnityEngine_Mathf__GammaToLinearSpace(0);
        param_2 = UnityEngine_Mathf__GammaToLinearSpace(param_2,0);
        param_3 = UnityEngine_Mathf__GammaToLinearSpace(param_3,0);
        FUN_0572e7b0(uVar6,param_2,param_3,param_4,lVar3,iVar4,DAT_091abaa0);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
      lVar3 = *(long *)(param_5 + 0xb8);
    }
    UnityEngine_Mesh__SetColors(param_6,lVar3,0);
    return;
  }
LAB_043a1900:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

