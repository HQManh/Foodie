// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$<Leave>b__83_0
// address: 0x44d4644
// body: available
// range: 0x44d4644-0x44d482f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d4828 to 0x44cf26c CookOrder.Cooking.Implement.CookingCustomerHandle$$LocalMove (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44d482c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerView__<Leave>b__83_0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_095182de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c63d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182de = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_1,0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                        (*(undefined8 *)(param_1 + 0xe0)), (uVar1 & 1) == 0)) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_044d482c;
    UnityEngine_Rendering_SortingGroup__set_sortingOrder
              (*(long *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0);
  }
  if ((((*(long *)(param_1 + 0xe0) != 0) &&
       (CookOrder_Cooking_Implement_CookingCustomerHandle__SetTint
                  (*(undefined4 *)(param_1 + 0x7c),0x3e99999a), *(long *)(param_1 + 0xe0) != 0)) &&
      (CookOrder_Cooking_Implement_CookingCustomerHandle__SetVisualScale
                 (*(undefined4 *)(param_1 + 0x80),0x3e99999a), *(long *)(param_1 + 0xe0) != 0)) &&
     (CookOrder_Cooking_Implement_CookingCustomerHandle__SetAnimSpeed(0x3f800000),
     *(long *)(param_1 + 0xe0) != 0)) {
    fVar7 = *(float *)(param_1 + 0x78);
    lVar2 = CookOrder_Cooking_Implement_CookingCustomerHandle__get_transform();
    if (lVar2 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position(lVar2,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        fVar7 = fVar7 - fVar5;
        fVar6 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_1 + 0x20),0);
        lVar2 = *(long *)(param_1 + 0xe0);
        fVar5 = 0.0001;
        if (0.0001 <= fVar6) {
          fVar5 = fVar6;
        }
        if (*(char *)(param_1 + 0x84) == '\0') {
          fVar6 = 0.01;
          if (0.01 <= *(float *)(param_1 + 0x3c)) {
            fVar6 = *(float *)(param_1 + 0x3c);
          }
          fVar6 = ABS(fVar7) / fVar6;
        }
        else {
          fVar6 = *(float *)(param_1 + 0x44);
        }
        uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar4,param_1,DAT_091c63d0,0);
        if (lVar2 != 0) {
          uVar3 = 0x1a;
          if (*(char *)(param_1 + 0x84) == '\0') {
            uVar3 = 1;
          }
          CookOrder_Cooking_Implement_CookingCustomerHandle__LocalMove
                    (fVar7 / fVar5,0,fVar6,0,lVar2,uVar4,uVar3);
          return;
        }
      }
    }
  }
LAB_044d482c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

