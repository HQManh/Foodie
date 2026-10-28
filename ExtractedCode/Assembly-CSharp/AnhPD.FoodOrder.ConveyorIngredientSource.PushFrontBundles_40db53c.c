// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$PushFrontBundles
// address: 0x40db53c
// body: available
// range: 0x40db53c-0x40db6a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40db694 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40db6a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorIngredientSource__PushFrontBundles(long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09516072 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b300);
    FUN_03f5c2a4(&DAT_091abd98);
    FUN_03f5c2a4(&DAT_091abd80);
    FUN_03f5c2a4(&DAT_0917bee0);
    FUN_03f5c2a4(&DAT_091b8b58);
    FUN_03f5c2a4(&DAT_0917e328);
    DAT_09516072 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917b300) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_040db600;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b300,0);
LAB_040db600:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar1 != 0) {
      lVar4 = thunk_FUN_03f9944c(DAT_0917bee0);
      FUN_057e053c(lVar4,param_2,DAT_091abd80);
      plVar7 = (long *)(param_1 + 0x10);
      if (*plVar7 != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e0e78(lVar4,*plVar7,DAT_091abd98);
      }
      lVar3 = thunk_FUN_03f9944c(DAT_0917e328);
      FUN_05e2cb6c(lVar3,lVar4,DAT_091b8b58);
      *plVar7 = lVar3;
      thunk_FUN_03f5d7b8(plVar7,lVar3);
      return;
    }
  }
  return;
}

