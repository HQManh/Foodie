// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$GetSelectableLocales
// address: 0x42dd178
// body: available
// range: 0x42dd178-0x42dd4c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dd4bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42dd4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Localization_CakeLocalization__GetSelectableLocales(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 local_68;
  undefined8 *puStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long *local_40;
  
  if ((DAT_0951741f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09175b28);
    FUN_03f5c2a4(&DAT_091a37d0);
    FUN_03f5c2a4(&DAT_091a37d8);
    FUN_03f5c2a4(&DAT_091a37e0);
    FUN_03f5c2a4(&DAT_09185fc8);
    FUN_03f5c2a4(&DAT_091ae3e0);
    FUN_03f5c2a4(&DAT_091ae400);
    FUN_03f5c2a4(&DAT_091ae428);
    FUN_03f5c2a4(&DAT_091ae3d8);
    FUN_03f5c2a4(&DAT_0917c688);
    FUN_03f5c2a4(&DAT_091897e0);
    FUN_03f5c2a4(&DAT_091e65b0);
    FUN_03f5c2a4(&DAT_0918ea70);
    DAT_0951741f = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = (long *)0x0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917c688);
  FUN_057e0400(lVar2,DAT_091ae3d8);
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = CakeOrder_Localization_CakeLocalization__get_IsReady();
  if ((uVar3 & 1) == 0) {
    return lVar2;
  }
  plVar4 = (long *)UnityEngine_Localization_Settings_LocalizationSettings__get_AvailableLocales(0);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185fc8) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_042dd2f8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185fc8,0);
LAB_042dd2f8:
    lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar6 != 0) {
      FUN_057e185c(&local_68,lVar6,DAT_091ae400);
      puStack_48 = puStack_60;
      local_50 = local_68;
      puStack_60 = &local_50;
      local_40 = local_58;
      local_68 = 0;
LAB_042dd34c:
      uVar3 = FUN_071bd28c(&local_50,DAT_091a37d8);
      lVar6 = DAT_091ae3e0;
      if ((uVar3 & 1) != 0) {
        if (local_40 != (long *)0x0) goto code_r0x042dd364;
        goto LAB_042dd37c;
      }
      FUN_071bd288(&local_50,DAT_091a37d0);
      if (*(int *)(DAT_0918ea70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = *(undefined8 **)(DAT_0918ea70 + 0xb8);
      lVar6 = puVar5[3];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918ea70 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar5 = *(undefined8 **)(DAT_0918ea70 + 0xb8);
        }
        uVar9 = *puVar5;
        lVar6 = thunk_FUN_03f9944c(DAT_09175b28);
        FUN_06d4541c(lVar6,uVar9,DAT_091e65b0,0);
        plVar4 = (long *)(*(long *)(DAT_0918ea70 + 0xb8) + 0x18);
        *plVar4 = lVar6;
        thunk_FUN_03f5d7b8(plVar4,lVar6);
      }
      if (lVar2 != 0) {
        FUN_057e280c(lVar2,lVar6,DAT_091ae428);
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x042dd364:
  if (((*(byte *)(*local_40 + 0x130) < *(byte *)(DAT_091897e0 + 0x130)) ||
      (*(long *)(*(long *)(*local_40 + 200) + (ulong)*(byte *)(DAT_091897e0 + 0x130) * 8 + -8) !=
       DAT_091897e0)) || ((param_1 & 1) != 0)) {
LAB_042dd37c:
    if (lVar2 != 0) {
      lVar7 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(long **)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = local_40;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar2,local_40,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_042dd34c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_042dd34c;
}

