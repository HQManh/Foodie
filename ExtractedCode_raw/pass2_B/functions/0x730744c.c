// rea decompile_all
// name: IapAdsSystem.MulticallAdsLoader$$<TryPreloadNext>g__Load|15_0
// address: 0x730744c
// body: available
// range: 0x730744c-0x7307637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7307630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7307634 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MulticallAdsLoader__<TryPreloadNext>g__Load_15_0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09520499 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09206f78);
    DAT_09520499 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + 0x18), lVar8 != 0)) {
    uVar2 = *(uint *)(lVar8 + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = iVar1 / (int)uVar2;
    }
    uVar3 = iVar1 - iVar4 * uVar2;
    *(uint *)(param_1 + 0x1c) = uVar3;
    if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar7 = *(long *)(lVar7 + 0x38);
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar9,*(undefined8 *)(lVar7 + 0x28))
      ;
      local_34 = *(undefined4 *)(param_1 + 0x1c);
      uVar5 = FUN_03f5c42c(DAT_09535420,&local_34);
      local_38 = *(undefined4 *)(param_1 + 0x20);
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_38);
      uVar5 = System_String__Format(DAT_09206f78,uVar5,uVar9,uVar6,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__Log(uVar5,0);
      plVar10 = (long *)(param_1 + 0x38);
      if (*plVar10 != 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar7 == 0)) goto LAB_07307630;
        UnityEngine_MonoBehaviour__StopCoroutine(lVar7,*plVar10,0);
        *plVar10 = 0;
        thunk_FUN_03f5d7b8(plVar10,0);
      }
      lVar7 = *(long *)(param_1 + 0x10);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
        lVar8 = 0x2c;
        if (*(int *)(param_1 + 0x1c) != *(int *)(*(long *)(lVar7 + 0x18) + 0x18) + -1) {
          lVar8 = 0x28;
        }
        fVar11 = *(float *)(lVar7 + lVar8);
        *(float *)(param_1 + 0x28) = fVar11;
        if (0.5 < fVar11) {
          lVar7 = *(long *)(lVar7 + 0x20);
          uVar5 = IapAdsSystem_MulticallAdsLoader__<TryPreloadNext>g__IETimeOut_15_2(param_1);
          if (lVar7 == 0) goto LAB_07307630;
          lVar7 = UnityEngine_MonoBehaviour__StartCoroutine(lVar7,uVar5,0);
          *plVar10 = lVar7;
          thunk_FUN_03f5d7b8(plVar10,lVar7);
        }
        return;
      }
    }
  }
LAB_07307630:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

