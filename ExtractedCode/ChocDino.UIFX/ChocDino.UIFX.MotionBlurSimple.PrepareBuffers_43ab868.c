// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimple$$PrepareBuffers
// address: 0x43ab868
// body: available
// range: 0x43ab868-0x43aba67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43aba64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool ChocDino_UIFX_MotionBlurSimple__PrepareBuffers(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_09517ae6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_091b1740);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_0917cfe8);
    FUN_03f5c2a4(&DAT_091807a0);
    DAT_09517ae6 = 1;
  }
  plVar9 = (long *)(param_1 + 0x48);
  if (*plVar9 == 0) {
    if (param_2 == 0) goto LAB_043aba64;
  }
  else {
    if (param_2 == 0) {
LAB_043aba64:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    cVar1 = *(char *)(param_1 + 0x40);
    iVar3 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
    if (*plVar9 == 0) goto LAB_043aba64;
    if (iVar3 <= *(int *)(*plVar9 + 0x18)) {
      iVar4 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
      iVar3 = *(int *)(param_1 + 0x44);
      bVar2 = cVar1 != '\0';
      if (iVar4 < iVar3) {
        iVar3 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
        bVar2 = false;
        *(int *)(param_1 + 0x44) = iVar3;
      }
      goto LAB_043ab9e0;
    }
  }
  uVar5 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
  uVar6 = thunk_FUN_03f9944c(DAT_0917cfe8);
  FUN_058941e8(uVar6,uVar5,DAT_091b16f8);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  thunk_FUN_03f5d7b8(plVar9,uVar6);
  uVar5 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
  uVar6 = FUN_03f5c394(DAT_091807a0,uVar5);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar6);
  iVar3 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
  bVar2 = false;
  *(int *)(param_1 + 0x44) = iVar3;
LAB_043ab9e0:
  plVar8 = (long *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x24) * iVar3;
  if ((*plVar8 == 0) || (iVar4 = FUN_05894540(*plVar8,DAT_091b1740), iVar4 < iVar3)) {
    lVar7 = thunk_FUN_03f9944c(DAT_0917cfe8);
    FUN_058941e8(lVar7,iVar3,DAT_091b16f8);
    *plVar8 = lVar7;
    thunk_FUN_03f5d7b8(plVar8,lVar7);
    bVar2 = false;
  }
  UnityEngine_UI_VertexHelper__GetUIVertexStream(param_2,*plVar9,0);
  return bVar2;
}

