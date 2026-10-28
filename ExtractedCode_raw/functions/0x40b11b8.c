// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<ChasedOffRoutine>d__117$$MoveNext
// address: 0x40b11b8
// body: available
// range: 0x40b11b8-0x40b12f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b12f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade_<ChasedOffRoutine>d__117__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09515ee7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515ee7 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = 0;
  if (iVar1 != 2) {
    lVar5 = *(long *)(param_1 + 0x28);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 != 0) {
        uVar2 = AnhPD_FoodOrder_HomeCustomerParade__ExitRoutine
                          (lVar5,*(undefined8 *)(param_1 + 0x20),0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8();
        uVar2 = 1;
        uVar3 = 2;
        goto LAB_040b12e0;
      }
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(lVar6 + 0x38);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar2,0);
        lVar4 = *(long *)(param_1 + 0x20);
        *(byte *)(lVar6 + 0x40) = (byte)uVar2 & 1;
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0x40) == '\0') {
            uVar2 = 0;
            if (*(long *)(lVar4 + 0x10) == 0) goto LAB_040b12f4;
            uVar2 = AnhPD_FoodOrder_Customer__ChangeState(*(long *)(lVar4 + 0x10),4,0,0,0);
          }
          if (lVar5 != 0) {
            uVar2 = AnhPD_FoodOrder_HomeCustomerParade__DescendRoutine
                              (lVar5,*(undefined8 *)(param_1 + 0x20),0);
            *(undefined8 *)(param_1 + 0x18) = uVar2;
            thunk_FUN_03f5d7b8();
            uVar3 = 1;
            uVar2 = 1;
            goto LAB_040b12e0;
          }
        }
      }
    }
LAB_040b12f4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar2);
  }
  uVar3 = 0xffffffff;
LAB_040b12e0:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar2;
}

