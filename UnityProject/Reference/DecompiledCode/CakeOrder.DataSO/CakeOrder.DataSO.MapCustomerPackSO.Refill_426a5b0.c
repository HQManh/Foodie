// rea decompile_all
// name: CakeOrder.DataSO.MapCustomerPackSO$$Refill
// address: 0x426a5b0
// body: available
// range: 0x426a5b0-0x426a82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426a810 to 0x57e09ec FUN_057e09ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x426a82c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_DataSO_MapCustomerPackSO__Refill(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  if ((DAT_09516fdc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab790);
    FUN_03f5c2a4(&DAT_091ab798);
    FUN_03f5c2a4(&DAT_091ab7b8);
    FUN_03f5c2a4(&DAT_091ab7c0);
    FUN_03f5c2a4(&DAT_091ab7c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fdc = 1;
  }
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    iVar7 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar7) {
      System_Array__Clear(*(undefined8 *)(lVar2 + 0x10),0,iVar7,0);
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) goto LAB_0426a82c;
    }
    FUN_057e0e78(lVar2,*(undefined8 *)(param_1 + 0x18),DAT_091ab790);
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x20) + 0x18);
      if (0 < iVar7 + -1) {
        do {
          uVar1 = UnityEngine_Random__Range(0,iVar7,0);
          lVar2 = *(long *)(param_1 + 0x20);
          if (lVar2 == 0) goto LAB_0426a82c;
          uVar3 = FUN_057e0998(lVar2,uVar1,DAT_091ab7c0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_0426a82c;
          iVar7 = iVar7 + -1;
          uVar4 = FUN_057e0998(*(long *)(param_1 + 0x20),iVar7,DAT_091ab7c0);
          FUN_057e09ec(lVar2,iVar7,uVar3,DAT_091ab7c8);
          FUN_057e09ec(lVar2,uVar1,uVar4,DAT_091ab7c8);
        } while (1 < iVar7);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar5 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 == 0) goto LAB_0426a82c;
        if (1 < *(int *)(lVar2 + 0x18)) {
          uVar3 = FUN_057e0998(lVar2,*(int *)(lVar2 + 0x18) + -1,DAT_091ab7c0);
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar3,uVar4,0);
          if ((uVar5 & 1) != 0) {
            lVar2 = *(long *)(param_1 + 0x20);
            if (lVar2 != 0) {
              iVar7 = *(int *)(lVar2 + 0x18);
              uVar3 = FUN_057e0998(lVar2,0,DAT_091ab7c0);
              lVar6 = *(long *)(param_1 + 0x20);
              if (lVar6 != 0) {
                uVar4 = FUN_057e0998(lVar6,*(int *)(lVar6 + 0x18) + -1,DAT_091ab7c0);
                FUN_057e09ec(lVar2,iVar7 + -1,uVar3,DAT_091ab7c8);
                FUN_057e09ec(lVar2,0,uVar4,DAT_091ab7c8);
                return;
              }
            }
            goto LAB_0426a82c;
          }
        }
      }
      return;
    }
  }
LAB_0426a82c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

