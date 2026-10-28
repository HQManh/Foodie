// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$get_SourceLocale
// address: 0x42dc874
// body: available
// range: 0x42dc874-0x42dca63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dca5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42dca60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * CakeOrder_Localization_CakeLocalization__get_SourceLocale(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_09517422 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091a37d0);
    FUN_03f5c2a4(&DAT_091a37d8);
    FUN_03f5c2a4(&DAT_091a37e0);
    FUN_03f5c2a4(&DAT_09185fc8);
    FUN_03f5c2a4(&DAT_091ae400);
    FUN_03f5c2a4(&DAT_091897e0);
    FUN_03f5c2a4(&DAT_0921ae70);
    DAT_09517422 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = CakeOrder_Localization_CakeLocalization__get_IsReady();
  if ((uVar1 & 1) == 0) {
    return (long *)0x0;
  }
  plVar2 = (long *)UnityEngine_Localization_Settings_LocalizationSettings__get_AvailableLocales(0);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185fc8) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_042dc98c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185fc8,0);
LAB_042dc98c:
    lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar4 != 0) {
      FUN_057e185c(&local_48,lVar4,DAT_091ae400);
      do {
        uVar1 = FUN_071bd28c(&local_48,DAT_091a37d8);
        plVar2 = local_38;
        if ((uVar1 & 1) == 0) {
          plVar2 = (long *)0x0;
          break;
        }
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while (((*(byte *)(DAT_091897e0 + 0x130) <= *(byte *)(*local_38 + 0x130)) &&
               (*(long *)(*(long *)(*local_38 + 200) + (ulong)*(byte *)(DAT_091897e0 + 0x130) * 8 +
                         -8) == DAT_091897e0)) ||
              (uVar1 = System_String__op_Equality(local_38[3],DAT_0921ae70,0), (uVar1 & 1) == 0));
      FUN_071bd288(&local_48,DAT_091a37d0);
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

