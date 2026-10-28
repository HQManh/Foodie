// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaSauceStation$$TryStartManualProcess
// address: 0x4080610
// body: available
// range: 0x4080610-0x408070b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40806a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4080708 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_InGame_Pasta_PastaSauceStation__TryStartManualProcess(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_28;
  
  if (((*(long *)(param_1 + 0x68) == 0) ||
      (uVar2 = AnhPD_FoodOrder_CookingStation__get_AcceptsNewIntake(param_1,0), (uVar2 & 1) == 0))
     || (uVar2 = CakeOrder_InGame_Pasta_PastaSauceStation__get_IsWaitingForManualStart(param_1),
        (uVar2 & 1) == 0)) {
LAB_040806a4:
    uVar1 = 0;
LAB_040806a8:
    return uVar1 & 1;
  }
  lVar5 = *(long *)(param_1 + 0x58);
  if (lVar5 != 0) {
    uVar2 = 0;
    do {
      if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar2) goto LAB_040806a4;
      if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + uVar2 * 8 + 0x20);
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x39) == '\0')) &&
         ((uVar3 = CakeOrder_InGame_Pasta_PastaSauceStation__IsManualResult
                             (param_1,*(undefined8 *)(lVar5 + 0x20)), (uVar3 & 1) != 0 &&
          (uVar3 = AnhPD_FoodOrder_StationInteractGroup__IsReadyToProcess(lVar5,0), (uVar3 & 1) != 0
          )))) {
        lVar6 = *(long *)(param_1 + 0x68);
        local_28 = 0;
        AnhPD_FoodOrder_InteractVector___ctor(&local_28,uVar2 & 0xffffffff,0,0);
        if (lVar6 != 0) {
          AnhPD_FoodOrder_StationOrchestrator__TryStartProcess(lVar6,local_28,0);
          uVar4 = AnhPD_FoodOrder_CookingStation__get_WorkingResultId(param_1,0);
          uVar1 = System_String__op_Equality(uVar4,*(undefined8 *)(lVar5 + 0x20),0);
          goto LAB_040806a8;
        }
        break;
      }
      lVar5 = *(long *)(param_1 + 0x58);
      uVar2 = uVar2 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

