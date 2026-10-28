// rea decompile_all
// name: IapAdsSystem.AdsManager.<IESetUpSdk>d__88$$MoveNext
// address: 0x7305314
// body: available
// range: 0x7305314-0x730577b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7305778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_AdsManager_<IESetUpSdk>d__88__MoveNext(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_34;
  
  if ((DAT_09520486 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091e17f8);
    FUN_03f5c2a4(&DAT_0918e190);
    FUN_03f5c2a4(&DAT_09213ad8);
    DAT_09520486 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar11 == 0) goto LAB_07305778;
    goto LAB_0730565c;
  }
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_07305468:
    plVar13 = (long *)(param_1 + 0x28);
    if (*plVar13 == 0) goto LAB_07305778;
    if (*(char *)(*plVar13 + 0x10) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *plVar13 = 0;
    thunk_FUN_03f5d7b8(plVar13,0);
    if (lVar11 == 0) goto LAB_07305778;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar11 == 0) || (*(undefined1 *)(lVar11 + 0xcd) = 1, *(long *)(lVar11 + 0x58) == 0))
    goto LAB_07305778;
    uVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Mediation();
    *(undefined4 *)(lVar11 + 0x60) = uVar1;
    if ((*(long *)(lVar11 + 0x48) == 0) || (*(long *)(*(long *)(lVar11 + 0x48) + 0x20) == 0))
    goto LAB_07305778;
    iVar2 = IapAdsSystem_ConsentConfig__GetMode();
    if (iVar2 == 1) {
      lVar3 = thunk_FUN_03f9944c(DAT_0918e190);
      System_Object___ctor(lVar3,0);
      plVar13 = (long *)(param_1 + 0x28);
      *plVar13 = lVar3;
      thunk_FUN_03f5d7b8(plVar13,lVar3);
      lVar3 = *plVar13;
      if (lVar3 == 0) goto LAB_07305778;
      lVar12 = *(long *)(lVar11 + 0x48);
      *(undefined1 *)(lVar3 + 0x10) = 0;
      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar4,lVar3,DAT_091e17f8,0);
      if (lVar12 == 0) goto LAB_07305778;
      IapAdsSystem_GoogleMobileAdsConsentController__GatherConsent(lVar12,uVar4);
      goto LAB_07305468;
    }
  }
  if (*(int *)(lVar11 + 0x60) == 2) {
    plVar13 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(lVar11);
    if (plVar13 == (long *)0x0) goto LAB_07305778;
    lVar3 = *plVar13;
    uVar4 = *(undefined8 *)(lVar11 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091852f0) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_07305614;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091852f0,8);
LAB_07305614:
    pcVar8 = (code *)*puVar5;
    uVar7 = puVar5[1];
    uVar6 = 1;
LAB_07305640:
    (*pcVar8)(plVar13,uVar6,uVar4,uVar7);
  }
  else if (*(int *)(lVar11 + 0x60) == 1) {
    plVar13 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(lVar11);
    if (plVar13 == (long *)0x0) {
LAB_07305778:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar13;
    uVar4 = *(undefined8 *)(lVar11 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091852f0) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_0730559c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091852f0,8);
LAB_0730559c:
    (*(code *)*puVar5)(plVar13,1,uVar4,puVar5[1]);
    plVar13 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(lVar11);
    if (plVar13 == (long *)0x0) goto LAB_07305778;
    lVar3 = *plVar13;
    uVar4 = *(undefined8 *)(lVar11 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091852f0) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_07305634;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091852f0,8);
LAB_07305634:
    pcVar8 = (code *)*puVar5;
    uVar7 = puVar5[1];
    uVar6 = 2;
    goto LAB_07305640;
  }
  fVar14 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  *(float *)(param_1 + 0x30) = fVar14 + *(float *)(lVar11 + 0x24);
LAB_0730565c:
  uVar9 = IapAdsSystem_AdsManager__AreRequiredMediationSdksInitialized(lVar11);
  if (((uVar9 & 1) != 0) ||
     (fVar14 = (float)UnityEngine_Time__get_realtimeSinceStartup(0),
     *(float *)(param_1 + 0x30) <= fVar14)) {
    uVar9 = IapAdsSystem_AdsManager__AreRequiredMediationSdksInitialized(lVar11);
    if ((uVar9 & 1) == 0) {
      local_34 = *(undefined4 *)(lVar11 + 0x24);
      uVar4 = FUN_03f5c42c(DAT_09535450,&local_34);
      uVar4 = System_String__Format(DAT_09213ad8,uVar4,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar4,0);
    }
    uVar4 = 0;
    *(undefined1 *)(lVar11 + 0xcc) = 1;
    *(undefined4 *)(lVar11 + 200) = 0x3f800000;
  }
  else {
    fVar16 = *(float *)(lVar11 + 200);
    fVar15 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    fVar14 = -(fVar15 * 0.05);
    if (0.0 <= 0.95 - fVar16) {
      fVar14 = fVar15 * 0.05;
    }
    fVar14 = fVar16 + fVar14;
    if (ABS(0.95 - fVar16) <= fVar15 * 0.05) {
      fVar14 = 0.95;
    }
    *(float *)(lVar11 + 200) = fVar14;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return uVar4;
}

