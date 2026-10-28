// rea decompile_all
// name: CakeOrder.InGame.InGameComboMechanicControl$$IncreaseComboStep
// address: 0x438ee44
// body: available
// range: 0x438ee44-0x438f0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438f0ec to 0x438f108 CakeOrder.InGame.LevelBaseCakeOrderAbstract$$ActivateBooster (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x438f0f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameComboMechanicControl__IncreaseComboStep(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  double dVar6;
  double __x;
  float fVar7;
  double local_48;
  
  if ((DAT_09517a0c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192358);
    FUN_03f5c2a4(&DAT_0919f990);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_0921aae0);
    FUN_03f5c2a4(&DAT_09223058);
    DAT_09517a0c = 1;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    return;
  }
  param_2 = *(int *)(param_1 + 0x40) + param_2;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(int *)(param_1 + 0x40) = param_2;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0438f0f0;
  if (param_2 < *(int *)(*(long *)(param_1 + 0x28) + 0x14)) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0438ef28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  uVar5 = UnityEngine_Time__get_time(0);
  lVar3 = *(long *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09192358);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) goto LAB_0438f0f0;
  *(undefined4 *)(lVar3 + 0x14) = 8;
  lVar2 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar2,DAT_0919f978);
  plVar4 = (long *)(lVar3 + 0x18);
  *plVar4 = lVar2;
  thunk_FUN_03f5d7b8(plVar4,lVar2);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_0438f0f0;
  lVar2 = *plVar4;
  fVar7 = *(float *)(*(long *)(param_1 + 0x28) + 0x1c);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar7;
  dVar6 = modf(__x,&local_48);
  if (0.0 <= fVar7) {
    if (dVar6 == 0.5) {
      dVar6 = 1.0;
      goto LAB_0438f044;
    }
    local_48 = (double)(long)(__x + 0.5);
  }
  else if (dVar6 == -0.5) {
    dVar6 = -1.0;
LAB_0438f044:
    if (((long)local_48 & 1U) != 0) {
      local_48 = local_48 + dVar6;
    }
  }
  else {
    local_48 = (double)(long)(__x + -0.5);
  }
  if (lVar2 != 0) {
    iVar1 = -0x80000000;
    if (local_48 != INFINITY) {
      iVar1 = (int)local_48;
    }
    FUN_06fca448(lVar2,DAT_0921aae0,iVar1,DAT_0919f990);
    if (*plVar4 != 0) {
      FUN_06fca448(*plVar4,DAT_09223058,0xffffffff,DAT_0919f990);
      if (*(long *)(param_1 + 0x20) != 0) {
        CakeOrder_InGame_LevelBaseCakeOrderAbstract__ActivateBooster
                  (*(long *)(param_1 + 0x20),lVar3,0);
        return;
      }
    }
  }
LAB_0438f0f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

