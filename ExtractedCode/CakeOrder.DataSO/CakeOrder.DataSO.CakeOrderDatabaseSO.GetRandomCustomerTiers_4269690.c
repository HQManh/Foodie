// rea decompile_all
// name: CakeOrder.DataSO.CakeOrderDatabaseSO$$GetRandomCustomerTiers
// address: 0x4269690
// body: available
// range: 0x4269690-0x426995b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4269954 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4269958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_DataSO_CakeOrderDatabaseSO__GetRandomCustomerTiers
               (long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  
  if ((DAT_09516fd1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ab788);
    FUN_03f5c2a4(&DAT_091ab798);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fd1 = 1;
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(param_3 + 0x10),0,iVar1,0);
    }
    if (param_4 != 0) {
      iVar1 = *(int *)(param_4 + 0x18);
      *(undefined4 *)(param_4 + 0x18) = 0;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(param_4 + 0x10),0,iVar1,0);
      }
      if (param_5 != 0) {
        iVar1 = *(int *)(param_5 + 0x18);
        *(undefined4 *)(param_5 + 0x18) = 0;
        *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(param_5 + 0x10),0,iVar1,0);
        }
        uVar2 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById(param_1,param_2);
        lVar11 = *(long *)(param_1 + 0x68);
        if (lVar11 != 0) {
          if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
            uVar12 = 0;
            uVar5 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar5 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar9 = *(long *)(lVar11 + 0x20 + uVar12 * 8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = UnityEngine_Object__op_Equality(lVar9,0,0);
              if ((uVar5 & 1) == 0) {
                if (lVar9 == 0) goto LAB_04269958;
                if (*(int *)(lVar9 + 0x3c) == 0) {
                  uVar10 = *(undefined8 *)(lVar9 + 0x40);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar5 = UnityEngine_Object__op_Equality(uVar10,0,0);
                  if (((uVar5 & 1) == 0) &&
                     (plVar4 = *(long **)(lVar9 + 0x48), plVar4 != (long *)0x0)) {
                    uVar5 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
                    if ((uVar5 & 1) != 0) {
                      if (*(long *)(lVar9 + 0x40) == 0) goto LAB_04269958;
                      uVar5 = System_String__op_Equality
                                        (*(undefined8 *)(*(long *)(lVar9 + 0x40) + 0x18),param_2,0);
                      lVar8 = DAT_091ab788;
                      if ((uVar5 & 1) == 0) {
                        if (-1 < (int)uVar2) {
                          if (*(long *)(lVar9 + 0x40) == 0) goto LAB_04269958;
                          uVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                                            (param_1,*(undefined8 *)(*(long *)(lVar9 + 0x40) + 0x18)
                                            );
                          lVar8 = DAT_091ab788;
                          if (-1 < (int)uVar3) {
                            lVar6 = param_4;
                            if (uVar2 <= uVar3) {
                              lVar6 = param_5;
                            }
                            lVar7 = *(long *)(lVar6 + 0x10);
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar3 = *(uint *)(lVar6 + 0x18);
                              if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                                lVar8 = *(long *)(lVar8 + 0x20);
                                goto LAB_04269914;
                              }
                              *(uint *)(lVar6 + 0x18) = uVar3 + 1;
                              plVar4 = (long *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
                              *plVar4 = lVar9;
                              goto LAB_042698f8;
                            }
                            goto LAB_04269958;
                          }
                        }
                      }
                      else {
                        lVar6 = *(long *)(param_3 + 0x10);
                        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
                        if (lVar6 == 0) goto LAB_04269958;
                        uVar3 = *(uint *)(param_3 + 0x18);
                        if (uVar3 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(param_3 + 0x18) = uVar3 + 1;
                          plVar4 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
                          *plVar4 = lVar9;
LAB_042698f8:
                          thunk_FUN_03f5d7b8(plVar4,lVar9);
                        }
                        else {
                          lVar8 = *(long *)(lVar8 + 0x20);
                          lVar6 = param_3;
LAB_04269914:
                          FUN_057e0c68(lVar6,lVar9,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x70));
                        }
                      }
                    }
                  }
                }
              }
              uVar5 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_04269958:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

