// rea decompile_all
// name: IapAdsSystem.MulticallAdsLoader$$TryPreloadNext
// address: 0x7307198
// body: available
// range: 0x7307198-0x73073c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73072e8 to 0x730744c IapAdsSystem.MulticallAdsLoader$$<TryPreloadNext>g__Load|15_0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73073bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73073c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MulticallAdsLoader__TryPreloadNext(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  float local_24;
  
  if ((DAT_09520495 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0920bf60);
    DAT_09520495 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x18), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x18) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (-1 < (int)uVar1) {
      if ((uint)*(long *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + 0x30);
      if (lVar5 == 0) goto LAB_073073bc;
      uVar3 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),
                         *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20),
                         *(undefined8 *)(lVar5 + 0x28));
      if ((uVar3 & 1) != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    plVar7 = (long *)(param_1 + 0x30);
    lVar5 = *plVar7;
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == 0) {
      if (lVar5 != 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 == 0)) goto LAB_073073bc;
        UnityEngine_MonoBehaviour__StopCoroutine(lVar6,lVar5,0);
        *plVar7 = 0;
        thunk_FUN_03f5d7b8(plVar7,0);
      }
      IapAdsSystem_MulticallAdsLoader__<TryPreloadNext>g__Load_15_0(param_1);
      return;
    }
    if (lVar5 == 0) {
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
        if (*(int *)(param_1 + 0x1c) == *(int *)(lVar5 + 0x18) + -1) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = System_Math__Min(6,iVar2 + -1,0);
          dVar10 = (double)System_Math__Pow(0x4000000000000000,(double)iVar2,0);
          fVar9 = (float)dVar10;
        }
        else {
          fVar9 = (float)UnityEngine_Random__get_value(0);
          fVar9 = fVar9 * 0.1;
        }
        *(float *)(param_1 + 0x24) = fVar9;
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
          local_24 = fVar9;
          uVar4 = FUN_03f5c42c(DAT_09535450,&local_24);
          uVar4 = System_String__Format(DAT_0920bf60,uVar8,uVar4,0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__Log(uVar4,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
            uVar4 = IapAdsSystem_MulticallAdsLoader__<TryPreloadNext>g__IEWaitReload_15_1(param_1);
            if (lVar5 != 0) {
              lVar5 = UnityEngine_MonoBehaviour__StartCoroutine(lVar5,uVar4,0);
              *plVar7 = lVar5;
              thunk_FUN_03f5d7b8(plVar7,lVar5);
              return;
            }
          }
        }
      }
LAB_073073bc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

