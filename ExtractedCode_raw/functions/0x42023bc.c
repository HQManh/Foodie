// rea decompile_all
// name: AnhPD.FoodOrder.Customer$$FinishEat
// address: 0x42023bc
// body: available
// range: 0x42023bc-0x4202493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4202430 to 0x4201324 AnhPD.FoodOrder.Customer$$ChangeState (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420247c to 0x4202120 AnhPD.FoodOrder.Customer$$HoldAngry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Customer__FinishEat(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = (long *)(param_1 + 0xa0);
  lVar6 = *plVar1;
  *plVar1 = 0;
  plVar5 = (long *)(param_1 + 0xc0);
  lVar7 = *plVar5;
  thunk_FUN_03f5d7b8(plVar1,0);
  *plVar5 = 0;
  thunk_FUN_03f5d7b8(plVar5,0);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if ((lVar6 == 0) ||
       (uVar2 = (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28)),
       (uVar2 & 1) == 0)) {
      if (*(char *)(param_1 + 0x98) != '\0') {
        AnhPD_FoodOrder_Customer__HoldAngry(param_1,1);
        return;
      }
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      uVar3 = 2;
      uVar4 = 1;
    }
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  AnhPD_FoodOrder_Customer__ChangeState(param_1,uVar3,0,uVar4);
  return;
}

