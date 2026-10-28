// rea decompile_all
// name: CakeOrder.UICurrencyCounter$$GetAmountData
// address: 0x4259f3c
// body: available
// range: 0x4259f3c-0x425a127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425a124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CakeOrder_UICurrencyCounter__GetAmountData(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if ((DAT_09516f3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3020);
    FUN_03f5c2a4(&DAT_091a3028);
    FUN_03f5c2a4(&DAT_091a3030);
    FUN_03f5c2a4(&DAT_09185f10);
    FUN_03f5c2a4(&DAT_091ad428);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b4b50);
    DAT_09516f3e = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (long *)0x0;
  if ((*(char *)(param_1 + 0x88) == '\0') || (uVar4 = FUN_05a8f088(DAT_091b4b50), (uVar4 & 1) == 0))
  {
    iVar2 = 0;
  }
  else {
    lVar5 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar8 = **(long **)(lVar5 + 0xb8);
    lVar5 = CakeOrder_UICurrencyCounter__get_CurrencySO(param_1);
    if ((lVar5 == 0) || (lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (lVar8,*(undefined8 *)(lVar5 + 0x18),0);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_057e185c(&local_48,*(long *)(param_1 + 0x90),DAT_091ad428);
    while (uVar4 = FUN_071bd28c(&local_48,DAT_091a3028), plVar1 = local_38, (uVar4 & 1) != 0) {
      if (local_38 != (long *)0x0) {
        lVar5 = *local_38;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185f10) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0425a0ec;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185f10,1);
LAB_0425a0ec:
        iVar3 = (*(code *)*puVar6)(plVar1,puVar6[1]);
        iVar2 = iVar3 + iVar2;
      }
    }
    FUN_071bd288(&local_48,DAT_091a3020);
  }
  return iVar2;
}

