// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlBanner$$CalculateScreenPosMrec
// address: 0x73100e4
// body: available
// range: 0x73100e4-0x7310517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7310504 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7310510 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7310514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float IapAdsSystem_GoogleMobileAdsControlBanner__CalculateScreenPosMrec(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_28;
  float local_24;
  
  if ((DAT_095204f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091fd4b8);
    DAT_095204f2 = 1;
  }
  fVar9 = (float)UnityEngine_Screen__get_dpi(0);
  if (fVar9 <= 0.0) {
    fVar9 = 160.0;
  }
  else {
    fVar9 = (float)UnityEngine_Screen__get_dpi(0);
  }
  iVar1 = UnityEngine_Screen__get_width(0);
  iVar2 = UnityEngine_Screen__get_height(0);
  fVar12 = (float)iVar2 / (fVar9 / 160.0);
  fVar13 = 90.0;
  if (90.0 <= fVar12 * 0.15) {
    fVar13 = fVar12 * 0.15;
  }
  lVar3 = FUN_03f5c394(DAT_09180528,3);
  if (lVar3 == 0) {
LAB_07310514:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = (uint)*(ulong *)(lVar3 + 0x18);
  if (uVar6 != 0) {
    fVar10 = fVar12 * 0.5;
    fVar11 = fVar10 + 50.0;
    *(float *)(lVar3 + 0x20) = fVar11;
    if ((uVar6 != 1) && (*(float *)(lVar3 + 0x24) = (fVar12 - fVar13) + -10.0 + -250.0, 2 < uVar6))
    {
      *(float *)(lVar3 + 0x28) = (fVar10 + (fVar10 - fVar13) * 0.5) - fVar10;
      if (1 < (int)uVar6) {
        lVar7 = (*(ulong *)(lVar3 + 0x18) & 0xffffffff) - 1;
        pfVar8 = (float *)(lVar3 + 0x24);
        do {
          fVar13 = *pfVar8;
          if (*pfVar8 <= fVar11) {
            fVar13 = fVar11;
          }
          fVar11 = fVar13;
          lVar7 = lVar7 + -1;
          pfVar8 = pfVar8 + 1;
        } while (lVar7 != 0);
      }
      plVar4 = (long *)FUN_03f5c394(DAT_09180318,7);
      local_24 = fVar9;
      lVar3 = FUN_03f5c42c(DAT_09535450,&local_24);
      if (plVar4 == (long *)0x0) goto LAB_07310514;
      if ((lVar3 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_07310508:
        uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar3;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar3);
        local_28 = UnityEngine_Screen__get_width(0);
        lVar3 = FUN_03f5c42c(DAT_09535420,&local_28);
        if ((lVar3 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
        goto LAB_07310508;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = lVar3;
          thunk_FUN_03f5d7b8(plVar4 + 5,lVar3);
          local_64 = UnityEngine_Screen__get_height(0);
          lVar3 = FUN_03f5c42c(DAT_09535420,&local_64);
          if ((lVar3 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
          goto LAB_07310508;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar3;
            fVar9 = (float)iVar1 / (fVar9 / 160.0);
            thunk_FUN_03f5d7b8(plVar4 + 6,lVar3);
            local_68 = fVar9;
            lVar3 = FUN_03f5c42c(DAT_09535450,&local_68);
            if ((lVar3 != 0) &&
               (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
            goto LAB_07310508;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
              plVar4[7] = lVar3;
              thunk_FUN_03f5d7b8(plVar4 + 7,lVar3);
              local_6c = fVar12;
              lVar3 = FUN_03f5c42c(DAT_09535450,&local_6c);
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
              goto LAB_07310508;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = lVar3;
                fVar9 = fVar9 * 0.5 + -150.0;
                thunk_FUN_03f5d7b8(plVar4 + 8,lVar3);
                local_70 = fVar9;
                lVar3 = FUN_03f5c42c(DAT_09535450,&local_70);
                if ((lVar3 != 0) &&
                   (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
                goto LAB_07310508;
                if (5 < *(uint *)(plVar4 + 3)) {
                  plVar4[9] = lVar3;
                  thunk_FUN_03f5d7b8(plVar4 + 9,lVar3);
                  local_74 = fVar11;
                  lVar3 = FUN_03f5c42c(DAT_09535450,&local_74);
                  if ((lVar3 != 0) &&
                     (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)
                     ) goto LAB_07310508;
                  if (6 < *(uint *)(plVar4 + 3)) {
                    plVar4[10] = lVar3;
                    thunk_FUN_03f5d7b8(plVar4 + 10,lVar3);
                    uVar5 = System_String__Format(DAT_091fd4b8,plVar4,0);
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_091835d0);
                    }
                    UnityEngine_Debug__Log(uVar5,0);
                    return fVar9;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

