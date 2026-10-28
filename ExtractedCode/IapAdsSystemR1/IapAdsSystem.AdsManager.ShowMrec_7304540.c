// rea decompile_all
// name: IapAdsSystem.AdsManager$$ShowMrec
// address: 0x7304540
// body: available
// range: 0x7304540-0x73049ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7304754 to 0x730196c IapAdsSystem.AdsManager$$HidenMrec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73049fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__ShowMrec(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_48;
  
  if ((DAT_0952046e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180fb0);
    FUN_03f5c2a4(&DAT_09180fd8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_091852f8);
    FUN_03f5c2a4(&DAT_09185658);
    FUN_03f5c2a4(&DAT_091884a0);
    FUN_03f5c2a4(&DAT_0920d060);
    FUN_03f5c2a4(&DAT_091f6ca0);
    FUN_03f5c2a4(&DAT_0920d310);
    DAT_0952046e = 1;
  }
  local_48 = 0;
  uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseAds(0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_0920d310,0);
    IapAdsSystem_AdsManager__HidenMrec(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar1 = IapAdsSystem_AdsManager_AdsNetworkConfig__get_Mrec();
    local_68 = DAT_09180fd8;
    uStack_60 = 0xffffffffffffffff;
    local_58 = iVar1;
    uVar3 = System_Enum__ToString(&local_68,0);
    local_80 = DAT_091884a0;
    uStack_78 = 0xffffffffffffffff;
    local_70 = param_2;
    uVar4 = System_Enum__ToString(&local_80,0);
    uVar3 = System_String__Concat(DAT_0920d060,uVar3,DAT_091f6ca0,uVar4,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar3,0);
    if (*(int *)(param_1 + 0x60) == 2) {
      if (iVar1 == 0) {
        return;
      }
      plVar5 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091852f0) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_073047d0;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852f0,6);
LAB_073047d0:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        lVar7 = thunk_FUN_03f9944c(DAT_09180fb0);
        System_Object___ctor(lVar7,0);
        local_68 = DAT_091884a0;
        uStack_60 = 0xffffffffffffffff;
        local_58 = param_2;
        uVar3 = System_Enum__ToString(&local_68,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x10) = uVar3;
          thunk_FUN_03f5d7b8();
          if (plVar5 != (long *)0x0) {
            lVar8 = *plVar5;
            uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar2 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09185658) {
                  puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_07304888;
                }
                uVar2 = uVar2 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar2 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185658,0);
LAB_07304888:
            (*(code *)*puVar6)(plVar5,lVar7,puVar6[1]);
            lVar7 = *(long *)(param_1 + 0xb8);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              return;
            }
            return;
          }
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x60) != 1) {
        return;
      }
      if (iVar1 != 2) {
        return;
      }
      plVar5 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091852f0) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
              goto LAB_073048c4;
            }
            uVar2 = uVar2 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852f0,6);
LAB_073048c4:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_091852f8) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0730492c;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091852f8,0);
LAB_0730492c:
          uVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar7 = IapAdsSystem_AdsManager__get_MaxMediation(param_1);
          if (lVar7 != 0) {
            lVar7 = FUN_039afee4(6,DAT_091852f0,lVar7);
            lVar8 = thunk_FUN_03f9944c(DAT_09180fb0);
            System_Object___ctor(lVar8,0);
            local_68 = DAT_091884a0;
            uStack_60 = 0xffffffffffffffff;
            local_58 = param_2;
            uVar3 = System_Enum__ToString(&local_68,0);
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x10) = uVar3;
              thunk_FUN_03f5d7b8();
              if (lVar7 != 0) {
                FUN_039aff78(0,DAT_09185658,lVar7,lVar8);
                lVar7 = *(long *)(param_1 + 0xb8);
                if (lVar7 != 0) {
                  (**(code **)(lVar7 + 0x18))
                            (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
                  return;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

