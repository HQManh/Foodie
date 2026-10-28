// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlBanner$$SetUp
// address: 0x730eeb4
// body: available
// range: 0x730eeb4-0x730f23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730f214 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x730f234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730f238 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlBanner__SetUp
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((DAT_095204f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181a28);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f9a0);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09218788);
    FUN_03f5c2a4(&DAT_091fb490);
    FUN_03f5c2a4(&DAT_09200e30);
    DAT_095204f1 = 1;
  }
  plVar7 = (long *)(param_1 + 0x20);
  *plVar7 = param_3;
  thunk_FUN_03f5d7b8(plVar7,param_3);
  puVar9 = (undefined8 *)(param_1 + 0x18);
  *puVar9 = param_2;
  thunk_FUN_03f5d7b8(puVar9,param_2);
  *(undefined8 *)(param_1 + 0x58) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),param_4);
  uVar2 = System_String__IsNullOrEmpty(*puVar9,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseTestAdsId();
  if ((uVar2 & 1) != 0) {
    *puVar9 = DAT_09218788;
    thunk_FUN_03f5d7b8(puVar9);
  }
  if (*plVar7 != 0) {
    if (*(int *)(*plVar7 + 0x1c) < 1) {
      return;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_09176b28);
    FUN_06fc96ac(lVar3,DAT_0919f978);
    lVar6 = *plVar7;
    if (lVar6 != 0) {
      if ((*(long *)(lVar6 + 0x28) != 0) && (*(long *)(lVar6 + 0x30) != 0)) {
        if (*(int *)(*(long *)(lVar6 + 0x28) + 0x18) != *(int *)(*(long *)(lVar6 + 0x30) + 0x18)) {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(DAT_091fb490,0);
          lVar6 = *plVar7;
          if (lVar6 == 0) goto LAB_0730f234;
        }
        lVar8 = *(long *)(lVar6 + 0x28);
        if ((lVar8 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) goto LAB_0730f234;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_Math__Min(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar6 + 0x18),0);
        if (0 < (int)uVar1) {
          uVar2 = 0;
          do {
            if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x28), lVar6 == 0))
            goto LAB_0730f234;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0730f238;
            if (lVar3 == 0) goto LAB_0730f234;
            uVar4 = FUN_06fca63c(lVar3,*(undefined8 *)(lVar6 + uVar2 * 8 + 0x20),DAT_0919f9a0);
            lVar6 = *plVar7;
            if ((uVar4 & 1) == 0) {
              if ((lVar6 == 0) || (lVar8 = *(long *)(lVar6 + 0x28), lVar8 == 0)) goto LAB_0730f234;
              if (*(uint *)(lVar8 + 0x18) <= uVar2) {
LAB_0730f238:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar6 = *(long *)(lVar6 + 0x30);
              if (lVar6 == 0) goto LAB_0730f234;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0730f238;
              FUN_06fca448(lVar3,*(undefined8 *)(lVar8 + uVar2 * 8 + 0x20),
                           *(undefined4 *)(lVar6 + uVar2 * 4 + 0x20),DAT_0919f990);
            }
            else {
              if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_0730f234;
              if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0730f238;
              uVar5 = System_String__Concat
                                (DAT_09200e30,*(undefined8 *)(lVar6 + uVar2 * 8 + 0x20),0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar5,0);
            }
            uVar2 = uVar2 + 1;
          } while (uVar1 != uVar2);
        }
      }
      lVar6 = thunk_FUN_03f9944c(DAT_09181a28);
      IapAdsSystem_BannerRefreshConfiguration___ctor(lVar6,0);
      if ((*plVar7 != 0) && (lVar6 != 0)) {
        uVar5 = *(undefined8 *)(*plVar7 + 0x1c);
        *(long *)(lVar6 + 0x18) = lVar3;
        *(undefined8 *)(lVar6 + 0x10) = uVar5;
        thunk_FUN_03f5d7b8((long *)(lVar6 + 0x18),lVar3);
        *(long *)(param_1 + 0x10) = lVar6;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),lVar6);
        return;
      }
    }
  }
LAB_0730f234:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

