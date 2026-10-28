// rea decompile_all
// name: IapAdsSystem.AdsManager$$<ShowVideo>g__ShowMax|113_1
// address: 0x7303bd0
// body: available
// range: 0x7303bd0-0x7303d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7303d10 to 0x72fc67c IapAdsSystem.AdsDataTracking$$AppsFlyerTrackRewardTriggered (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7303d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__<ShowVideo>g__ShowMax_113_1(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0952047d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_09185c40);
    DAT_0952047d = 1;
  }
  plVar3 = (long *)IapAdsSystem_AdsManager__get_MaxMediation(param_1);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091852f0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_07303c78;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,3);
LAB_07303c78:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar1 = *(undefined8 *)(param_2 + 8);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185c40) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_07303ce8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185c40,4);
LAB_07303ce8:
      (*(code *)*puVar4)(plVar3,uVar1,uVar2,puVar4[1]);
      if (*(long *)(param_1 + 0x50) != 0) {
        IapAdsSystem_AdsDataTracking__AppsFlyerTrackRewardTriggered();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

