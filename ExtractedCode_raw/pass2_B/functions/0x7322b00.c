// rea decompile_all
// name: IapAdsSystem.MaxAdsManager$$OnMaxSdkInitialized
// address: 0x7322b00
// body: available
// range: 0x7322b00-0x7322f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7322f7c to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7322f80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsManager__OnMaxSdkInitialized(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_68;
  
  if ((DAT_095205b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09187f00);
    FUN_03f5c2a4(&DAT_09188558);
    FUN_03f5c2a4(&DAT_091926b8);
    FUN_03f5c2a4(&DAT_091926c8);
    FUN_03f5c2a4(&DAT_091926d8);
    FUN_03f5c2a4(&DAT_0921b4f8);
    FUN_03f5c2a4(&DAT_09216fe8);
    FUN_03f5c2a4(&DAT_0921b4c8);
    FUN_03f5c2a4(&DAT_0921ab40);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_0921a100);
    FUN_03f5c2a4(&DAT_091f9ed8);
    DAT_095205b2 = 1;
  }
  if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = UnityEngine_Application__get_platform(0);
  uVar5 = DAT_0921a100;
  uVar10 = DAT_09216fe8;
  uVar7 = DAT_091f9ed8;
  uVar12 = DAT_091f5700;
  local_68 = DAT_091f5700;
  if (iVar2 == 8) {
    if (*(int *)(DAT_09187f00 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = **(undefined8 **)(DAT_09187f00 + 0xb8);
    uVar6 = (*(undefined8 **)(DAT_09187f00 + 0xb8))[1];
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    local_68 = 0;
    uVar5 = DAT_0921b4c8;
    uVar7 = DAT_0921b4f8;
    uVar10 = DAT_0921ab40;
  }
  lVar11 = *(long *)(param_1 + 0x60);
  lVar3 = thunk_FUN_03f9944c(DAT_091926c8);
  *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
  System_Object___ctor(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar10;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar10);
  *(long *)(lVar3 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
  *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x2c);
  if (lVar11 != 0) {
    IapAdsSystem_MaxAdsControlBanner__SetUp(lVar11,lVar3,*(undefined8 *)(param_1 + 0x78));
    lVar11 = *(long *)(param_1 + 0x70);
    lVar3 = thunk_FUN_03f9944c(DAT_091926d8);
    *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
    System_Object___ctor(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = uVar12;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar12);
    *(long *)(lVar3 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    if (lVar11 != 0) {
      IapAdsSystem_MaxAdsControlMrec__SetUp(lVar11,lVar3,*(undefined8 *)(param_1 + 0x78));
      lVar9 = *(long *)(param_1 + 0x50);
      lVar3 = thunk_FUN_03f9944c(DAT_09188558);
      *(undefined8 *)(lVar3 + 0x38) = 0x404000003f800000;
      System_Object___ctor(lVar3,0);
      *(undefined8 *)(lVar3 + 0x10) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar7);
      *(undefined8 *)(lVar3 + 0x18) = uVar8;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),uVar8);
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(lVar11 + 0x20);
        iVar2 = *(int *)(lVar11 + 0x10);
        iVar1 = *(int *)(lVar11 + 0x1c);
        *(long *)(lVar3 + 0x30) = param_1;
        uVar12 = NEON_scvtf(uVar12,4);
        *(bool *)(lVar3 + 0x20) = iVar2 == 1;
        *(bool *)(lVar3 + 0x21) = iVar1 == 1;
        *(undefined8 *)(lVar3 + 0x24) = uVar12;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x30),param_1);
        *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x34);
        if (lVar9 != 0) {
          IapAdsSystem_MaxAdsControlRewardAds__SetUp(lVar9,lVar3,*(undefined8 *)(param_1 + 0x78));
          lVar9 = *(long *)(param_1 + 0x58);
          lVar3 = thunk_FUN_03f9944c(DAT_09188558);
          *(undefined8 *)(lVar3 + 0x38) = 0x404000003f800000;
          System_Object___ctor(lVar3,0);
          *(undefined8 *)(lVar3 + 0x10) = uVar5;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar5);
          *(undefined8 *)(lVar3 + 0x18) = uVar6;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x18),uVar6);
          lVar11 = *(long *)(param_1 + 0x20);
          if (lVar11 != 0) {
            iVar2 = *(int *)(lVar11 + 0x14);
            iVar1 = *(int *)(lVar11 + 0x18);
            uVar12 = NEON_scvtf(*(undefined8 *)(lVar11 + 0x28),4);
            *(long *)(lVar3 + 0x30) = param_1;
            *(bool *)(lVar3 + 0x20) = iVar2 == 1;
            *(bool *)(lVar3 + 0x21) = iVar1 == 1;
            *(undefined8 *)(lVar3 + 0x24) = uVar12;
            thunk_FUN_03f5d7b8((long *)(lVar3 + 0x30),param_1);
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x3c);
            if (lVar9 != 0) {
              IapAdsSystem_MaxAdsControlInterstitial__SetUp
                        (lVar9,lVar3,*(undefined8 *)(param_1 + 0x78));
              lVar11 = *(long *)(param_1 + 0x68);
              lVar3 = thunk_FUN_03f9944c(DAT_091926b8);
              *(undefined4 *)(lVar3 + 0x20) = 0x3f800000;
              System_Object___ctor(lVar3,0);
              *(undefined8 *)(lVar3 + 0x10) = local_68;
              thunk_FUN_03f5d7b8();
              *(long *)(lVar3 + 0x18) = param_1;
              thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
              *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(param_1 + 0x28);
              if (lVar11 != 0) {
                IapAdsSystem_MaxAdsControlAppOpen__SetUp
                          (lVar11,lVar3,*(undefined8 *)(param_1 + 0x78));
                lVar3 = *(long *)(param_1 + 0x48);
                *(undefined1 *)(param_1 + 0x44) = 1;
                if (lVar3 != 0) {
                  (**(code **)(lVar3 + 0x18))
                            (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
                }
                uVar4 = IapAdsSystem_IapAdsGlobalConfig__get_IsShowAdsDebugger();
                if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x81) == '\0')) {
                  *(undefined1 *)(param_1 + 0x81) = 1;
                  uVar12 = IapAdsSystem_MaxAdsManager__IEShowMediationDebugger();
                  UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar12,0);
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

