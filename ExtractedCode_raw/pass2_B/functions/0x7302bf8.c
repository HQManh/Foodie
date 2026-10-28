// rea decompile_all
// name: IapAdsSystem.AdsManager$$IsPassInterRules
// address: 0x7302bf8
// body: available
// range: 0x7302bf8-0x7303017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7303004 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7303010 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7303014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte IapAdsSystem_AdsManager__IsPassInterRules(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  byte local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  
  if ((DAT_09520469 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0920d058);
    DAT_09520469 = 1;
  }
  lVar14 = *(long *)(param_1 + 0xf0);
  if (lVar14 == 0) {
    IapAdsSystem_AdsManager__ResolveCampaignProfile(param_1);
    lVar14 = *(long *)(param_1 + 0xf0);
    if (lVar14 == 0) goto LAB_07303014;
  }
  if (*(int *)(lVar14 + 0x40) == 1) {
    bVar5 = *(char *)(param_1 + 0xb0) == '\0';
  }
  else {
    bVar5 = true;
  }
  iVar7 = IapAdsSystem_IapAdsGlobalConfig__get_MaxMainLvIndexWinned(0);
  iVar8 = IapAdsSystem_AdsManager__get_InterPassLvRq(param_1);
  iVar9 = IapAdsSystem_IapAdsGlobalConfig__get_CountLvPlayedInSession(0);
  if (*(long *)(param_1 + 0x68) != 0) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x68) + 0x14);
    iVar10 = IapAdsSystem_IapAdsGlobalConfig__get_CountLvPlayedInSession(0);
    if (*(long *)(param_1 + 0x68) != 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x68) + 0x18);
      iVar10 = iVar10 - *(int *)(param_1 + 0xa8);
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188c20);
      }
      uVar11 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
      uVar15 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      bVar6 = System_DateTime__op_GreaterThanOrEqual(uVar11,uVar15,0);
      bVar1 = false;
      if (iVar3 <= iVar9) {
        bVar1 = bVar5;
      }
      bVar2 = false;
      if (iVar8 <= iVar7) {
        bVar2 = bVar1;
      }
      bVar1 = false;
      if (iVar4 <= iVar10) {
        bVar1 = bVar2;
      }
      plVar12 = (long *)FUN_03f5c394(DAT_09180318,7);
      local_64[0] = bVar1 & bVar6;
      lVar14 = FUN_03f5c42c(DAT_09535400,local_64);
      if (plVar12 != (long *)0x0) {
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
LAB_07303008:
          uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar11,0);
        }
        if ((int)plVar12[3] != 0) {
          plVar12[4] = lVar14;
          thunk_FUN_03f5d7b8(plVar12 + 4,lVar14);
          lVar14 = *(long *)(param_1 + 0xf0);
          if (lVar14 == 0) {
            IapAdsSystem_AdsManager__ResolveCampaignProfile(param_1);
            lVar14 = *(long *)(param_1 + 0xf0);
            if (lVar14 == 0) goto LAB_07303014;
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((lVar14 != 0) &&
             (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
          goto LAB_07303008;
          if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
            plVar12[5] = lVar14;
            thunk_FUN_03f5d7b8(plVar12 + 5,lVar14);
            local_68[0] = bVar5;
            lVar14 = FUN_03f5c42c(DAT_09535400,local_68);
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_07303008;
            if (2 < *(uint *)(plVar12 + 3)) {
              plVar12[6] = lVar14;
              thunk_FUN_03f5d7b8(plVar12 + 6,lVar14);
              local_6c[0] = iVar3 <= iVar9;
              lVar14 = FUN_03f5c42c(DAT_09535400,local_6c);
              if ((lVar14 != 0) &&
                 (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)
                 ) goto LAB_07303008;
              if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
                plVar12[7] = lVar14;
                thunk_FUN_03f5d7b8(plVar12 + 7,lVar14);
                local_70[0] = iVar8 <= iVar7;
                lVar14 = FUN_03f5c42c(DAT_09535400,local_70);
                if ((lVar14 != 0) &&
                   (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar13 == 0)) goto LAB_07303008;
                if (4 < *(uint *)(plVar12 + 3)) {
                  plVar12[8] = lVar14;
                  thunk_FUN_03f5d7b8(plVar12 + 8,lVar14);
                  local_74[0] = iVar4 <= iVar10;
                  lVar14 = FUN_03f5c42c(DAT_09535400,local_74);
                  if ((lVar14 != 0) &&
                     (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar13 == 0)) goto LAB_07303008;
                  if (5 < *(uint *)(plVar12 + 3)) {
                    plVar12[9] = lVar14;
                    thunk_FUN_03f5d7b8(plVar12 + 9,lVar14);
                    local_78[0] = bVar6 & 1;
                    lVar14 = FUN_03f5c42c(DAT_09535400,local_78);
                    if ((lVar14 != 0) &&
                       (lVar13 = thunk_FUN_03f99350(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar13 == 0)) goto LAB_07303008;
                    if (6 < *(uint *)(plVar12 + 3)) {
                      plVar12[10] = lVar14;
                      thunk_FUN_03f5d7b8(plVar12 + 10,lVar14);
                      uVar11 = System_String__Format(DAT_0920d058,plVar12,0);
                      *param_2 = uVar11;
                      thunk_FUN_03f5d7b8(param_2,uVar11);
                      return bVar1 & bVar6;
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
    }
  }
LAB_07303014:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

