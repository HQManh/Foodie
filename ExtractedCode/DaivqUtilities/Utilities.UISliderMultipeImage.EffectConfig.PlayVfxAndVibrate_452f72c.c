// rea decompile_all
// name: Utilities.UISliderMultipeImage.EffectConfig$$PlayVfxAndVibrate
// address: 0x452f72c
// body: available
// range: 0x452f72c-0x452f913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452f910 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UISliderMultipeImage_EffectConfig__PlayVfxAndVibrate(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *local_28;
  
  if ((DAT_09518633 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd9f8);
    FUN_03f5c2a4(&DAT_091cdc48);
    FUN_03f5c2a4(&DAT_09186248);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518633 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  local_28 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_04b7d49c(*(long *)(param_1 + 0x10),&local_28,DAT_091cdc48);
      if ((uVar2 & 1) == 0) goto LAB_0452f8f4;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar3 = FUN_04b7c324(*(long *)(param_1 + 0x10),DAT_091cd9f8), lVar3 != 0)) {
        UnityEngine_Transform__SetParent(lVar3,param_2,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                   *(undefined4 *)(lVar5 + 0x14),lVar3,0);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        UnityEngine_RectTransform__set_anchoredPosition
                  (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1]
                   ,lVar3,0);
        plVar1 = local_28;
        if (local_28 != (long *)0x0) {
          lVar3 = *local_28;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09186248) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0452f8e8;
              }
              uVar2 = uVar2 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_28,DAT_09186248,1);
LAB_0452f8e8:
          (*(code *)*puVar4)(plVar1,puVar4[1]);
          goto LAB_0452f8f4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0452f8f4:
  MoreMountains_NiceVibrations_MMVibrationManager__Haptic(*(undefined4 *)(param_1 + 0x20),0);
  return;
}

