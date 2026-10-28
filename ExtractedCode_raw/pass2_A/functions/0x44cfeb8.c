// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$FinishAdoption
// address: 0x44cfeb8
// body: available
// range: 0x44cfeb8-0x44d00ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d00a4 to 0x44cf358 CookOrder.Cooking.Implement.CookingCustomerHandle$$WalkIn (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d00a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerView__FinishAdoption(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  double __x;
  float fVar7;
  double local_48;
  
  if ((*(char *)(param_1 + 0x119) == '\0') ||
     (uVar1 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                        (*(undefined8 *)(param_1 + 0xe0)), (uVar1 & 1) == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x119) = 0;
  if ((*(long *)(param_1 + 0xe0) == 0) ||
     (lVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(), lVar2 == 0))
  goto LAB_044d00a8;
  fVar6 = *(float *)(param_1 + 0x120);
  UnityEngine_Transform__set_position
            (*(undefined4 *)(param_1 + 0x11c),fVar6,*(undefined4 *)(param_1 + 0x124),lVar2,0);
  if ((*(long *)(param_1 + 0xe0) == 0) ||
     (((lVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(), lVar2 == 0 ||
       (fVar4 = (float)UnityEngine_Transform__get_localPosition(lVar2,0),
       *(long *)(param_1 + 0xe0) == 0)) ||
      (lVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform(), lVar2 == 0))))
  goto LAB_044d00a8;
  UnityEngine_Transform__set_localPosition(fVar4,fVar6,0,lVar2,0);
  lVar2 = *(long *)(param_1 + 0xe0);
  if (DAT_0951690d == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951690d = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar7 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  __x = (double)fVar7;
  dVar5 = modf(__x,&local_48);
  if (0.0 <= fVar7) {
    if (dVar5 == 0.5) {
      dVar5 = 1.0;
      goto LAB_044d0028;
    }
    local_48 = (double)(long)(__x + 0.5);
  }
  else if (dVar5 == -0.5) {
    dVar5 = -1.0;
LAB_044d0028:
    if (((long)local_48 & 1U) != 0) {
      local_48 = local_48 + dVar5;
    }
  }
  else {
    local_48 = (double)(long)(__x + -0.5);
  }
  if (lVar2 != 0) {
    iVar3 = (int)local_48;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (local_48 == INFINITY) {
      iVar3 = 1;
    }
    CookOrder_Cooking_Implement_CookingCustomerHandle__WalkIn
              (-fVar4,-fVar6,0x3e99999a,0x3e19999a,lVar2,iVar3,0);
    return;
  }
LAB_044d00a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

