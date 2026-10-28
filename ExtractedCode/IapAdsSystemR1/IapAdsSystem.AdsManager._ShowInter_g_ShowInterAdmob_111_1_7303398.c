// rea decompile_all
// name: IapAdsSystem.AdsManager$$<ShowInter>g__ShowInterAdmob|111_1
// address: 0x7303398
// body: available
// range: 0x7303398-0x73034f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73034f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsManager__<ShowInter>g__ShowInterAdmob_111_1(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0952047b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852f0);
    FUN_03f5c2a4(&DAT_09185c40);
    DAT_0952047b = 1;
  }
  IapAdsSystem_AdsManager__OnStartOrDoneInter(param_1);
  lVar5 = *(long *)(param_2 + 8);
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  if ((lVar5 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    IapAdsSystem_AdsDataTracking__InterAdsAvail();
    plVar3 = (long *)IapAdsSystem_AdsManager__get_AdmobMediation(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091852f0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_07303464;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_091852f0,4);
LAB_07303464:
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
              goto LAB_073034d4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185c40,4);
LAB_073034d4:
                    /* WARNING: Could not recover jumptable at 0x073034ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(plVar3,uVar1,uVar2,puVar4[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

