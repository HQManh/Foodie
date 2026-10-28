// rea decompile_all
// name: UniRx.UnityUIComponentExtensions.<>c$$<OnValueChangedAsObservable>b__8_0
// address: 0x40af364
// body: available
// range: 0x40af364-0x40af4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40af4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_UnityUIComponentExtensions_<>c__<OnValueChangedAsObservable>b__8_0
               (undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if ((DAT_09515ed2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b228);
    FUN_03f5c2a4(&DAT_0917b278);
    FUN_03f5c2a4(&DAT_091ddc88);
    DAT_09515ed2 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar6 = (**(code **)(*param_2 + 0x418))(param_2,*(undefined8 *)(*param_2 + 0x420));
    if (param_3 != (long *)0x0) {
      lVar3 = *param_3;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917b278) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_040af42c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b278,0);
LAB_040af42c:
      (*(code *)*puVar1)(uVar6,param_3,puVar1[1]);
      plVar2 = (long *)FUN_04e3176c(param_2[0x25],DAT_091ddc88);
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917b228) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_040af4a4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917b228,0);
LAB_040af4a4:
                    /* WARNING: Could not recover jumptable at 0x040af4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar1)(plVar2,param_3,puVar1[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

