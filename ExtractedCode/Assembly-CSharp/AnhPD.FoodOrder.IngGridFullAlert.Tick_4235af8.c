// rea decompile_all
// name: AnhPD.FoodOrder.IngGridFullAlert$$Tick
// address: 0x4235af8
// body: available
// range: 0x4235af8-0x4235c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4235b9c to 0x42449c0 AnhPD.FoodOrder.IngGridFullAlert$$TickPulse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4235c2c to 0x4244a9c AnhPD.FoodOrder.IngGridFullAlert$$Blink (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4235c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngGridFullAlert__Tick(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09516e5c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e5c = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x31) = 0;
  }
  if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0x32) != '\0')) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      *(undefined1 *)(param_1 + 0x30) = 0;
      AnhPD_FoodOrder_IngGridFullAlert__Hide(param_1);
    }
    AnhPD_FoodOrder_IngGridFullAlert__TickPulse(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x10),0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar2,1,0);
  }
  if ((param_3 & 1) != 0) {
    if (*(char *)(param_1 + 0x31) == '\0') {
      fVar5 = *(float *)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x31) = 1;
      *(float *)(param_1 + 0x34) = fVar5;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x34);
    }
    fVar4 = (float)UnityEngine_Time__get_deltaTime(0);
    *(float *)(param_1 + 0x34) = fVar5 - fVar4;
    if (fVar5 - fVar4 <= 0.0) {
      *(undefined2 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(param_1 + 0x32) = 1;
      AnhPD_FoodOrder_IngGridFullAlert__Hide(param_1);
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x04235c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
  AnhPD_FoodOrder_IngGridFullAlert__Blink(param_1);
  return;
}

